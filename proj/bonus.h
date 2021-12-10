#ifndef BONUS_H
#define BONUS_H
#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>

    class Bonus : public QObject,public QGraphicsPixmapItem
    {
        Q_OBJECT
    public:
        Bonus(QGraphicsItem * parent=0);


    };
#endif // BONUS_H
