#include "player1.hpp"
#include "player2.hpp"
<<<<<<< HEAD
#include <QGraphicsDropShadowEffect>
#include "currentPlayer.hpp"
=======
>>>>>>> 6b4070fcef97917ddb1e0cd9995a224d9b973ffb

// Initialize the static instance of Player1
Player1& Player1::getInstance() {
    static Player1 instance;
    return instance;
}



void Player1::run(){

<<<<<<< HEAD

=======
>>>>>>> 6b4070fcef97917ddb1e0cd9995a224d9b973ffb
    // Get the instance of Player2 singleton
    Player2& player2instance = Player2::getInstance();
    // Make the rectangle of Player2 focusable
    player2instance.rectOfPlayer2->setFlag(QGraphicsItem::ItemIsFocusable);
    // Set focus to the rectangle of Player2
    player2instance.rectOfPlayer2->setFocus();


    player2instance.rectOfPlayer2->is_player2=true;
    this->rectOfPlayer->is_player2=false;
    //variable that we use to count the time of the game
    numberOfPeriods++;
<<<<<<< HEAD

    // give 15 seconds to player 2 to play its turn
    QThread::sleep(15);
    // Check if the game time had been reached
    if(numberOfPeriods==2){




        qDebug()<<"stopped";
        if(this->points< player2instance.points){
            player2instance.rectOfPlayer2->is_finished=2;
=======
    // give 15 seconds to player 2 to play its turn
    QThread::sleep(15);
    // Check if the game time had been reached
    if(numberOfPeriods==5){
        qDebug()<<"stopped";
        if(this->points< player2instance.points){
>>>>>>> 6b4070fcef97917ddb1e0cd9995a224d9b973ffb
            qDebug()<<"player 2 wins";

        }
        else if(this->points> player2instance.points){
<<<<<<< HEAD
            player2instance.rectOfPlayer2->is_finished=1;
=======
>>>>>>> 6b4070fcef97917ddb1e0cd9995a224d9b973ffb
            qDebug()<<"playe1 1 wins";

        }
        else{
            player2instance.rectOfPlayer2->is_finished=0;
            qDebug()<<"draw";

        }

        QThread::sleep(10);

        QCoreApplication::exit();
    }

    //start player 2 thread which gives focus to player 1 retangle
    player2instance.start();


}
Player1::Player1() {

    rectOfPlayer->setRect(3,560,110,60);
    //rectOfPlayer->initialrectangle();


}


// Private destructor to prevent deletion through pointers
Player1::~Player1() {

}

