#include "Bullet.h"
#include "Bulletennemy.h"
#include "Target.h"
#include "Enemy.h"
#include "player1.hpp"
#include "player2.hpp"
#include <QTimer>
#include <QDebug>
#include <QGraphicsScene>
Bullet::Bullet(){
    // drew the rect0
    Player1& enemySingletonInstance11 = Player1::getInstance();



    //score->k=score->k+1;


    //qDebug()<<"the new value of k is"<<enemySingletonInstance11.k;
    //score->delete()

    Target& field = Target::getInstance();
    setRect(x(),y(),10,50);
    enemySingletonInstance11.points=enemySingletonInstance11.points+1;

    //setRect(x()-20,y()-20,10,50);
    //qDebug() << "Child widget position relative to its parent widget: " << enemySingletonInstance11.player22->pos();
    //qDebug()<<"x of ball descendant is"<<x()<<"and it is ordered de quitter from "<<enemySingletonInstance11.player22->x();

    //setPos(enemySingletonInstance11.player22->x(),enemySingletonInstance11.player22->y());
    // connec
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
    score = new Score();
}

void Bullet::move(){

    Player1& enemySingletonInstance11 = Player1::getInstance();
    Player2& enemySingletonInstance22 = Player2::getInstance();
    Target& field = Target::getInstance();

    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i=0,n=colliding_items.size();i< n;++i){


        /*if(typeid(*(colliding_items[i]))==typeid(Bullet)){
            //scene()->removeItem(score);
            //enemySingletonInstance11.k=enemySingletonInstance11.k+5;

            scene()->removeItem(this);

            delete this;
            scene()->removeItem(colliding_items[i]);

            delete colliding_items[i];
            return;

        }*/

        if(typeid(*(colliding_items[i]))==typeid(Target)){
            scene()->removeItem(score);
            enemySingletonInstance11.points=enemySingletonInstance11.points+5;
            scene()->removeItem(this);
            delete this;
            return;
        }
        else if(typeid(*(colliding_items[i]))==typeid(MyRect)){
            enemySingletonInstance11.points=enemySingletonInstance11.points+10;
            scene()->removeItem(score);
            scene()->removeItem(this);
            delete this;
            return;
        }

    }
    // move bullet up

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
    //score = new Score();
    //score->k=score->k+1;


    //qDebug()<<"the new value of k is"<<enemySingletonInstance11.k;
    //score->delete()
    //score->increase(enemySingletonInstance11.k);




    //field.setPos(field.x()+10,field.y());
    //setPos(enemySingletonInstance11.player22->x(),enemySingletonInstance11.player22->y()+10);
    //qDebug()<<"x2 of ball descendant is"<<x()<<"and it is ordered de quitter from "<<enemySingletonInstance11.player22->x();
    //setPos(x(),y()-3);
    if(y()<235)
    {
        score->increase(enemySingletonInstance11.points,enemySingletonInstance22.points);
        scene()->addItem(score);


        setPos(x(),y()-1);

    }
    else{
        setPos(x(),y()-20);

    }
    if (pos().y() + rect().height() < 0){

        scene()->removeItem(score);
        delete score;
        //score->vider();

        scene()->removeItem(this);
        delete this;
    }
}
