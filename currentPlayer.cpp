#include "currentPlayer.hpp"
#include <QTextDocument>
currenttPlayer& currenttPlayer::getInstance() {
    static currenttPlayer instance;

    return instance;
}

currenttPlayer::currenttPlayer(QGraphicsItem *parent): QGraphicsTextItem(parent){

}
void currenttPlayer::updatecurrentPlayer(bool isplayer2,int endofgame){

    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));
    if(endofgame==0){

        QString text = "<div style='font-size:46px;color:yellow;'>Game over</div>"
                       "<div style='font-size:20px;color:red;'>  Draw  </div>";


        QTextDocument *textDocument = new QTextDocument();
        textDocument->setHtml(text);


        this->setPos(250,100);
        setDocument(textDocument);



    }
    else if(endofgame!=-1){
        QString text = "<div style='font-size:46px;color:yellow;'>Game over</div>"
                       "<div style='font-size:20px;color:red;'>  Player " + QString::number(endofgame) + " wins  </div>";


        QTextDocument *textDocument = new QTextDocument();
        textDocument->setHtml(text);


        this->setPos(250,100);
        setDocument(textDocument);

    }



    else if(isplayer2==true){
        this->setPos(-110,-70);
        setPlainText("------->");

    }
    else{
        this->setPos(-110,600);
        setPlainText("------->");

    }


}


