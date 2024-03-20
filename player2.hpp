#ifndef PLAYER2_H
#define PLAYER2_H
#include <QGraphicsRectItem>
#include <QThread>
#include <QObject>
#include "MyRect.h"

#include "Bullet.h"
class Player2:public MyRect,public QThread{
public:
    int points;
    //QKeyEvent * event2;
    // Static member function to access the singleton instance
    //void press();
    MyRect * player22 = new MyRect();
    //void keyPressEvent(QKeyEvent * event) ;
    static Player2& getInstance();
    //bool eventFilter(QObject *obj, QEvent *event);
    void run();
    // Some member function of the singleton class
    //void doSomething();

    // Delete copy constructor and assignment operator
    Player2(const Player2&) = delete;
    void operator=(const Player2&) = delete;

private:
    // Private constructor to prevent instantiation
    Player2();

    // Private destructor to prevent deletion through pointers
    ~Player2();
};
#endif // PLAYER2_H
