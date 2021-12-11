#include "bonus.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <QDebug>
#include <QRandomGenerator>
#include <QTransform>


Bonus::Bonus(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent)
{
    //set random x, y position
    QRandomGenerator *rg = QRandomGenerator::global();
    int random_number_x = rg->bounded(70,630);
    int random_number_y = rg->bounded(70,430);
    setPos( random_number_x, random_number_y );

    // drew the rect
    QTransform trans;
    QPixmap pic;
    pic = QPixmap(":/images/bonbon_2.png");
    pic = pic.scaled(60,60, Qt::IgnoreAspectRatio);
    setPixmap(pic);
    int bonus = 10;

}
