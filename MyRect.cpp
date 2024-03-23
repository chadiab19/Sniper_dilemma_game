



#include "BulletOfPlayer1.h"

#include "MyRect.h"
#include "BulletOfplayer2.h"
#include "currentPlayer.hpp"

MyRect::MyRect(){

}
void MyRect::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems();

}
void MyRect::keyPressEvent(QKeyEvent *event){


    // set the current position based on the player who get the focus
    currenttPlayer& currentPosition = currenttPlayer::getInstance();
    currentPosition.updatecurrentPlayer(is_player2);
    scene()->addItem(&currentPosition);

    // move the rectagles of player1 and player 2 based on the pressed button and the player who get the focus
    if ((event->key() == Qt::Key_Left) && (is_player2 == false)){
        if (pos().x() > 0)
            setPos(x()-25,y());


    }
    else if ((event->key() == Qt::Key_7) && is_player2 == true){
        if (pos().x() > 0)


            this->setPos(x()-25,y());

    }
    else if ((event->key() == Qt::Key_9) && (is_player2 == true)){
        if (pos().x()  < 1100)
            setPos(x()+25,y());
    }


    else if ((event->key() == Qt::Key_Right) && (is_player2 == false)){
        if (pos().x()  < 1100)

            setPos(x()+25,y());


    }
    else if (event->key() == Qt::Key_0 && is_player2 == true){
        // create a bullet

        BulleOfPlayer2 * bullet2 = new BulleOfPlayer2();
        bullet2->setPos(this->x(),y()-20);

        scene()->addItem(bullet2);

    }
    else if (event->key() == Qt::Key_Space && is_player2 == false){
        // create a bullet
        BulletOfPlayer1 * bullet1 = new BulletOfPlayer1();
        bullet1->setPos(this->x(),y()+500);
        scene()->addItem(bullet1);
    }




}

