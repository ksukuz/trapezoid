/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1113, 562);
        QFont font;
        font.setFamilies({QString::fromUtf8("AvantGardeC")});
        font.setPointSize(12);
        font.setBold(true);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/trapezoid/trapezoid.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #B1B8DE, stop:1 #C0C7E9);\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton{\n"
"background-color: #F2F3FF;\n"
"color: #000000;\n"
"text-align: center;\n"
"border-top-left-radius: 20px;\n"
"border-bottom-left-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:#e6e7ff;\n"
"}\n"
"\n"
"QMessageBox .QPushButton{\n"
"\n"
"     color: #000000;\n"
"     font: 700 12pt \"AvantGardeC\";\n"
"     width: 70px;\n"
"    height: 30px;\n"
"border-top-left-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
"	border-color: rgb(0, 0, 0);\n"
"     \n"
"\n"
"}\n"
"\n"
"QMessageBox{\n"
"\n"
"    background-color:  qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #B1B8DE, stop:1 #C0C7E9);\n"
"	font: 700 12pt \"AvantGardeC\";\n"
"\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("qlineargradient (spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255))"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(620, 150, 220, 45));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: #2B2D54;\n"
"color: #FFFFFF;\n"
"text-align: center;\n"
"border-top-left-radius: 20px;\n"
"border-bottom-left-radius: 20px;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(620, 210, 220, 45));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("AvantGardeC")});
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: #2B2D54;\n"
"color: #FFFFFF;\n"
"text-align: center;\n"
"border-top-left-radius: 20px;\n"
"border-bottom-left-radius: 20px;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(620, 330, 220, 45));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("background-color: #2B2D54;\n"
"color: #FFFFFF;\n"
"text-align: center;\n"
"border-top-left-radius: 20px;\n"
"border-bottom-left-radius: 20px;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(620, 270, 360, 45));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(620, 390, 220, 45));
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setMouseTracking(true);
        pushButton_2->setFocusPolicy(Qt::StrongFocus);
        pushButton_2->setLayoutDirection(Qt::LeftToRight);
        pushButton_2->setStyleSheet(QString::fromUtf8(""));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(840, 150, 100, 45));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(43, 45, 84, 0.7);\n"
"color: #ffffff;\n"
"border: 2px solid white;\n"
"border-top-right-radius: 20px;\n"
"border-bottom-right-radius: 20px;"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(840, 210, 100, 45));
        lineEdit_2->setFont(font);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgba(43, 45, 84, 0.7);\n"
"opacity: 0.5;\n"
"color: #ffffff;\n"
"border: 2px solid white;\n"
"border-top-right-radius: 20px;\n"
"border-bottom-right-radius: 20px;"));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(840, 330, 100, 45));
        lineEdit_3->setFont(font);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgba(43, 45, 84, 0.7);\n"
"opacity: 0.5;\n"
"color: #ffffff;\n"
"border: 2px solid white;\n"
"border-top-right-radius: 20px;\n"
"border-bottom-right-radius: 20px;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(980, 270, 100, 45));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(43, 45, 84, 0.7);\n"
"opacity: 0.5;\n"
"color: #ffffff;\n"
"border: 2px solid white;\n"
"border-top-right-radius: 20px;\n"
"border-bottom-right-radius: 20px;"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(840, 390, 100, 45));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgba(43, 45, 84, 0.7);\n"
"opacity: 0.5;\n"
"color: #ffffff;\n"
"border: 2px solid white;\n"
"border-top-right-radius: 20px;\n"
"border-bottom-right-radius: 20px;"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(460, 10, 271, 101));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("AvantGardeC")});
        font2.setPointSize(30);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(false);
        label_6->setFont(font2);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(300, 170, 63, 20));
        label_7->setFont(font);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(180, 250, 63, 20));
        label_8->setFont(font);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(250, 280, 63, 20));
        label_9->setFont(font);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(430, 250, 63, 20));
        label_10->setFont(font);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(310, 370, 63, 20));
        label_11->setFont(font);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(90, 155, 441, 271));
        label_12->setStyleSheet(QString::fromUtf8("background-color: #F2F3FF;\n"
"border-radius: 40px;"));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(950, -150, 300, 300));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgba(43, 45, 84, 0.7);\n"
"border-radius: 150%;"));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(-50, -40, 300, 300));
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgba(43, 45, 84, 0.7);\n"
"border-radius: 150%;"));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(850, 350, 300, 300));
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgba(242, 243, 255, 0.7);\n"
"border-radius: 150%;"));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(230, 370, 300, 300));
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgba(43, 45, 84, 0.7);\n"
"border-radius: 150%;"));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(380, -110, 300, 300));
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgba(242, 243, 255, 0.7);\n"
"border-radius: 150%;"));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(-70, 110, 300, 300));
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgba(242, 243, 255, 0.7);\n"
"border-radius: 150%;"));
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(520, -110, 300, 300));
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgba(43, 45, 84, 0.7);\n"
"border-radius: 150%;"));
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(940, 340, 300, 300));
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgba(43, 45, 84, 0.7);\n"
"border-radius: 150%;"));
        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(90, 140, 441, 281));
        label_21->setStyleSheet(QString::fromUtf8("image: url(:/new/trapezoid/trapezoid.png);"));
        MainWindow->setCentralWidget(centralwidget);
        label_20->raise();
        label_19->raise();
        label_18->raise();
        label_17->raise();
        label_16->raise();
        label_15->raise();
        label_14->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        pushButton->raise();
        pushButton_2->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_12->raise();
        label_13->raise();
        label_21->raise();
        label_7->raise();
        label_10->raise();
        label_11->raise();
        label_8->raise();
        label_9->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1113, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\242\320\240\320\220\320\237\320\225\320\246\320\230\320\257", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\241\321\202\320\276\321\200\320\276\320\275\320\260 \321\202\321\200\320\260\320\277\320\265\321\206\320\270\320\270 a: </p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">\320\241\321\202\320\276\321\200\320\276\320\275\320\260 \321\202\321\200\320\260\320\277\320\265\321\206\320\270\320\270 c: </span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">\320\222\321\213\321\201\320\276\321\202\320\260 \321\202\321\200\320\260\320\277\320\265\321\206\320\270\320\270 h: </span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214 \320\277\320\276\320\273\321\203-\321\201\321\203\320\274\320\274\321\203 \320\276\321\201\320\275\320\276\320\262\320\260\320\275\320\270\320\271:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214 \320\277\320\273\320\276\321\211\320\260\320\264\321\214:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\242\320\240\320\220\320\237\320\225\320\246\320\230\320\257", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "a", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "d", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "h", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "b", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "c", nullptr));
        label_12->setText(QString());
        label_13->setText(QString());
        label_14->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
        label_17->setText(QString());
        label_18->setText(QString());
        label_19->setText(QString());
        label_20->setText(QString());
        label_21->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
