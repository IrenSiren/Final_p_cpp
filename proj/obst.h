#ifndef OBST_H
#define OBST_H
#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>

    class Obstical : public QObject,public QGraphicsPixmapItem
    {
        Q_OBJECT
    public:
        Obstical(QGraphicsItem * parent=0);


    };



#endif // OBST_H
