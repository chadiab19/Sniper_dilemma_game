#ifndef TARGET_H
#define TARGET_H
#include <QGraphicsRectItem>
#include <QObject>

class Target: public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:
    static Target& getInstance();
    Bulletoffield(const Target&) = delete;
    void operator=(const Target&) = delete;
    bool is_right=true;
private:
    Target();
    ~Target();

public slots:
    //Bulletoffield();
    //void move();
};
#endif // TARGET_H
