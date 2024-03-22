#include "BulletOfPlayer1.h"
//#include "BulletOfplayer2.h"

//#include "Enemy.h"

#include "currentPlayer.hpp"

BulletOfPlayer1::BulletOfPlayer1(){
    // drew the rect0

    setRect(x(),y(),10,50);


    qDebug()<<"target position :"<<target.y();
    // connec
    //QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);


}
void BulletOfPlayer1::updateTargetSense(){
    if(target.x()>1000 || target.x()<-100)
    {
        target.is_right=!target.is_right;
    }
    if(target.is_right){
        target.setPos(target.x()+3,target.y());

    }
    else{
        target.setPos(target.x()-3,target.y());

    }

}
void BulletOfPlayer1::move(){


    QList<QGraphicsItem *> colliding_items = collidingItems();

    for(int i=0,n=colliding_items.size();i< n;++i){




        if(typeid(*(colliding_items[i]))==typeid(Target)){


            player1.points=player1.points+5;

            scene()->removeItem(this);
            delete this;

            return;
        }
        else if(typeid(*(colliding_items[i]))==typeid(MyRect)){
            player1.points=player1.points+10;

            scene()->removeItem(this);

            delete this;
            return;
        }

    }
    // move bullet up


    updateTargetSense();
    scene()->removeItem(&score22);

    score22.updateScore(player1.points,player2.points,player1.numberOfPeriods);

    scene()->addItem(&score22);

    if(y()<225)
    {




        setPos(x(),y()-1);

    }
    else{
        setPos(x(),y()-20);

    }

    if (pos().y() + rect().height() < 0){



        scene()->removeItem(this);
        delete this;
    }
}
