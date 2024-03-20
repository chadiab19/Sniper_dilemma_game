#include "player1.hpp"
#include "player2.hpp"
#include "Bullet.h"
#include <QDebug>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QTimer>
#include <QKeyEvent>
#include <QLabel>

//#include <QGraphicsScene>
// Initialize the static instance of EnemySingleton
Player1& Player1::getInstance() {
    static Player1 instance;
    //EnemySingleton * player55 = new EnemySingleton();
    //playe55->setRect(70,70,100,100);

    //EnemySingleton2& enemySingletonInstance22 = EnemySingleton2::getInstance();
    //enemySingletonInstance22.player22->setFlag(QGraphicsItem::ItemIsFocusable);

    //enemySingletonInstance22.player22->setFocus();
    //EnemySingleton * player23 = new EnemySingleton() ;
    return instance;
}
/*void EnemySingleton::keyPressEvent(QKeyEvent *event){
    if (event->key() == Qt::Key_7){
        if (pos().x() > 0)
            player22->setPos(player22->x()-10,player22->y());
            //setPos(x()-10,y());
    }}*/
// Private constructor to prevent instantiation

void Player1::run(){


    //qDebug()<<"first";
    Player2& enemySingletonInstance22 = Player2::getInstance();
    enemySingletonInstance22.player22->setFlag(QGraphicsItem::ItemIsFocusable);

    enemySingletonInstance22.player22->setFocus();

    //qDebug()<<"player 2 playing";
    enemySingletonInstance22.player22->is_player2=true;
    this->is_player2=false;
    n++;
    //qDebug()<<"the new number of n is"<<n;
    //score = new Score();
    //scene()->addItem(score);
    //isblocked=true;
    QThread::sleep(15);

    if(n==5){
        qDebug()<<"stopped";
        QCoreApplication::exit();
    }
    //scoreLabel = new QLabel("S " );
    //scoreLabel = new QLabel("Score: 0"+ QString::number(k));
    //scoreLabel->setGeometry(10, 10, 100, 30); // Set position and size of the label
    //scoreLabel->setText("Score: " + QString::number(n));
    //scoreLabel->show();
    //score = new Score();

    //Score = new Score();
    //scene()->addItem(score);
    //po++;

    //scene()->addItem(textField);
    //textItem->setPlainText("time elapsed"+n+"seconds");
    //EnemySingleton& enemySingletonInstance11 = EnemySingleton::getInstance();
    enemySingletonInstance22.start();
    //enemySingletonInstance11.player22->setFlag(QGraphicsItem::ItemIsFocusable);
    //enemySingletonInstance11.player22->setFocus();*/

    /*isblocked=true;
    //qDebug()<<"finished21";
    QThread::sleep(10);*/

}
Player1::Player1() {
    player22->setRect(-5,560,100,100);
    //textField->setPlainText("the new");
    //player22->pos();
    //QPoint childWidgetPos = player22->pos();



           //std::cout << "EnemySingleton instance created!" << std::endl;
}
/*void EnemySingleton::keyPressEvent(QKeyEvent *event)  {
    if (event->key() == Qt::Key_7){
        qDebug()<<"7 pressed";
        //player22->setRect(55,50,100,100);
        //EnemySingleton2& enemySingletonInstance22 = EnemySingleton2::getInstance();
        //enemySingletonInstance22.player22->setFlag(QGraphicsItem::ItemIsFocusable);

        //enemySingletonInstance22.player22->setFocus();
        //QTimer * timer = new QTimer();
        //connect(timer,SIGNAL(timeout()),this,SLOT(move()));

        //timer->start(20000000);
        //qDebug() << "The number is:" << a;
        //enemySingletonInstance22.doSomething();

        //enemySingletonInstance22.player22->setFlag(QGraphicsItem::ItemIsFocusable);
        //enemySingletonInstance22.player22->setFocus();



    }

}*/

// Private destructor to prevent deletion through pointers
Player1::~Player1() {
    //std::cout << "EnemySingleton instance destroyed!" << std::endl;
}
/*void EnemySingleton::run() {
    //qDebug()<<"first";
}*/

// Some member function of the singleton class
//void EnemySingleton::doSomething() {
    //a=a+1;
    //player22->setRect(55,50,100,100);
    //EnemySingleton2& enemySingletonInstance22 = EnemySingleton2::getInstance();
    /*enemySingletonInstance22.player22->setFlag(QGraphicsItem::ItemIsFocusable);

    enemySingletonInstance22.player22->setFocus();*/
    //qDebug()<<"finished1";

    //qDebug()<<"zz";
    //scoreLabel = new QLabel()
    /*scoreLabel = new QLabel("Score: 0");
    scoreLabel->setGeometry(10, 10, 100, 30); // Set position and size of the label
    scoreLabel->show();*/
    //score = new Score();
    //scene()->addItem(score);
    //EnemySingleton& enemySingletonInstance11 = EnemySingleton::getInstance();
    //enemySingletonInstance22.player22->setFlag(QGraphicsItem::ItemIsFocusable);
    //enemySingletonInstance22.player22->setFocus();
    //QThread::sleep(10);
    //enemySingletonInstance22.doSomething();
    //qDebug()<<"zz22";
    //EnemySingleton& enemySingletonInstance11 = EnemySingleton::getInstance();
    //enemySingletonInstance11.player22->setFlag(QGraphicsItem::ItemIsFocusable);
    //enemySingletonInstance11.player22->setFocus();
    //QThread::sleep(10);
    //QTimer * timer = new QTimer();
    //connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    //timer->start(20000000);
    //qDebug() << "c is:" << c;
    //enemySingletonInstance22.doSomething();
    //while(b==1){
        //enemySingletonInstance22.player22->setFlag(QGraphicsItem::ItemIsFocusable);
        //enemySingletonInstance22.player22->setFocus();
        /*if(c==0){
            enemySingletonInstance22.doSomething();

        }*/


    //}
    //std::cout << "EnemySingleton instance is doing something!" << std::endl;
//}
