#include "Enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h> // rand() -> really large int
#include <QKeyEvent>
#include <QDebug>
#include "Bulletennemy.h"
void Enemy::keyPressEvent(QKeyEvent *event){
    if (event->key() == Qt::Key_3){
        Bulletennemy * bullet3 = new Bulletennemy();
        bullet3->setPos(x(),y()+150);
        scene()->addItem(bullet3);

    }

}
Enemy::Enemy(): QObject(), QGraphicsRectItem(){
    //set random position

    setPos(140,0);

    // drew the rect
    setRect(0,0,100,100);
    /*while(1){
        QTimer * timer = new QTimer(this);
        connect(timer,SIGNAL(timeout()),this,SLOT(move()));

        timer->start(50);

    }*/


    // connect
    /*QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);*/
}

void Enemy::move(){
    // move enemy down
    int random_number = rand() % 70;
    setPos(x()+random_number,y());
    if (pos().y() + rect().height() < 0){
        scene()->removeItem(this);
        delete this;
    }
}
