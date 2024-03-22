#ifndef BULLETENNEMY_H
#define BULLETENNEMY_H
#include <QGraphicsRectItem>
#include <QObject>
#include "Score.hpp"

class Bulletennemy: public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:
    Bulletennemy();
    Score * score;
public slots:
    void move();
};


#endif // BULLETENNEMY_H
