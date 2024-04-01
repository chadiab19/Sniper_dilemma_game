#include "BulletOfPlayer1.h"
#include "currentPlayer.hpp"

BulletOfPlayer1::BulletOfPlayer1(){

    //set the position of the bullet of player 1
    setRect(x(),y(),10,50);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    //start a timer to move the bullet of player 1
    timer->start(50);


}
// member function that guratantee that the target doesent overlap the borders of the scene
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
    //case if bullet of player 1 collide with other items
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


    // call the function that updates the value the target position
    updateTargetSense();
    // update the score value on the sceen
    scene()->removeItem(&score22);

    score22.updateScore(player1.points,player2.points,player1.numberOfPeriods);

    scene()->addItem(&score22);
    // move the bullet up
    // if the target not reach the spped of the bullet of player 1 slow down
    if(y()<225)
    {
        setPos(x(),y()-1);

    }
    else{
        setPos(x(),y()-20);

    }
    // if the bullet attain the border of the game scene it will be deleted
    if (pos().y() + rect().height() < 0){



        scene()->removeItem(this);
        delete this;
    }
}
