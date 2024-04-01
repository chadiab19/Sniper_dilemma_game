#ifndef PLAYER2_H
#define PLAYER2_H
#include <QGraphicsRectItem>
#include <QThread>
#include <QObject>
#include <QDebug>
#include <QBrush>
#include <QGraphicsScene>
#include <QTimer>
#include <QKeyEvent>
#include "MyRect.h"

#include "MyRect.h"
class Player2:public QThread{
public:
    int points;

    MyRect * rectOfPlayer2 = new MyRect();

    static Player2& getInstance();

    void run();

    Player2(const Player2&) = delete;
    void operator=(const Player2&) = delete;

private:
    // Private constructor to prevent instantiation
    Player2();

    // Private destructor to prevent deletion through pointers
    ~Player2();
};
#endif // PLAYER2_H
