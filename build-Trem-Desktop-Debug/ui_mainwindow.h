/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QLabel *zlabel_trilho1;
    QLabel *label_trilho4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_trilho4_2;
    QLabel *label_trilho4_3;
    QLabel *label_trilho4_4;
    QLabel *label_trilho1_2;
    QLabel *label_trilho4_5;
    QLabel *label_trilho4_6;
    QLabel *label_trilho4_7;
    QLabel *label_trilho1_3;
    QLabel *label_trem3;
    QLabel *label_trem5;
    QLabel *label_trem1;
    QLabel *label_trem2;
    QLabel *label_trem4;
    QSlider *VelocidadeTrem01;
    QSlider *VelocidadeTrem02;
    QSlider *VelocidadeTrem03;
    QSlider *VelocidadeTrem04;
    QSlider *VelocidadeTrem05;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(707, 358);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        zlabel_trilho1 = new QLabel(centralWidget);
        zlabel_trilho1->setObjectName(QString::fromUtf8("zlabel_trilho1"));
        zlabel_trilho1->setGeometry(QRect(30, 30, 300, 17));
        zlabel_trilho1->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4 = new QLabel(centralWidget);
        label_trilho4->setObjectName(QString::fromUtf8("label_trilho4"));
        label_trilho4->setGeometry(QRect(30, 30, 20, 100));
        label_trilho4->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 0, 99, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 0, 98, 27));
        label_trilho4_2 = new QLabel(centralWidget);
        label_trilho4_2->setObjectName(QString::fromUtf8("label_trilho4_2"));
        label_trilho4_2->setGeometry(QRect(130, 30, 20, 100));
        label_trilho4_2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4_3 = new QLabel(centralWidget);
        label_trilho4_3->setObjectName(QString::fromUtf8("label_trilho4_3"));
        label_trilho4_3->setGeometry(QRect(230, 30, 20, 100));
        label_trilho4_3->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4_4 = new QLabel(centralWidget);
        label_trilho4_4->setObjectName(QString::fromUtf8("label_trilho4_4"));
        label_trilho4_4->setGeometry(QRect(330, 30, 20, 100));
        label_trilho4_4->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho1_2 = new QLabel(centralWidget);
        label_trilho1_2->setObjectName(QString::fromUtf8("label_trilho1_2"));
        label_trilho1_2->setGeometry(QRect(30, 130, 321, 17));
        label_trilho1_2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4_5 = new QLabel(centralWidget);
        label_trilho4_5->setObjectName(QString::fromUtf8("label_trilho4_5"));
        label_trilho4_5->setGeometry(QRect(80, 130, 20, 100));
        label_trilho4_5->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4_6 = new QLabel(centralWidget);
        label_trilho4_6->setObjectName(QString::fromUtf8("label_trilho4_6"));
        label_trilho4_6->setGeometry(QRect(180, 130, 20, 100));
        label_trilho4_6->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4_7 = new QLabel(centralWidget);
        label_trilho4_7->setObjectName(QString::fromUtf8("label_trilho4_7"));
        label_trilho4_7->setGeometry(QRect(280, 130, 20, 100));
        label_trilho4_7->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho1_3 = new QLabel(centralWidget);
        label_trilho1_3->setObjectName(QString::fromUtf8("label_trilho1_3"));
        label_trilho1_3->setGeometry(QRect(80, 230, 221, 17));
        label_trilho1_3->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trem3 = new QLabel(centralWidget);
        label_trem3->setObjectName(QString::fromUtf8("label_trem3"));
        label_trem3->setGeometry(QRect(360, 70, 21, 17));
        label_trem3->setStyleSheet(QString::fromUtf8("QLabel { background: orange}"));
        label_trem5 = new QLabel(centralWidget);
        label_trem5->setObjectName(QString::fromUtf8("label_trem5"));
        label_trem5->setGeometry(QRect(360, 110, 21, 17));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(52, 101, 164, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(170, 255, 87, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(142, 232, 54, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(57, 105, 11, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(76, 140, 14, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(185, 232, 138, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush10(QColor(115, 210, 22, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        label_trem5->setPalette(palette);
        label_trem5->setStyleSheet(QString::fromUtf8("QLabel { background: rgb(52, 101, 164) }"));
        label_trem1 = new QLabel(centralWidget);
        label_trem1->setObjectName(QString::fromUtf8("label_trem1"));
        label_trem1->setGeometry(QRect(360, 30, 21, 17));
        label_trem1->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trem2 = new QLabel(centralWidget);
        label_trem2->setObjectName(QString::fromUtf8("label_trem2"));
        label_trem2->setGeometry(QRect(360, 50, 21, 16));
        label_trem2->setStyleSheet(QString::fromUtf8("QLabel { background: cyan}"));
        label_trem4 = new QLabel(centralWidget);
        label_trem4->setObjectName(QString::fromUtf8("label_trem4"));
        label_trem4->setGeometry(QRect(360, 90, 21, 17));
        label_trem4->setStyleSheet(QString::fromUtf8("QLabel { background: green}"));
        VelocidadeTrem01 = new QSlider(centralWidget);
        VelocidadeTrem01->setObjectName(QString::fromUtf8("VelocidadeTrem01"));
        VelocidadeTrem01->setGeometry(QRect(410, 30, 160, 16));
        VelocidadeTrem01->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 41, 41);"));
        VelocidadeTrem01->setMinimum(0);
        VelocidadeTrem01->setMaximum(100);
        VelocidadeTrem01->setValue(10);
        VelocidadeTrem01->setOrientation(Qt::Horizontal);
        VelocidadeTrem01->setTickInterval(0);
        VelocidadeTrem02 = new QSlider(centralWidget);
        VelocidadeTrem02->setObjectName(QString::fromUtf8("VelocidadeTrem02"));
        VelocidadeTrem02->setGeometry(QRect(410, 50, 160, 16));
        VelocidadeTrem02->setStyleSheet(QString::fromUtf8("background-color: cyan;"));
        VelocidadeTrem02->setMinimum(0);
        VelocidadeTrem02->setMaximum(100);
        VelocidadeTrem02->setValue(10);
        VelocidadeTrem02->setOrientation(Qt::Horizontal);
        VelocidadeTrem02->setTickInterval(0);
        VelocidadeTrem03 = new QSlider(centralWidget);
        VelocidadeTrem03->setObjectName(QString::fromUtf8("VelocidadeTrem03"));
        VelocidadeTrem03->setGeometry(QRect(410, 70, 160, 16));
        VelocidadeTrem03->setStyleSheet(QString::fromUtf8("background-color: orange;"));
        VelocidadeTrem03->setMinimum(0);
        VelocidadeTrem03->setMaximum(100);
        VelocidadeTrem03->setValue(10);
        VelocidadeTrem03->setOrientation(Qt::Horizontal);
        VelocidadeTrem03->setTickInterval(0);
        VelocidadeTrem04 = new QSlider(centralWidget);
        VelocidadeTrem04->setObjectName(QString::fromUtf8("VelocidadeTrem04"));
        VelocidadeTrem04->setGeometry(QRect(410, 90, 160, 16));
        VelocidadeTrem04->setStyleSheet(QString::fromUtf8("background-color: green;"));
        VelocidadeTrem04->setMinimum(0);
        VelocidadeTrem04->setMaximum(100);
        VelocidadeTrem04->setValue(10);
        VelocidadeTrem04->setOrientation(Qt::Horizontal);
        VelocidadeTrem04->setTickInterval(0);
        VelocidadeTrem05 = new QSlider(centralWidget);
        VelocidadeTrem05->setObjectName(QString::fromUtf8("VelocidadeTrem05"));
        VelocidadeTrem05->setGeometry(QRect(410, 110, 160, 16));
        VelocidadeTrem05->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 101, 164) ;"));
        VelocidadeTrem05->setMinimum(0);
        VelocidadeTrem05->setMaximum(100);
        VelocidadeTrem05->setValue(10);
        VelocidadeTrem05->setOrientation(Qt::Horizontal);
        VelocidadeTrem05->setTickInterval(0);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 707, 22));
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
        zlabel_trilho1->setText(QString());
        label_trilho4->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Ligar", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Parar", nullptr));
        label_trilho4_2->setText(QString());
        label_trilho4_3->setText(QString());
        label_trilho4_4->setText(QString());
        label_trilho1_2->setText(QString());
        label_trilho4_5->setText(QString());
        label_trilho4_6->setText(QString());
        label_trilho4_7->setText(QString());
        label_trilho1_3->setText(QString());
        label_trem3->setText(QApplication::translate("MainWindow", "T3", nullptr));
        label_trem5->setText(QApplication::translate("MainWindow", "T5", nullptr));
        label_trem1->setText(QApplication::translate("MainWindow", "T1", nullptr));
        label_trem2->setText(QApplication::translate("MainWindow", "T2", nullptr));
        label_trem4->setText(QApplication::translate("MainWindow", "T4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
