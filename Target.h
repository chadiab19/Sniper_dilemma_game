#ifndef TARGET_H
#define TARGET_H
#include <QGraphicsRectItem>
#include <QObject>
#include <QTimer>
#include <QDebug>
#include <QGraphicsScene>
class Target: public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:

    static Target& getInstance();
    Target(const Target&) = delete;
    void operator=(const Target&) = delete;
    bool is_right=true;
private:
    Target();
    ~Target();

public slots:

};
#endif // TARGET_H
