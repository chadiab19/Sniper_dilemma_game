#include <QMovie>
#include <QGraphicsPixmapItem>
#include <QTimer>

#include "BulletOfPlayer1.h"
#include <QPropertyAnimation>
#include "MyRect.h"
#include "BulletOfplayer2.h"
#include "currentPlayer.hpp"

MyRect::MyRect(){

}

void MyRect::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
}

void MyRect::initialrectangle(int playernumber){
    if(playernumber==1){
        QPixmap imageplayer1("C:/Users/21696/Downloads/Capture-player1-removebg-preview.png");
        imageItemplayer1 = scene()->addPixmap(imageplayer1);
        imageItemplayer1->setPos(pos().x()-5, 555);
        imageItemplayer1->setScale(scaleFactorplayer1);
        fireplayer1++;

    }
    else{
        QPixmap image("C:/Users/21696/Downloads/Capture.png");
        imageItem = scene()->addPixmap(image);
        imageItem->setPos(pos().x()-5, pos().y()-100);
        imageItem->setScale(scaleFactor);
        fire++;
    }
}

void MyRect::keyPressEvent(QKeyEvent *event){
    QPixmap image("C:/Users/21696/Downloads/Capture.png");
    QPixmap imageplayer1("C:/Users/21696/Downloads/Capture-player1-removebg-preview.png");
    currenttPlayer& currentPosition = currenttPlayer::getInstance();
    currentPosition.updatecurrentPlayer(is_player2);
    scene()->addItem(&currentPosition);

    if(is_finished!=-1){
        currenttPlayer& currentPosition = currenttPlayer::getInstance();
        currentPosition.updatecurrentPlayer(true,is_finished);
        scene()->addItem(&currentPosition);
    }

    if ((event->key() == Qt::Key_Left) && (is_player2 == false)){
        if (pos().x() > 0) {
            if(fireplayer1!=0){
                scene()->removeItem(imageItemplayer1);
                scene()->removeItem(imageItemplayer1);
                fireplayer1--;
            }
            if(x()>24){
                setPos(x()-25,y());
                imageItemplayer1 = scene()->addPixmap(imageplayer1);
                imageItemplayer1->setPos(pos().x()-5, 555);
                imageItemplayer1->setScale(scaleFactorplayer1);
                fireplayer1++;
            }
        }
    }
    else if ((event->key() == Qt::Key_7) && is_player2 == true){
        if (pos().x() > 0) {
            if(fire!=0){
                scene()->removeItem(imageItem);
                scene()->removeItem(imageItem);
                fire--;
            }
            if(x()>24){
                imageItem = scene()->addPixmap(image);
                imageItem->setPos(pos().x()-30, pos().y()-100);
                imageItem->setScale(scaleFactor);
                fire++;
                this->setPos(x()-25,y());
            }
        }
    }
    else if ((event->key() == Qt::Key_9) && (is_player2 == true)){
        if (pos().x() < 1100) {
            if(fire!=0){
                scene()->removeItem(imageItem);
                scene()->removeItem(imageItem);
                fire--;
            }
            if(pos().x()<1076){
                imageItem = scene()->addPixmap(image);
                imageItem->setPos(pos().x()+20, pos().y()-100);
                imageItem->setScale(scaleFactor);
                fire++;
                setPos(x()+25,y());
            }
        }
    }
    else if ((event->key() == Qt::Key_Right) && (is_player2 == false)){
        if (pos().x()  < 1100) {
            if(fireplayer1!=0){
                scene()->removeItem(imageItemplayer1);
                scene()->removeItem(imageItemplayer1);
                fireplayer1--;
            }
            if(pos().x()<1076){
                imageItemplayer1 = scene()->addPixmap(imageplayer1);
                imageItemplayer1->setPos(pos().x()+20, 555);
                imageItemplayer1->setScale(scaleFactorplayer1);
                fireplayer1++;
                setPos(x()+25,y());
            }
        }
    }
    else if (event->key() == Qt::Key_0 && is_player2 == true){
        // create a bullet
        BulleOfPlayer2 * bullet2 = new BulleOfPlayer2();
        bullet2->setPos(this->x(),-120);
        scene()->addItem(bullet2);
    }
    else if (event->key() == Qt::Key_Space && is_player2 == false){
        // create a bullet
        BulletOfPlayer1 * bullet1 = new BulletOfPlayer1();
        bullet1->setPos(this->x(),y()+500);
        scene()->addItem(bullet1);
    }
}


