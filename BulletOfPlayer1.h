#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsRectItem>
#include <QObject>
#include "Score.hpp"
class Bullet: public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:
    Bullet();
    Score * score;
    bool is_right = true;
    //int l=2;
public slots:
    void move();
};

#endif // BULLET_H
