#ifndef TRAPEZOID_H_H
#define TRAPEZOID_H_H

#include <QObject>
#include <trapezoid.h>

class Trapezoid_h : public Trapezoid
{
    Q_OBJECT

public:
    explicit Trapezoid_h(QObject *parent = nullptr);
    double square();

private:
    double height;

signals:

public slots:
    void thirdSlot(QString top, QString bottom, QString h);

};

#endif // TRAPEZOID_H_H
