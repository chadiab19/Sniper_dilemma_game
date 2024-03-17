#ifndef BULLETENNEMY_H
#define BULLETENNEMY_H
#include <QGraphicsRectItem>
#include <QObject>

class Bulletennemy: public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:
    Bulletennemy();
public slots:
    void move();
};


#endif // BULLETENNEMY_H
