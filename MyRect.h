#ifndef MYRECT_H
#define MYRECT_H

#include <QGraphicsRectItem>

#include <QObject>
#include <QTimer>
#include <mutex>
#include <QGraphicsRectItem>
#include <QObject>
//777#include <QGraphicsRectItem>
#include <QGraphicsTextItem>
class MyRect:public QObject, public QGraphicsRectItem{
public:
    QTimer * timer = new QTimer();
    //QTimer timer22 = new QTimer();
    bool isblocked = false;
    int b;
    int c;
    void keyPressEvent(QKeyEvent * event) override;

protected:
    std::mutex mtx2;


public slots:
    void move();
    void spawn22();
    //void QObject::spawn23();


};

#endif // MYRECT_H
