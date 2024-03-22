#include "currentPlayer.hpp"
currenttPlayer& currenttPlayer::getInstance() {
    static currenttPlayer instance;

    return instance;
}

currenttPlayer::currenttPlayer(QGraphicsItem *parent): QGraphicsTextItem(parent){

}
void currenttPlayer::updatecurrentPlayer(bool isplayer2){

    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));


    if(isplayer2==true){
        this->setPos(-110,-70);
        setPlainText("------->");

    }
    else{
        this->setPos(-110,600);
        setPlainText("------->");

    }


}


