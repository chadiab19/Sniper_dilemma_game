#include "Score.hpp"
Score& Score::getInstance() {
    static Score instance;

    return instance;
}

Score::Score(QGraphicsItem *parent): QGraphicsTextItem(parent){

    this->setPos(-50,-130);
    setPlainText("                                                         ");


}
void Score::updateScore(int k,int a,int numberofperiods){


    // draw the new text
    setPlainText(QString("player1 score ") + QString::number(k)+QString("player2 score ") + QString::number(a)+QString("   Time elapsed ") + QString::number(numberofperiods*15)+QString(" seconds"));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times", 16));



}


