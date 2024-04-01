#ifndef PLAYER1_H
#define PLAYER1_H
#include <QGraphicsScene>
#include <QBrush>
#include <QGraphicsRectItem>
#include <QDebug>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QTimer>
#include <QKeyEvent>
#include <QLabel>
#include <QThread>
#include <QObject>
#include "MyRect.h"
#include <QCoreApplication>
#include <QGraphicsTextItem>


#include "Score.hpp"
class Player1:public QThread {
public:
    QTimer * timer = new QTimer();
    //extern std::condition_variable cv;
    //extern bool condition;
    int points=0;
    int numberOfPeriods;

    MyRect * rectOfPlayer = new MyRect();

    static Player1& getInstance();


    QGraphicsScene * scene = new QGraphicsScene();

    Score * score;



    void run();

    Player1(const Player1&) = delete;
    void operator=(const Player1&) = delete;

private:

    Player1();

    ~Player1();
};

#endif // PLAYER1_H

