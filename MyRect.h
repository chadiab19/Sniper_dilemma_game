#ifndef MYRECT_H
#define MYRECT_H
#include <QTimer>
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QDebug>
#include <QGraphicsScene>


//#include <mutex>
#include <QGraphicsRectItem>
#include <QObject>

#include <QGraphicsTextItem>
class MyRect:public QObject, public QGraphicsRectItem{
public:
    QTimer * timer = new QTimer();

    bool is_player2 = false;

    void keyPressEvent(QKeyEvent * event) override;
    MyRect();




public slots:
    void move();



};

#endif // MYRECT_H
