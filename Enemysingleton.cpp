#include "enemysingleton.hpp"
#include "enemysingleton2.hpp"
#include <QDebug>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QTimer>
#include <QKeyEvent>
#include <QLabel>
//#include <QGraphicsScene>
// Initialize the static instance of EnemySingleton
EnemySingleton& EnemySingleton::getInstance() {
    static EnemySingleton instance;
    //EnemySingleton * player55 = new EnemySingleton();
    //playe55->setRect(70,70,100,100);

    //EnemySingleton2& enemySingletonInstance22 = EnemySingleton2::getInstance();
    //enemySingletonInstance22.player22->setFlag(QGraphicsItem::ItemIsFocusable);

    //enemySingletonInstance22.player22->setFocus();
    //EnemySingleton * player23 = new EnemySingleton() ;
    return instance;
}
void EnemySingleton::keyPressEvent(QKeyEvent *event){
    if (event->key() == Qt::Key_7){
        if (pos().x() > 0)
            player22->setPos(player22->x()-10,player22->y());
            //setPos(x()-10,y());
    }}
// Private constructor to prevent instantiation

void EnemySingleton::run(){


    qDebug()<<"first";
    EnemySingleton2& enemySingletonInstance22 = EnemySingleton2::getInstance();
    enemySingletonInstance22.player22->setFlag(QGraphicsItem::ItemIsFocusable);

    enemySingletonInstance22.player22->setFocus();
    qDebug()<<"player 2 playing";
    enemySingletonInstance22.player22->isblocked=true;
    this->isblocked=false;
    n++;
    qDebug()<<"the new number of n is"<<n;

    //isblocked=true;
    QThread::sleep(15);

    if(n==15){
        qDebug()<<"stopped";
        QCoreApplication::exit();
    }
    //EnemySingleton& enemySingletonInstance11 = EnemySingleton::getInstance();
    enemySingletonInstance22.start();
    //enemySingletonInstance11.player22->setFlag(QGraphicsItem::ItemIsFocusable);
    //enemySingletonInstance11.player22->setFocus();*/

    /*isblocked=true;
    qDebug()<<"finished21";
    QThread::sleep(10);*/

}
EnemySingleton::EnemySingleton() {
    player22->setRect(10,540,100,100);
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
EnemySingleton::~EnemySingleton() {
    //std::cout << "EnemySingleton instance destroyed!" << std::endl;
}
/*void EnemySingleton::run() {
    //qDebug()<<"first";
}*/

// Some member function of the singleton class
void EnemySingleton::doSomething() {
    a=a+1;
    //player22->setRect(55,50,100,100);
    EnemySingleton2& enemySingletonInstance22 = EnemySingleton2::getInstance();
    /*enemySingletonInstance22.player22->setFlag(QGraphicsItem::ItemIsFocusable);

    enemySingletonInstance22.player22->setFocus();*/
    //qDebug()<<"finished1";

    qDebug()<<"zz";
    EnemySingleton& enemySingletonInstance11 = EnemySingleton::getInstance();
    enemySingletonInstance22.player22->setFlag(QGraphicsItem::ItemIsFocusable);
    enemySingletonInstance22.player22->setFocus();
    QThread::sleep(10);
    //enemySingletonInstance22.doSomething();
    qDebug()<<"zz22";
    //EnemySingleton& enemySingletonInstance11 = EnemySingleton::getInstance();
    enemySingletonInstance11.player22->setFlag(QGraphicsItem::ItemIsFocusable);
    enemySingletonInstance11.player22->setFocus();
    QThread::sleep(10);
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
}
