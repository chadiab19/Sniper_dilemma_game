#ifndef PLAYER1_H
#define PLAYER1_H

//#include <iostream>
#include <QGraphicsRectItem>
#include "Score.hpp"
#include <QThread>
#include <QObject>
#include "MyRect.h"
#include <QCoreApplication>
#include <QGraphicsTextItem>
#include <QLabel>
//#include <iostream>

class Player1:public MyRect,public QThread {
public:
    //QLabel *scoreLabel;
    int points=0;
    int n;
    //int a;
    // Static member function to access the singleton instance
    //void press();
    MyRect * player22 = new MyRect();
    //9void keyPressEvent(QKeyEvent * event) ;
    static Player1& getInstance();




    Score * score;


    // Some member function of the singleton class
    //void doSomething();
    void run();
    // Delete copy constructor and assignment operator
    Player1(const Player1&) = delete;
    void operator=(const Player1&) = delete;

private:
    //QGraphicsTextItem *textField;
    // Private constructor to prevent instantiation
    Player1();
    // Private destructor to prevent deletion through pointers
    ~Player1();
};

#endif // PLAYER1_H

