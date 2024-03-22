#ifndef SCORE_HPP
#define SCORE_HPP
#include <QGraphicsTextItem>
#include <QFont>
#include <QThread>



class Score: public QGraphicsTextItem{
public:
    static Score& getInstance();

    void updateScore(int k,int a,int numberofperiods);

private:
    Score(QGraphicsItem * parent=0);


};


#endif // SCORE_HPP
