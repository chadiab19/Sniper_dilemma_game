#include "Bulletennemy.h"
#include "Bulletoffield.h"
#include "Enemy.h"
#include "enemysingleton2.hpp"
#include "Bullet.h"
#include <QTimer>
#include <QGraphicsScene>
Bulletennemy::Bulletennemy(){
    // drew the rect
    EnemySingleton2& enemySingletonInstance22 = EnemySingleton2::getInstance();

    setRect(x(),y()+100,10,50);
    //setPos(enemySingletonInstance22.player22->x(),)
    qDebug()<<"x3 of ball ascendant is"<<x()<<"and it is ordered de quitter from "<<enemySingletonInstance22.player22->x();
    // connect
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void Bulletennemy::move() {
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i=0,n=colliding_items.size();i< n;++i){
        if(typeid(*(colliding_items[i]))==typeid(Bullet)){
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            return;

        }

    }
    Bulletoffield& field = Bulletoffield::getInstance();
    qDebug()<<"x of field is"<<field.x();
    if(field.x()>750 || field.x()<-100)
    {
        field.isright=!field.isright;
    }
    if(field.isright){
        field.setPos(field.x()+1,field.y());

    }
    else{
        field.setPos(field.x()-1,field.y());

    }
    // move bullet up
    setPos(x(),y()+3);
    if (pos().y() + rect().height() < 0){
        scene()->removeItem(this);
        delete this;
    }
}
