#include <QApplication>
#include "MyRect.h"
//#include "Enemy.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QThread>
#include "player1.hpp"
#include "player2.hpp"
//#include <QGraphicsScene>
/*
Tutorial Topics:
-events (keyPressEvent() and QKeyEvent)
-event propogation system
-QDebug
*/

int main(int argc, char *argv[]){
    //EnemySingleton& enemySingletonInstance = EnemySingleton::getInstance();

    // Call member function of the singleton instance
    //enemySingletonInstance.doSomething();
    Player1& enemySingletonInstance2 = Player1::getInstance();
    //enemySingletonInstance2.setRect(50,50,100,100);

    Player2& enemySingletonInstance3 = Player2::getInstance();
    //enemySingletonInstance2.setRect(50,50,100,100);
    //enemySingletonInstance3.doSomething();
    // Call member function of the singleton instance
    //enemySingletonInstance2.doSomething();
    QApplication a(argc, argv);
    //QGraphicsTextItem *textItem = new QGraphicsTextItem("Initial Text");
    //textItem->setPos(100, 100); // Example position (100, 100), adjust as needed

    // Add the text item to the scene


    // create a scene
    QGraphicsScene * scene = new QGraphicsScene();
    //QGraphicsTextItem *textItem = new QGraphicsTextItem("Initial Text");
    //textItem->setPos(100, 100); // Example position (100, 100), adjust as needed
    //scene->addItem(textItem);
    // Add the text item to the scene
    //scene->addItem(textItem);
    //QGraphicsScene * scene = new QGraphicsScene();
    //scene->addItem(enemySingletonInstance2);
    //EnemySingleton2 * player55 = new MyRect();
    // create an item to add to the scene
    //MyRect * player = new MyRect();
    //enemySingletonInstance3.setRect(70,70,100,100);
    //player->setRect(0,0,100,100); // change the rect from 0x0 (default) to 100x100 pixels
    //scene->addItem(enemySingletonInstance3);
    scene->addItem(enemySingletonInstance2.player22);
    scene->addItem(enemySingletonInstance3.player22);
    //enemySingletonInstance2.doSomething();
    // add the item to the scene
    //scene->addItem(player);
    //enemySingletonInstance2.doSomething();
    enemySingletonInstance2.start();
    //enemySingletonInstance2.run22();

    //enemySingletonInstance3.start();
    //enemySingletonInstance2.wait();
    //enemySingletonInstance3.wait();

    // make rect focusable
    //player->setFlag(QGraphicsItem::ItemIsFocusable);
    //player->setFocus();

    // create a view to visualize the scene
    QGraphicsView * view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // show the view
    //int po=0;
    //qDebug()<<"pooooooooooooooooooo";
    view->show();
    view->setFixedSize(1400,1000);
    scene->setSceneRect(10,10,1100,700);

    //player->setPos(view->width()/2,view->height() - player->rect().height());
    /*QTimer * timer_multi = new QTimer();
    QObject::connect(timer_multi, &QTimer::timeout, player, &MyRect::spawn);
    timer_multi->start(3000);*/

    //QTimer * timer = new QTimer();
    //QObject::connect(&timer,SIGNAL(timeout()),player,SLOT(spawn()));
    //QObject::connect(&timer,&QTimer::timeout,&player,SLOT(spawn()));
    //timer->start(2000);
    //Enemy * enemy = new Enemy();
    //scene()->addItem(enemy);
    //delay(2000);
    //qDebug()<<"vawwwwwwwwwwwwwwwwwwwww";

    return a.exec();
}

