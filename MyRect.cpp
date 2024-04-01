#include <QMovie>
#include <QGraphicsPixmapItem>
#include <QTimer>



#include "BulletOfPlayer1.h"
#include <QPropertyAnimation>
#include "MyRect.h"
#include "BulletOfplayer2.h"
#include "currentPlayer.hpp"
#include <QGraphicsPixmapItem>
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


    QPixmap imageplayer1("C:/Users/21696/Downloads/Capture-player1-removebg-preview.png");
    QPixmap image("C:/Users/21696/Downloads/Capture.png");
    QPixmap image2("C:/Users/21696/Downloads/Capture25.PNG");
    //QMovie gif("C:/Users/21696/Downloads/character-dribbble.gif");
    //image.setMask(image.createMaskFromColor());



    // set the current position based on the player who get the focus
    currenttPlayer& currentPosition = currenttPlayer::getInstance();
    currentPosition.updatecurrentPlayer(is_player2);
    //QPixmap image("C:/Users/21696/Downloads/Capture22.PNG");
    scene()->addItem(&currentPosition);
    if(is_finished!=-1){
        currenttPlayer& currentPosition = currenttPlayer::getInstance();
        currentPosition.updatecurrentPlayer(true,is_finished);
        //QPixmap image("C:/Users/21696/Downloads/Capture22.PNG");
        scene()->addItem(&currentPosition);
    }

    // move the rectagles of player1 and player 2 based on the pressed button and the player who get the focus
    else if ((event->key() == Qt::Key_Left) && (is_player2 == false)){
        if (pos().x() > 0)
            //setPos(x()-25,y());
            if(fireplayer1!=0){
            scene()->removeItem(imageItemplayer1);
            scene()->removeItem(imageItemplayer1);
            //scene()->removeItem(imageItem2);
            //scene()->removeItem(imageItem2);
            fireplayer1--;}

            if(x()>24){
                setPos(x()-25,y());
                imageItemplayer1 = scene()->addPixmap(imageplayer1);
                imageItemplayer1->setPos(pos().x()-5, 555);
                imageItemplayer1->setScale(scaleFactorplayer1);
                fireplayer1++;

            }










    }
    else if ((event->key() == Qt::Key_7) && is_player2 == true){
        if (pos().x() > 0)
            if(fire!=0){
                scene()->removeItem(imageItem);
                scene()->removeItem(imageItem);
                //scene()->removeItem(imageItem2);
                //scene()->removeItem(imageItem2);
                fire--;
            }


            //QGraphicsPixmapItem item;
            if(x()>24){
                imageItem = scene()->addPixmap(image);
                imageItem->setPos(pos().x()-30, pos().y()-100);
                imageItem->setScale(scaleFactor);
                fire++;
                //scene()->addPixmap(image);
                this->setPos(x()-25,y());

            }
            // Set the QGraphicsPixmapItem's pixmap to the current frame of the GIF
            //item.setPixmap(gif.currentPixmap());
            //item.setPos(x()-15,y());

            // Add the QGraphicsPixmapItem to the scene
            //scene()->addItem(&item);

            // Start the GIF animation
            //gif.start();

            // Update the QGraphicsPixmapItem with the current frame every 50 milliseconds
            /*QTimer timer;
            QObject::connect(&timer, &QTimer::timeout, [&]() {
                item.setPixmap(gif.currentPixmap());
            });*/
            //timer.start(50);
            //gif.start();
            /*QTimer timer;
            QObject::connect(&timer, &QTimer::timeout, [&]() {
                imageItem->setPixmap(gif.currentPixmap());
            });
            timer.start(50);*/
            //imageItem->set
            //imageItem2 = scene()->addPixmap(image2);
            //imageItem2->setPos(pos().x()-25, pos().y()-100);


    }

    else if ((event->key() == Qt::Key_9) && (is_player2 == true)){
        if (pos().x()  < 1100)
            if(fire!=0){
                scene()->removeItem(imageItem);
                scene()->removeItem(imageItem);
                //scene()->removeItem(imageItem2);
                //scene()->removeItem(imageItem2);
                fire--;
            }
            if(pos().x()<1076){
                imageItem = scene()->addPixmap(image);
                imageItem->setPos(pos().x()+20, pos().y()-100);
            //imageItem2 = scene()->addPixmap(image2);
            //imageItem2->setPos(pos().x()+20, pos().y()-100);
                imageItem->setScale(scaleFactor);
                fire++;

                setPos(x()+25,y());




        }



            /*QPropertyAnimation *animation = new QPropertyAnimation();
            animation->setDuration(2000); // Animation duration in milliseconds
            animation->setStartValue(QPointF(100, 100)); // Start position
            animation->setEndValue(QPointF(300, 200)); // End position
            animation->setEasingCurve(QEasingCurve::InOutQuad); // Easing curve for smooth animation

            // Start the animation
            /*animation->start();*/


    }


    else if ((event->key() == Qt::Key_Right) && (is_player2 == false)){
        if (pos().x()  < 1100)
            if(fireplayer1!=0){
                scene()->removeItem(imageItemplayer1);
                scene()->removeItem(imageItemplayer1);
                //scene()->removeItem(imageItem2);
                //scene()->removeItem(imageItem2);
                fireplayer1--;}

            if(pos().x()<1076){

                  imageItemplayer1 = scene()->addPixmap(imageplayer1);
                  imageItemplayer1->setPos(pos().x()+20, 555);
                  imageItemplayer1->setScale(scaleFactorplayer1);
                  fireplayer1++;
                  setPos(x()+25,y());

            }
            /*if(fireplayer1!=0){
                scene()->removeItem(imageItemplayer1);
                scene()->removeItem(imageItemplayer1);
                //scene()->removeItem(imageItem2);
                //scene()->removeItem(imageItem2);
                fireplayer1--;
            }

        imageItemplayer1 = scene()->addPixmap(imageplayer1);
        imageItemplayer1->setPos(pos().x()-20, pos().y()-100);
        imageItemplayer1->setScale(scaleFactorplayer1);
        fireplayer1++;*/




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

