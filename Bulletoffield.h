#ifndef BULLETOFFIELD_H
#define BULLETOFFIELD_H
#include <QGraphicsRectItem>
#include <QObject>

class Bulletoffield: public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:
    static Bulletoffield& getInstance();
    Bulletoffield(const Bulletoffield&) = delete;
    void operator=(const Bulletoffield&) = delete;
    bool isright=true;
private:
    Bulletoffield();
    ~Bulletoffield();

public slots:
    //Bulletoffield();
    void move();
};
#endif // BULLETOFFIELD_H
