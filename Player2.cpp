#include "player2.hpp"
#include "player1.hpp"


// Initialize the static instance of EnemySingleton
Player2& Player2::getInstance() {
    static Player2 instance;
    return instance;
}
void Player2::run(){

    // Get the instance of Player1 singleton
    Player1& player1instance = Player1::getInstance();
    // Make the rectangle of Player1 focusable
    player1instance.rectOfPlayer->setFlag(QGraphicsItem::ItemIsFocusable);
    // Set focus to the rectangle of Player1
    player1instance.rectOfPlayer->setFocus();
    // give 15 seconds to player 1 to play its turn
    QThread::sleep(15);
    //start player 1 thread which gives focus to player 2 retangle
    player1instance.start();


}




Player2::Player2() {
    rectOfPlayer2->setRect(-5,-90,100,100);

}

// Private destructor to prevent deletion through pointers
Player2::~Player2() {

}







