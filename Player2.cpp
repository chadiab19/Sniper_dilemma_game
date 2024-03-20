#include "player2.hpp"
#include "player1.hpp"
#include <QDebug>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QTimer>
#include <QKeyEvent>
//#include <QGraphicsScene>
// Initialize the static instance of EnemySingleton
void Player2::run(){


    //qDebug()<<"second";
    Player1& enemySingletonInstance11 = Player1::getInstance();
    enemySingletonInstance11.player22->setFlag(QGraphicsItem::ItemIsFocusable);
    enemySingletonInstance11.player22->setFocus();
    //this->isblocked=true;
    qDebug()<<"no numbers playing";
    //this->isblocked=false;
    QList<QGraphicsItem *> colliding_items = collidingItems();
    /*for(int i=0,n=colliding_items.size();i< n;++i){

        if(typeid(*(colliding_items[i]))==typeid(Bullet)){
            //scene()->removeItem(score);
            enemySingletonInstance11.points=enemySingletonInstance11.p+5;
            qDebug()<<"the is colliding";

            scene()->removeItem(colliding_items[i]);

            delete colliding_items[i];
            //return;

        }
        else{
            qDebug()<<"no colliding";

        }
    }*/
    QThread::sleep(15);
    enemySingletonInstance11.start();
    //enemySingletonInstance11.run22();
    //isblocked=false;

}
Player2& Player2::getInstance() {
    static Player2 instance;
    //EnemySingleton& enemySingletonInstance11 = EnemySingleton::getInstance();
    //enemySingletonInstance11.player22->setFlag(QGraphicsItem::ItemIsFocusable);
     //enemySingletonInstance11.player22->setFocus();
    //EnemySingleton * player23 = new EnemySingleto
    //EnemySingleton& enemySingletonInstance11 = EnemySingleton::getInstance();
    //enemySingletonInstance11.player22->setFlag(QGraphicsItem::ItemIsFocusable);
     //enemySingletonInstance11.player22->setFocus();n() ;
    return instance;
}



Player2::Player2() {
    player22->setRect(-5,-90,100,100);


    //std::cout << "EnemySingleton instance created!" << std::endl;
}

// Private destructor to prevent deletion through pointers
Player2::~Player2() {
    //std::cout << "EnemySingleton instance destroyed!" << std::endl;
}
/*void EnemySingleton2::run() {
    //qDebug()<<"second";
}*/
// Some member function of the singleton class

/*void EnemySingleton2::doSomething() {
    a=a+1;
    qDebug()<<"zzee";
    //player22->setRect(195,50,100,100);
    EnemySingleton& enemySingletonInstance11 = EnemySingleton::getInstance();
    EnemySingleton2& enemySingletonInstance22 = EnemySingleton2::getInstance();
    enemySingletonInstance11.player22->setFlag(QGraphicsItem::ItemIsFocusable);
    enemySingletonInstance11.player22->setFocus();

    QThread::sleep(10);
    enemySingletonInstance11.doSomething();
}*/


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
