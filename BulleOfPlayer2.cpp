#include "BulletOfplayer2.h"
#include "Target.h"
//#include "Enemy.h"
#include "player2.hpp"
#include "player1.hpp"
#include "BulletOfPlayer1.h"
#include "Score.hpp"
#include "currentPlayer.hpp"

BulleOfPlayer2::BulleOfPlayer2(){
    // drew the rect



    setRect(x(),y()+100,10,50);

    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);


}

void BulleOfPlayer2::move() {

    QList<QGraphicsItem *> colliding_items = collidingItems();

    for(int i=0,n=colliding_items.size();i< n;++i){
        if(typeid(*(colliding_items[i]))==typeid(BulletOfPlayer1)){
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            return;

        }
        else if(typeid(*(colliding_items[i]))==typeid(Target)){
            //scene()->removeItem(this->score);

            player2.points=player2.points+5;


            scene()->removeItem(this);
            delete this;

            return;
        }
        else if(typeid(*(colliding_items[i]))==typeid(MyRect)){
            player2.points=player2.points+10;

            scene()->removeItem(this);

            delete this;
            return;
        }

    }


    updateTargetSense();
    // move bullet down
    if(y()>255)
    {


        setPos(x(),y()+1);

    }
    else{
        setPos(x(),y()+20);

    }
    if(player1.numberOfPeriods>1){
        scene()->removeItem(&score22);


    }


    score22.updateScore(player1.points,player2.points,player1.numberOfPeriods);

    scene()->addItem(&score22);


    if (pos().y() > 540){


        scene()->removeItem(this);
        delete this;
    }
}
