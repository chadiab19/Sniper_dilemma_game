#include <QApplication>

#include "currentPlayer.hpp"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QThread>
#include "player1.hpp"
#include "player2.hpp"
#include "target.h"



int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    // crete instances of player1,player 2,the target and the the current player
    Player1& player1 = Player1::getInstance();
    Player2& player2 = Player2::getInstance();
    Target& target = Target::getInstance();
    currenttPlayer& currentPlayer = currenttPlayer::getInstance();
    //set the first position of the target on the game screen
    target.setPos(590,275);
    // set the current player initial position
    currentPlayer.updatecurrentPlayer(true);



    QGraphicsScene * scene = new QGraphicsScene();

    // add player 1 and player 2 and the traget to the game scene
    scene->addItem(&target);
    scene->addItem(player1.rectOfPlayer);
    scene->addItem(player2.rectOfPlayer2);
    scene->addItem(&currentPlayer);

    // start player 1 thread which gives focus to player 2 retangle
    player1.start();


    /* Create a QGraphicsView with specified scene, configure properties,
    and display it with a fixed size*/
    QGraphicsView * view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    view->setFixedSize(1400,1000);
    scene->setSceneRect(10,10,1100,700);



    return a.exec();
}

