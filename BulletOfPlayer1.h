#ifndef BULLETOFPLAYER1_H
#define BULLETOFPLAYER1_H
#include "Score.hpp"
#include <QGraphicsRectItem>
#include <QObject>
#include <QTimer>
#include <QDebug>
#include <QGraphicsScene>
#include "player1.hpp"
#include "player2.hpp"
#include "Target.h"

class  BulletOfPlayer1: public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:
    BulletOfPlayer1();
    Score * score;



protected:
    QTimer * timer = new QTimer();
    bool is_right = true;
    Player1& player1 = Player1::getInstance();
    Player2& player2 = Player2::getInstance();
    Target& target = Target::getInstance();
    Score& score22 = Score::getInstance();
    void updateTargetSense();

public slots:
    virtual void move();
};

#endif // BULLETOFPLAYER1_H
