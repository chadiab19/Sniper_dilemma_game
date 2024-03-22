#include "Bulletennemy.h"
#include "Target.h"
#include "Enemy.h"
#include "player2.hpp"
#include "player1.hpp"
#include "Bullet.h"

#include <QTimer>
#include <QGraphicsScene>
Bulletennemy::Bulletennemy(){
    // drew the rect
    Player2& enemySingletonInstance22 = Player2::getInstance();


    setRect(x(),y()+100,10,50);
    //setPos(enemySingletonInstance22.player22->x(),)
    //qDebug()<<"x3 of ball ascendant is"<<x()<<"and it is ordered de quitter from "<<enemySingletonInstance22.player22->x();
    // connect
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
    score = new Score();
}

void Bulletennemy::move() {
    Target& field = Target::getInstance();
    Player1& enemySingletonInstance11 = Player1::getInstance();
    Player2& enemySingletonInstance22 = Player2::getInstance();
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i=0,n=colliding_items.size();i< n;++i){
        if(typeid(*(colliding_items[i]))==typeid(Bullet)){
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            return;

        }
        else if(typeid(*(colliding_items[i]))==typeid(Target)){
            scene()->removeItem(score);
            enemySingletonInstance22.points=enemySingletonInstance22.points+5;
            scene()->removeItem(this);
            delete this;
            return;
        }
        else if(typeid(*(colliding_items[i]))==typeid(MyRect)){
            enemySingletonInstance22.points=enemySingletonInstance22.points+10;
            scene()->removeItem(score);
            scene()->removeItem(this);
            delete this;
            return;
        }

    }

    //qDebug()<<"x of field is"<<field.x();
    if(field.x()>750 || field.x()<-100)
    {
        field.is_right=!field.is_right;
    }
    if(field.is_right){
        field.setPos(field.x()+1,field.y());

    }
    else{
        field.setPos(field.x()-1,field.y());

    }
    // move bullet up
    if(y()>275)
    {
        score->increase(enemySingletonInstance11.points,enemySingletonInstance22.points);
        scene()->addItem(score);
        setPos(x(),y()+1);

    }
    else{
        setPos(x(),y()+20);

    }
    //setPos(x(),y()+3);
    if (pos().y() > 540){

        scene()->removeItem(score);
        delete score;
        scene()->removeItem(this);
        delete this;
    }
}
