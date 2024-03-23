#include "player1.hpp"
#include "player2.hpp"
//#include "BulletOfPlayer1.h"


//#include <QGraphicsScene>
// Initialize the static instance of EnemySingleton
Player1& Player1::getInstance() {
    static Player1 instance;

    return instance;
}

// Private constructor to prevent instantiation

void Player1::run(){



    Player2& player2instance = Player2::getInstance();
    player2instance.rectOfPlayer2->setFlag(QGraphicsItem::ItemIsFocusable);

    player2instance.rectOfPlayer2->setFocus();


    player2instance.rectOfPlayer2->is_player2=true;
    this->rectOfPlayer->is_player2=false;
    numberOfPeriods++;

    QThread::sleep(15);

    if(numberOfPeriods==5){
        qDebug()<<"stopped";
        if(this->points< player2instance.points){
            qDebug()<<"player 2 wins"<<player2instance.points;

        }
        else if(this->points> player2instance.points){
            qDebug()<<"playe1 1 wins"<<this->points;

        }
        else{
            qDebug()<<"draw";

        }

        QCoreApplication::exit();
    }


    player2instance.start();


}
Player1::Player1() {
    rectOfPlayer->setRect(-5,560,100,100);

}


// Private destructor to prevent deletion through pointers
Player1::~Player1() {

}

