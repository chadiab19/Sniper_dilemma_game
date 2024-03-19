#include "enemysingleton2.hpp"
#include "enemysingleton.hpp"
#include <QDebug>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QTimer>
#include <QKeyEvent>
//#include <QGraphicsScene>
// Initialize the static instance of EnemySingleton
void EnemySingleton2::run(){


    //qDebug()<<"second";
    EnemySingleton& enemySingletonInstance11 = EnemySingleton::getInstance();
    enemySingletonInstance11.player22->setFlag(QGraphicsItem::ItemIsFocusable);
    enemySingletonInstance11.player22->setFocus();
    //this->isblocked=true;
    qDebug()<<"no numbers playing";
    //this->isblocked=false;
    QThread::sleep(15);
    enemySingletonInstance11.start();
    //isblocked=false;

}
EnemySingleton2& EnemySingleton2::getInstance() {
    static EnemySingleton2 instance;
    //EnemySingleton& enemySingletonInstance11 = EnemySingleton::getInstance();
    //enemySingletonInstance11.player22->setFlag(QGraphicsItem::ItemIsFocusable);
     //enemySingletonInstance11.player22->setFocus();
    //EnemySingleton * player23 = new EnemySingleto
    //EnemySingleton& enemySingletonInstance11 = EnemySingleton::getInstance();
    //enemySingletonInstance11.player22->setFlag(QGraphicsItem::ItemIsFocusable);
     //enemySingletonInstance11.player22->setFocus();n() ;
    return instance;
}

// Private constructor to prevent instantiation
void EnemySingleton2::keyPressEvent(QKeyEvent *event)  {
    if (event->key() == Qt::Key_9){
        a=9;
        qDebug() << "The number v2 is:" << a;
        //player22->setRect(195,50,100,100);
        //EnemySingleton& enemySingletonInstance11 = EnemySingleton::getInstance();

        //qDebug() << "The number v2 is:" << a;

        //QTimer * timer = new QTimer();
        //connect(timer,SIGNAL(timeout()),this,SLOT(move()));

        //timer->start(20000000);
        //enemySingletonInstance11.doSomething();

            //enemySingletonInstance11.player22->setFlag(QGraphicsItem::ItemIsFocusable);
            //enemySingletonInstance11.player22->setFocus();





    }

}

EnemySingleton2::EnemySingleton2() {
    player22->setRect(5,-80,100,100);


    //std::cout << "EnemySingleton instance created!" << std::endl;
}

// Private destructor to prevent deletion through pointers
EnemySingleton2::~EnemySingleton2() {
    //std::cout << "EnemySingleton instance destroyed!" << std::endl;
}
/*void EnemySingleton2::run() {
    //qDebug()<<"second";
}*/
// Some member function of the singleton class

void EnemySingleton2::doSomething() {
    a=a+1;
    qDebug()<<"zzee";
    //player22->setRect(195,50,100,100);
    EnemySingleton& enemySingletonInstance11 = EnemySingleton::getInstance();
    EnemySingleton2& enemySingletonInstance22 = EnemySingleton2::getInstance();
    enemySingletonInstance11.player22->setFlag(QGraphicsItem::ItemIsFocusable);
    enemySingletonInstance11.player22->setFocus();

    QThread::sleep(10);
    enemySingletonInstance11.doSomething();
}


    //qDebug() << "The number v2 is:" << a;

    //QTimer * timer = new QTimer();
    //connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    //timer->start(20000000);
    //enemySingletonInstance11.doSomething();
    //b++;
    //qDebug()<<"b"<<b;
    //while(b == 0){

        //e);
        //
        /*if(c==1){
            enemySingletonInstance11.doSomething();

        }*/


    //}
    //QKeyEvent * event2;

    //std::cout << "EnemySingleton instance is doing something!" << std::endl;
//}
