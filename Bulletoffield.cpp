#include "Bulletoffield.h"
//#include "Enemy.h"
//#include "enemysingleton.hpp"
#include <QTimer>
#include <QDebug>
#include <QGraphicsScene>
Bulletoffield& Bulletoffield::getInstance(){
    static Bulletoffield instance;
    return instance;

}
Bulletoffield::Bulletoffield(){
    setRect(x(),y(),50,10);
    // drew the rect
    //Bulletoffield& enemySingletonInstance22 = Bulletoffield::getInstance();
}
Bulletoffield::~Bulletoffield(){
    // drew the rect
    //Bulletoffield& enemySingletonInstance22 = Bulletoffield::getInstance();
}
/*Bulletoffield::Bulletoffield(){
    // drew the rect0
    //EnemySingleton& enemySingletonInstance11 = EnemySingleton::getInstance();

    setRect(x(),y(),10,50);

    //setRect(x()-20,y()-20,10,50);
    qDebug() << "Child widget position relative to its parent widget: " << enemySingletonInstance11.player22->pos();
    qDebug()<<"x of ball descendant is"<<x()<<"and it is ordered de quitter from "<<enemySingletonInstance11.player22->x();

    //setPos(enemySingletonInstance11.player22->x(),enemySingletonInstance11.player22->y());
    // connec
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}*/

void Bulletoffield::move(){
    /*QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i=0,n=colliding_items.size();i< n;++i){
        if(typeid(*(colliding_items[i]))==typeid(Enemy)){
            /*scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            return;*/

        /*}

    }
    // move bullet up
    EnemySingleton& enemySingletonInstance11 = EnemySingleton::getInstance();
    //setPos(enemySingletonInstance11.player22->x(),enemySingletonInstance11.player22->y()+10);
    qDebug()<<"x2 of ball descendant is"<<x()<<"and it is ordered de quitter from "<<enemySingletonInstance11.player22->x();
    setPos(x(),y()-10);
    if (pos().y() + rect().height() < 0){
        scene()->removeItem(this);
        delete this;
    }*/
}
