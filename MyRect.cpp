

#include "MyRect.h"
#include <QKeyEvent>
#include <QDebug>
#include <QGraphicsScene>
#include "Bullet.h"
#include "Enemy.h"
#include <QTimer>
#include "Bulletennemy.h"
#include "Bulletoffield.h"
#include "Score.hpp"
//Bulletennemy
void MyRect::move(){
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
    //this->setPos(x()-10,y());
    /*if (pos().y() + rect().height() < 0){
        scene()->removeItem(this);
        delete this;
    }*/
}
void MyRect::keyPressEvent(QKeyEvent *event){

    if ((event->key() == Qt::Key_Left) && (isblocked == false)){
        if (pos().x() > 0)
            setPos(x()-25,y());

    }
    else if ((event->key() == Qt::Key_7) && isblocked == true){
        if (pos().x() > 0)
             //setPos(x()-10,y());
            //timer_multi = new QTimer();

            //QObject::connect(timer,SIGNAL(&timer::timeout()),this,SLOT(&MyRect::move()));

            //connect(timer,SIGNAL(timeout()),this,SLOT(spawn23()));

            this->setPos(x()-25,y());
            //timer->start(50);
            //setPos(x()-10,y());
    }
    else if ((event->key() == Qt::Key_9) && (isblocked == true)){
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
    else if ((event->key() == Qt::Key_Right) && (isblocked == false)){
        if (pos().x() + 100 < 800)

            setPos(x()+25,y());
            //qDebug()<<"the new position is"<<y();

        //this->x()+=10;

    }
    else if (event->key() == Qt::Key_0 && isblocked == true){
        // create a bullet

        Bulletennemy * bullet2 = new Bulletennemy();
        bullet2->setPos(this->x(),y()-20);
        qDebug()<<"the position de tirement is"<<y();
        scene()->addItem(bullet2);
        /*textField->setPos(100,100);
        textField->setPlainText("the new");
        scene()->addItem(textField);*/
    }
    else if (event->key() == Qt::Key_Space && isblocked == false){
        // create a bullet
        Bullet * bullet = new Bullet();
        bullet->setPos(this->x(),y()+400);
        scene()->addItem(bullet);
    }
    else if (event->key() == Qt::Key_2){
        // create a bullet
        Enemy * enemy1 = new Enemy();
        enemy1->setRect(30,50,100,100); // change the rect from 0x0 (default) to 100x100 pixels

        // add the item to the scene
        scene()->addItem(enemy1);
        if (event->key() == Qt::Key_5){
        for(int i=0;i<5;i++){
            QTimer * timer = new QTimer(this);
            //connect(timer,SIGNAL(timeout()),enemy1,SLOT(enemy1->move()));
            enemy1->setRect(85,50,100,100);

            //Enemy * enemy1 = new Enemy();
            //enemy1->setRect(0,50,100,100);
            //enemy1->setPos(enemy1->x()+15,enemy1->y());
            //enemy1->move();
            //scene()->removeItem(enemy1);
            //delete enemy1;
            scene()->addItem(enemy1);
            timer->start(100);
            //scene()->removeItem(enemy1);
            //Bulletennemy * bullet3 = new Bulletennemy();
            //scene()->removeItem(enemy1);
            //bullet3->setPos(enemy1->pos().x(),20);
            //scene()->addItem(bullet3);

        }}


        // make rect focusable
        //enemy1->setFlag(QGraphicsItem::ItemIsFocusable);
        //enemy1->setFocus();

        //int random_number = (rand() % 700)-350;
        //int random_number = rand() % 700;
        //enemy1->setPos(x()-random_number,y()-500);
        //scene()->addItem(enemy1);

    }
    else if (event->key() == Qt::Key_3){
        Bullet * bullet3 = new Bullet();
        bullet3->setPos(0,20);
        scene()->addItem(bullet3);


    }
    else if (event->key() == Qt::Key_4){
        Bulletoffield& field = Bulletoffield::getInstance();
        field.setPos(90,250);
        scene()->addItem(&field);


        /*this->setFlag(QGraphicsItem::ItemIsFocusable);
        this->setFocus();*/

    }

}
void MyRect::spawn22(){
    // create an enemy
    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);
    //setPos(x(),y()-10);
}
