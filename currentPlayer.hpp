#ifndef CURRENTPLAYER_HPP
#define CURRENTPLAYER_HPP
#include <QFont>
#include <QGraphicsTextItem>
#include <QFont>
#include <QThread>



class currenttPlayer: public QGraphicsTextItem{
public:
    //extern bool condition = false;
    static currenttPlayer& getInstance();

    void updatecurrentPlayer(bool isplayer2,int endofgame=-1);



private:
    currenttPlayer(QGraphicsItem * parent=0);


};



#endif // CURRENTPLAYER_HPP
