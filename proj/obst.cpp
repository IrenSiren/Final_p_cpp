#include "obst.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <QDebug>
#include <QRandomGenerator>
#include <QTransform>


Obstical::Obstical(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent)
{
    //set random x, y position
    QRandomGenerator *rg = QRandomGenerator::global();
    int random_number_x = rg->bounded(0,600);
    int random_number_y = rg->bounded(0,400);
    setPos( random_number_x, random_number_y );

    // drew the rect
    QTransform trans;
    QPixmap pic;
    pic = QPixmap(":/images/IGE-2.png");
    pic = pic.scaled(80,80, Qt::IgnoreAspectRatio);
    setPixmap(pic);
    int dead = -5;

}
