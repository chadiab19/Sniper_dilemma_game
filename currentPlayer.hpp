#ifndef CURRENTPLAYER_HPP
#define CURRENTPLAYER_HPP

#include <QGraphicsTextItem>
#include <QFont>
#include <QThread>



class currenttPlayer: public QGraphicsTextItem{
public:
    static currenttPlayer& getInstance();

    void updatecurrentPlayer(bool isplayer2);



private:
    currenttPlayer(QGraphicsItem * parent=0);


};



#endif // CURRENTPLAYER_HPP
