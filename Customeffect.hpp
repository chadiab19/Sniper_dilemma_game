#ifndef CUSTOMEFFECT_HPP

#define CUSTOMEFFECT_HPP
#include <QGraphicsRectItem>
#include <QGraphicsEffect>
#include <QPainter>



class Customeffect: public QGraphicsEffect{
public:
    Customeffect(QObject* parent = nullptr);

    QRectF boundingRectFor(const QRectF & rect) const override;
    void draw(QPainter* painter) override;



};



#endif // CUSTOMEFFECT_HPP
