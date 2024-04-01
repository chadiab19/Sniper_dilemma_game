#ifndef MYRECT_H
#define MYRECT_H
#include <QTimer>
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QDebug>
#include <QGraphicsScene>
#include <QPropertyAnimation>
//#include <mutex>
#include <QGraphicsRectItem>
#include <QObject>

#include <QGraphicsTextItem>
class MyRect:public QObject, public QGraphicsRectItem{
public:
    int is_finished=-1;
    QGraphicsPixmapItem *imageItem;
    QGraphicsPixmapItem *imageItemplayer1;
    QTimer * timer = new QTimer();
    void initialrectangle(int playernumber);

    bool is_player2 = false;
    int fireplayer1=0;
    int fire=0;
    qreal scaleFactor = 0.2;
    qreal scaleFactorplayer1 = 0.2;

    void keyPressEvent(QKeyEvent * event) override;
    MyRect();





public slots:
    void move();




};

#endif // MYRECT_H
