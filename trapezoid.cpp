#include "trapezoid.h"

Trapezoid::Trapezoid(QObject *parent)
    : QObject{parent}
{

}

void Trapezoid::secondSlot(QString top, QString bottom){


    top_base=top.toInt();
    bottom_base=bottom.toInt();
    if(top_base<=0 || bottom_base<=0) throw top_base;

}

double Trapezoid::half_sum(){

     return (double)(bottom_base + top_base) / 2;

}

