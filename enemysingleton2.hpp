#ifndef ENEMYSINGLETON2_HPP
#define ENEMYSINGLETON2_HPP
#include <QGraphicsRectItem>
#include <QThread>
#include <QObject>
#include "MyRect.h"


class EnemySingleton2:public MyRect,public QThread{
public:
    int a;
    //QKeyEvent * event2;
    // Static member function to access the singleton instance
    //void press();
    MyRect * player22 = new MyRect();
    void keyPressEvent(QKeyEvent * event) ;
    static EnemySingleton2& getInstance();
    //bool eventFilter(QObject *obj, QEvent *event);
    void run();
    // Some member function of the singleton class
    void doSomething();

    // Delete copy constructor and assignment operator
    EnemySingleton2(const EnemySingleton2&) = delete;
    void operator=(const EnemySingleton2&) = delete;

private:
    // Private constructor to prevent instantiation
    EnemySingleton2();

    // Private destructor to prevent deletion through pointers
    ~EnemySingleton2();
};
#endif // ENEMYSINGLETON2_HPP
