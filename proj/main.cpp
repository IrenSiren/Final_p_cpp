#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include  <QBrush>
#include <QImage>
#include <QTimer>
#include <obst.h>
#include <QRandomGenerator>
#include "bonus.h"
#include <QVector>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //create a scene
    QGraphicsScene *scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, 700, 500);
    scene->setBackgroundBrush(QBrush(QImage(":/images/gam.jpg")));
    // spawn bonus & obst
    QRandomGenerator *rg = QRandomGenerator::global();
    int num_of_bonus = rg->bounded(0,7);
    QVector<Bonus*> vec_b;
    vec_b.resize(num_of_bonus);
    for(int i = 0; i < num_of_bonus; i++)
    {
        Bonus* bon = new Bonus();
        vec_b[i] = bon;
    };

    int num_of_obst = rg->bounded(0,4);
    QVector<Obstical*> vec_o;
    vec_o.resize(num_of_obst);
    for(int i = 0; i < num_of_obst; i++)
    {
        Obstical* obst = new Obstical();
        vec_o[i] = obst;
    };


    for(int i = 0; i < vec_o.size() ; i++)
    {

        scene->addItem(vec_o[i]) ;
    };
    for(int i = 0; i < vec_b.size() ; i++)
    {

        scene->addItem(vec_b[i]) ;
    };


    //add a view
    QGraphicsView *view = new QGraphicsView(scene);
    view->resize(700, 500);
    view->show();
    return a.exec();
};

