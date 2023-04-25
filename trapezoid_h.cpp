#include "trapezoid_h.h"

Trapezoid_h::Trapezoid_h(QObject *parent)
    : Trapezoid{parent}
{

}


void Trapezoid_h::thirdSlot(QString top, QString bottom, QString h){

    height=h.toDouble();
    if(top_base<=0 || bottom_base<=0 || height<=0) throw height;

}

double Trapezoid_h::square(){

     return this->half_sum() * height;

}
