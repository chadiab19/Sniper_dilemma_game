#include "Score.hpp"
#include <QFont>
#include <QThread>
Score::Score(QGraphicsItem *parent): QGraphicsTextItem(parent){
    // initialize the score to 0
    score = 16;
    this->setPos(-50,-130);

    // draw the text
    //setPlainText(QString("")); // Score: 0
    //setDefaultTextColor(Qt::blue);
    //setFont(QFont("times",16));
}
void Score::increase(int k,int a){
    //QThread::sleep(3);
    setPlainText("                                                         ");

    // draw the new text
    setPlainText(QString("player1 score ") + QString::number(k)+QString("player2 score ") + QString::number(a));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times", 16));

    //score++;
    //setPlainText(QString("22: ") + QString::number(k)); // Score: 0


    //setPlainText(QString(""));
    //setPlainText(QString("Score: ") + QString::number(k));

    //setDefaultTextColor(Qt::blue);
    //setFont(QFont("times",16));

}
void Score::vider(){
    //QThread::sleep(3);
    score++;
    //setPlainText(QString("22: ") + QString::number(k)); // Score: 0


    //setPlainText(QString(""));
    setPlainText(QString("") );

    setDefaultTextColor(Qt::blue);
    //setFont(QFont("times",16));

}
/*Score::Score(QGraphicsItem *parent): QGraphicsTextItem(parent){
    score = 0;

    // draw the text
    setPlainText(QString("Score: ") + QString::number(score)); // Score: 0
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16));
}*/
