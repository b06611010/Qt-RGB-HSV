/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_image;
    QPushButton *pb_reverse;
    QSlider *Slider_G;
    QLabel *label_G;
    QLCDNumber *lcdNumber_G;
    QPushButton *pb_reset;
    QLCDNumber *lcdNumber_B;
    QLCDNumber *lcdNumber_R;
    QSlider *Slider_R;
    QSlider *Slider_B;
    QLabel *label_R;
    QLabel *label_B;
    QLCDNumber *lcdNumber_H;
    QLCDNumber *lcdNumber_S;
    QLCDNumber *lcdNumber_V;
    QLabel *label_R_2;
    QLabel *label_S;
    QLabel *label_V;
    QSlider *Slider_H;
    QSlider *Slider_S;
    QSlider *Slider_V;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(914, 723);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_image = new QLabel(centralWidget);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setGeometry(QRect(10, 10, 791, 431));
        pb_reverse = new QPushButton(centralWidget);
        pb_reverse->setObjectName(QString::fromUtf8("pb_reverse"));
        pb_reverse->setEnabled(true);
        pb_reverse->setGeometry(QRect(20, 540, 111, 31));
        Slider_G = new QSlider(centralWidget);
        Slider_G->setObjectName(QString::fromUtf8("Slider_G"));
        Slider_G->setGeometry(QRect(160, 540, 181, 41));
        QFont font;
        font.setStyleStrategy(QFont::PreferDefault);
        Slider_G->setFont(font);
        Slider_G->setMinimum(-255);
        Slider_G->setMaximum(255);
        Slider_G->setSingleStep(10);
        Slider_G->setValue(0);
        Slider_G->setSliderPosition(0);
        Slider_G->setOrientation(Qt::Horizontal);
        label_G = new QLabel(centralWidget);
        label_G->setObjectName(QString::fromUtf8("label_G"));
        label_G->setGeometry(QRect(340, 530, 71, 61));
        label_G->setStyleSheet(QString::fromUtf8("\n"
"font: 28pt \"Arial\";"));
        label_G->setAlignment(Qt::AlignCenter);
        lcdNumber_G = new QLCDNumber(centralWidget);
        lcdNumber_G->setObjectName(QString::fromUtf8("lcdNumber_G"));
        lcdNumber_G->setGeometry(QRect(410, 540, 81, 41));
        lcdNumber_G->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_G->setProperty("intValue", QVariant(0));
        pb_reset = new QPushButton(centralWidget);
        pb_reset->setObjectName(QString::fromUtf8("pb_reset"));
        pb_reset->setGeometry(QRect(20, 580, 111, 31));
        lcdNumber_B = new QLCDNumber(centralWidget);
        lcdNumber_B->setObjectName(QString::fromUtf8("lcdNumber_B"));
        lcdNumber_B->setGeometry(QRect(410, 590, 81, 41));
        lcdNumber_B->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_B->setProperty("intValue", QVariant(0));
        lcdNumber_R = new QLCDNumber(centralWidget);
        lcdNumber_R->setObjectName(QString::fromUtf8("lcdNumber_R"));
        lcdNumber_R->setGeometry(QRect(410, 490, 81, 41));
        lcdNumber_R->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_R->setProperty("intValue", QVariant(0));
        Slider_R = new QSlider(centralWidget);
        Slider_R->setObjectName(QString::fromUtf8("Slider_R"));
        Slider_R->setGeometry(QRect(160, 490, 181, 41));
        Slider_R->setFont(font);
        Slider_R->setMinimum(-255);
        Slider_R->setMaximum(255);
        Slider_R->setSingleStep(10);
        Slider_R->setValue(0);
        Slider_R->setSliderPosition(0);
        Slider_R->setOrientation(Qt::Horizontal);
        Slider_B = new QSlider(centralWidget);
        Slider_B->setObjectName(QString::fromUtf8("Slider_B"));
        Slider_B->setGeometry(QRect(160, 590, 181, 41));
        Slider_B->setFont(font);
        Slider_B->setMinimum(-255);
        Slider_B->setMaximum(255);
        Slider_B->setSingleStep(10);
        Slider_B->setValue(0);
        Slider_B->setSliderPosition(0);
        Slider_B->setOrientation(Qt::Horizontal);
        label_R = new QLabel(centralWidget);
        label_R->setObjectName(QString::fromUtf8("label_R"));
        label_R->setGeometry(QRect(340, 480, 71, 61));
        label_R->setStyleSheet(QString::fromUtf8("\n"
"font: 28pt \"Arial\";"));
        label_R->setAlignment(Qt::AlignCenter);
        label_B = new QLabel(centralWidget);
        label_B->setObjectName(QString::fromUtf8("label_B"));
        label_B->setGeometry(QRect(340, 580, 71, 61));
        label_B->setStyleSheet(QString::fromUtf8("\n"
"font: 28pt \"Arial\";"));
        label_B->setAlignment(Qt::AlignCenter);
        lcdNumber_H = new QLCDNumber(centralWidget);
        lcdNumber_H->setObjectName(QString::fromUtf8("lcdNumber_H"));
        lcdNumber_H->setGeometry(QRect(790, 490, 81, 41));
        lcdNumber_H->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_H->setProperty("intValue", QVariant(0));
        lcdNumber_S = new QLCDNumber(centralWidget);
        lcdNumber_S->setObjectName(QString::fromUtf8("lcdNumber_S"));
        lcdNumber_S->setGeometry(QRect(790, 540, 81, 41));
        lcdNumber_S->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_S->setProperty("intValue", QVariant(0));
        lcdNumber_V = new QLCDNumber(centralWidget);
        lcdNumber_V->setObjectName(QString::fromUtf8("lcdNumber_V"));
        lcdNumber_V->setGeometry(QRect(790, 590, 81, 41));
        lcdNumber_V->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_V->setProperty("intValue", QVariant(0));
        label_R_2 = new QLabel(centralWidget);
        label_R_2->setObjectName(QString::fromUtf8("label_R_2"));
        label_R_2->setGeometry(QRect(710, 480, 71, 61));
        label_R_2->setStyleSheet(QString::fromUtf8("\n"
"font: 28pt \"Arial\";"));
        label_R_2->setAlignment(Qt::AlignCenter);
        label_S = new QLabel(centralWidget);
        label_S->setObjectName(QString::fromUtf8("label_S"));
        label_S->setGeometry(QRect(710, 530, 71, 61));
        label_S->setStyleSheet(QString::fromUtf8("\n"
"font: 28pt \"Arial\";"));
        label_S->setAlignment(Qt::AlignCenter);
        label_V = new QLabel(centralWidget);
        label_V->setObjectName(QString::fromUtf8("label_V"));
        label_V->setGeometry(QRect(710, 580, 71, 61));
        label_V->setStyleSheet(QString::fromUtf8("\n"
"font: 28pt \"Arial\";"));
        label_V->setAlignment(Qt::AlignCenter);
        Slider_H = new QSlider(centralWidget);
        Slider_H->setObjectName(QString::fromUtf8("Slider_H"));
        Slider_H->setGeometry(QRect(540, 490, 181, 41));
        Slider_H->setFont(font);
        Slider_H->setMinimum(-180);
        Slider_H->setMaximum(180);
        Slider_H->setSingleStep(10);
        Slider_H->setValue(0);
        Slider_H->setSliderPosition(0);
        Slider_H->setOrientation(Qt::Horizontal);
        Slider_S = new QSlider(centralWidget);
        Slider_S->setObjectName(QString::fromUtf8("Slider_S"));
        Slider_S->setGeometry(QRect(540, 540, 181, 41));
        Slider_S->setFont(font);
        Slider_S->setMinimum(-255);
        Slider_S->setMaximum(255);
        Slider_S->setSingleStep(10);
        Slider_S->setValue(0);
        Slider_S->setSliderPosition(0);
        Slider_S->setOrientation(Qt::Horizontal);
        Slider_V = new QSlider(centralWidget);
        Slider_V->setObjectName(QString::fromUtf8("Slider_V"));
        Slider_V->setGeometry(QRect(540, 590, 181, 41));
        Slider_V->setFont(font);
        Slider_V->setMinimum(-255);
        Slider_V->setMaximum(255);
        Slider_V->setSingleStep(10);
        Slider_V->setValue(0);
        Slider_V->setSliderPosition(0);
        Slider_V->setOrientation(Qt::Horizontal);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 914, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_image->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        pb_reverse->setText(QApplication::translate("MainWindow", "reverse", nullptr));
        label_G->setText(QApplication::translate("MainWindow", "G", nullptr));
        pb_reset->setText(QApplication::translate("MainWindow", "reset", nullptr));
        label_R->setText(QApplication::translate("MainWindow", "R", nullptr));
        label_B->setText(QApplication::translate("MainWindow", "B", nullptr));
        label_R_2->setText(QApplication::translate("MainWindow", "H", nullptr));
        label_S->setText(QApplication::translate("MainWindow", "S", nullptr));
        label_V->setText(QApplication::translate("MainWindow", "V", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
