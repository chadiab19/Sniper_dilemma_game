#ifndef BULLETOFPLAYER2H_H
#define BULLETOFPLAYER2H_H
#include <QGraphicsRectItem>
#include <QObject>
#include <QTimer>
#include <QGraphicsScene>
#include "Score.hpp"
#include "BulletOfPlayer1.h"
class BulleOfPlayer2: public BulletOfPlayer1{
    Q_OBJECT
public:
    BulleOfPlayer2();

public slots:
    void move() override;
};


#endif // BULLETOFPLAYER2H_H
