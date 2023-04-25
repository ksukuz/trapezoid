#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include <QObject>

class Trapezoid : public QObject
{
    Q_OBJECT

public:
    explicit Trapezoid(QObject *parent = nullptr);
    double half_sum();

protected:
    int top_base;
    int bottom_base;

signals:

public slots:
    void secondSlot(QString top, QString bottom);

};

#endif // TRAPEZOID_H
