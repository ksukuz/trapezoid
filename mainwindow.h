#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <trapezoid_h.h>
#include <trapezoid.h>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void secondSignal(QString top_base, QString bottom_base);
    void thirdSignal(QString top_base, QString bottom_base, QString height);

private slots:
    void calculate_half_sum();
    void calculate_square();

private:
    Ui::MainWindow *ui;
    Trapezoid_h *trapezoid;


};
#endif // MAINWINDOW_H
