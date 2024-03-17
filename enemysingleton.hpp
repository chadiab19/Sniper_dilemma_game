#ifndef ENEMYSINGLETON_HPP
#define ENEMYSINGLETON_HPP

//#include <iostream>
#include <QGraphicsRectItem>
#include <QThread>
#include <QObject>
#include "MyRect.h"
#include <QCoreApplication>
//#include <iostream>

class EnemySingleton:public MyRect,public QThread{
public:
    int n;
    int a;
    // Static member function to access the singleton instance
    //void press();
    MyRect * player22 = new MyRect();
    void keyPressEvent(QKeyEvent * event) ;
    static EnemySingleton& getInstance();

    // Some member function of the singleton class
    void doSomething();
    void run();
    // Delete copy constructor and assignment operator
    EnemySingleton(const EnemySingleton&) = delete;
    void operator=(const EnemySingleton&) = delete;

private:
    // Private constructor to prevent instantiation
    EnemySingleton();
    // Private destructor to prevent deletion through pointers
    ~EnemySingleton();
};

#endif // ENEMYSINGLETON_HPP

