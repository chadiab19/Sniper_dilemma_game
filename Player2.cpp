#include "player2.hpp"
#include "player1.hpp"

//#include "BulletOfPlayer1.h"
//#include <QGraphicsScene>
// Initialize the static instance of EnemySingleton
void Player2::run(){



    Player1& player1instance = Player1::getInstance();
    player1instance.rectOfPlayer->setFlag(QGraphicsItem::ItemIsFocusable);
    player1instance.rectOfPlayer->setFocus();

    qDebug()<<"no numbers playing";

    QThread::sleep(15);
    player1instance.start();


}
Player2& Player2::getInstance() {
    static Player2 instance;
    return instance;
}



Player2::Player2() {
    rectOfPlayer2->setRect(-5,-90,100,100);

}

// Private destructor to prevent deletion through pointers
Player2::~Player2() {

}







