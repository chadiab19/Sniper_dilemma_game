#include <QApplication>
//#include "MyRect.h"
#include "currentPlayer.hpp"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QThread>
#include "player1.hpp"
#include "player2.hpp"
#include "target.h"
//#include <QGraphicsScene>


int main(int argc, char *argv[]){



    Player1& player1 = Player1::getInstance();


    Player2& player2 = Player2::getInstance();


    QApplication a(argc, argv);

    QGraphicsScene * scene = new QGraphicsScene();
    Target& target = Target::getInstance();
    target.setPos(590,275);
    scene->addItem(&target);

    scene->addItem(player1.rectOfPlayer);
    scene->addItem(player2.rectOfPlayer2);
    currenttPlayer& currentPosition = currenttPlayer::getInstance();
    currentPosition.updatecurrentPlayer(true);




    player1.start();



    QGraphicsView * view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    view->setFixedSize(1400,1000);
    scene->setSceneRect(10,10,1100,700);



    return a.exec();
}

