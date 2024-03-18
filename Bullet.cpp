#include "Bullet.h"
#include "Bulletoffield.h"
#include "Enemy.h"
#include "enemysingleton.hpp"
#include <QTimer>
#include <QDebug>
#include <QGraphicsScene>
Bullet::Bullet(){
    // drew the rect0
    EnemySingleton& enemySingletonInstance11 = EnemySingleton::getInstance();

    Bulletoffield& field = Bulletoffield::getInstance();
    setRect(x(),y(),10,50);

    //setRect(x()-20,y()-20,10,50);
    qDebug() << "Child widget position relative to its parent widget: " << enemySingletonInstance11.player22->pos();
    qDebug()<<"x of ball descendant is"<<x()<<"and it is ordered de quitter from "<<enemySingletonInstance11.player22->x();

    //setPos(enemySingletonInstance11.player22->x(),enemySingletonInstance11.player22->y());
    // connec
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void Bullet::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i=0,n=colliding_items.size();i< n;++i){
        if(typeid(*(colliding_items[i]))==typeid(Enemy)){
            /*scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            return;*/

        }

    }
    // move bullet up
    EnemySingleton& enemySingletonInstance11 = EnemySingleton::getInstance();
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
    //field.setPos(field.x()+10,field.y());
    //setPos(enemySingletonInstance11.player22->x(),enemySingletonInstance11.player22->y()+10);
    //qDebug()<<"x2 of ball descendant is"<<x()<<"and it is ordered de quitter from "<<enemySingletonInstance11.player22->x();
    //setPos(x(),y()-3);
    if(y()<230)
    {
        setPos(x(),y()-3);

    }
    else{
        setPos(x(),y()-20);

    }
    if (pos().y() + rect().height() < 0){
        scene()->removeItem(this);
        delete this;
    }
}
