#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    trapezoid = new Trapezoid_h(this);

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(calculate_half_sum()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(calculate_square()));

    connect(this, &MainWindow::secondSignal, trapezoid, &Trapezoid::secondSlot);
    connect(this, &MainWindow::thirdSignal, trapezoid, &Trapezoid_h::thirdSlot);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::calculate_half_sum()
{

    try {

        emit secondSignal(ui->lineEdit->text(), ui->lineEdit_2->text());

        ui->label_4->setText(QString::number(trapezoid->half_sum()));

    } catch (int) {

        QMessageBox::critical(this,"ТРАПЕЦИЯ","Некорректное значение, повторите ввод!\n(верхнее и нижнее основания - целые числа)");

    }

}


void MainWindow::calculate_square()
{

    try {

        emit thirdSignal(ui->lineEdit->text(), ui->lineEdit_2->text(), ui->lineEdit_3->text());

        ui->label_5->setText(QString::number(trapezoid->square()));



    } catch (double) {

        QMessageBox::critical(this,"ТРАПЕЦИЯ","Некорректное значение, повторите ввод!\n(верхнее и нижнее основания - целые числа;\nвместо запятой используйте точку)");
    }

}

