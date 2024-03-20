

#include "MyRect.h"
#include <QKeyEvent>
#include <QDebug>
#include <QGraphicsScene>
#include "Bullet.h"
#include "Enemy.h"
#include <QTimer>
#include "Bulletennemy.h"
#include "Target.h"
#include "Score.hpp"
//Bulletennemy
void MyRect::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
    /*for(int i=0,n=colliding_items.size();i< n;++i){
        if(typeid(*(colliding_items[i]))==typeid(Enemy)){
            /*scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            return;*/

        /*}*/


    // move bullet up
    //this->setPos(x()-10,y());
    /*if (pos().y() + rect().height() < 0){
        scene()->removeItem(this);
        delete this;
    }*/
}
void MyRect::keyPressEvent(QKeyEvent *event){

    if ((event->key() == Qt::Key_Left) && (is_player2 == false)){
        if (pos().x() > 0)
            setPos(x()-25,y());

    }
    else if ((event->key() == Qt::Key_7) && is_player2 == true){
        if (pos().x() > 0)
             //setPos(x()-10,y());
            //timer_multi = new QTimer();

            //QObject::connect(timer,SIGNAL(&timer::timeout()),this,SLOT(&MyRect::move()));

            //connect(timer,SIGNAL(timeout()),this,SLOT(spawn23()));

            this->setPos(x()-25,y());
            //timer->start(50);
            //setPos(x()-10,y());
    }
    else if ((event->key() == Qt::Key_9) && (is_player2 == true)){
        if (pos().x() + 100 < 800)
            setPos(x()+25,y());
    }
    /*else if (event->key() == Qt::Key_8 || (isblocked == false)){
        b=0;
        c=1;
    }*/
    /*else if (event->key() == Qt::Key_9){
        b=1;
        c=0;
    }*/
    else if ((event->key() == Qt::Key_Right) && (is_player2 == false)){
        if (pos().x() + 100 < 800)

            setPos(x()+25,y());
            //qDebug()<<"the new position is"<<y();

        //this->x()+=10;

    }
    else if (event->key() == Qt::Key_0 && is_player2 == true){
        // create a bullet

        Bulletennemy * bullet2 = new Bulletennemy();
        bullet2->setPos(this->x(),y()-20);
        //qDebug()<<"the position de tirement is"<<y();
        scene()->addItem(bullet2);
        /*textField->setPos(100,100);
        textField->setPlainText("the new");
        scene()->addItem(textField);*/
    }
    else if (event->key() == Qt::Key_Space && is_player2 == false){
        // create a bullet
        Bullet * bullet = new Bullet();
        bullet->setPos(this->x(),y()+400);
        scene()->addItem(bullet);
    }

    /*else if (event->key() == Qt::Key_3){
        Bullet * bullet3 = new Bullet();
        bullet3->setPos(0,20);
        scene()->addItem(bullet3);


    }*/
    else if (event->key() == Qt::Key_4){
        Target& field = Target::getInstance();
        field.setPos(90,255);
        scene()->addItem(&field);


        /*this->setFlag(QGraphicsItem::ItemIsFocusable);
        this->setFocus();*/

    }

}
/*void MyRect::spawn22(){
    // create an enemy
    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);
    //setPos(x(),y()-10);
}*/
