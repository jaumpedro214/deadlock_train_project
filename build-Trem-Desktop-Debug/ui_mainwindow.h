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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_trem1;
    QLabel *label_trilho1;
    QLabel *label_trilho2;
    QLabel *label_trilho3;
    QLabel *label_trilho4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_trilho4_2;
    QLabel *label_trilho1_2;
    QLabel *label_trilho2_2;
    QLabel *label_trem2;
    QLabel *label_trem3;
    QLabel *label_trem4;
    QLabel *label_trem5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(917, 490);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_trem1 = new QLabel(centralWidget);
        label_trem1->setObjectName(QString::fromUtf8("label_trem1"));
        label_trem1->setGeometry(QRect(60, 30, 21, 17));
        label_trem1->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trilho1 = new QLabel(centralWidget);
        label_trilho1->setObjectName(QString::fromUtf8("label_trilho1"));
        label_trilho1->setGeometry(QRect(80, 30, 250, 17));
        label_trilho1->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho2 = new QLabel(centralWidget);
        label_trilho2->setObjectName(QString::fromUtf8("label_trilho2"));
        label_trilho2->setGeometry(QRect(80, 150, 250, 17));
        label_trilho2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho3 = new QLabel(centralWidget);
        label_trilho3->setObjectName(QString::fromUtf8("label_trilho3"));
        label_trilho3->setGeometry(QRect(330, 30, 21, 137));
        label_trilho3->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4 = new QLabel(centralWidget);
        label_trilho4->setObjectName(QString::fromUtf8("label_trilho4"));
        label_trilho4->setGeometry(QRect(60, 30, 21, 137));
        label_trilho4->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 0, 99, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 0, 98, 27));
        label_trilho4_2 = new QLabel(centralWidget);
        label_trilho4_2->setObjectName(QString::fromUtf8("label_trilho4_2"));
        label_trilho4_2->setGeometry(QRect(600, 30, 21, 137));
        label_trilho4_2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho1_2 = new QLabel(centralWidget);
        label_trilho1_2->setObjectName(QString::fromUtf8("label_trilho1_2"));
        label_trilho1_2->setGeometry(QRect(350, 30, 250, 17));
        label_trilho1_2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho2_2 = new QLabel(centralWidget);
        label_trilho2_2->setObjectName(QString::fromUtf8("label_trilho2_2"));
        label_trilho2_2->setGeometry(QRect(350, 150, 250, 17));
        label_trilho2_2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trem2 = new QLabel(centralWidget);
        label_trem2->setObjectName(QString::fromUtf8("label_trem2"));
        label_trem2->setGeometry(QRect(330, 30, 21, 17));
        label_trem2->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trem3 = new QLabel(centralWidget);
        label_trem3->setObjectName(QString::fromUtf8("label_trem3"));
        label_trem3->setGeometry(QRect(600, 30, 21, 17));
        label_trem3->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trem4 = new QLabel(centralWidget);
        label_trem4->setObjectName(QString::fromUtf8("label_trem4"));
        label_trem4->setGeometry(QRect(60, 150, 21, 17));
        label_trem4->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trem5 = new QLabel(centralWidget);
        label_trem5->setObjectName(QString::fromUtf8("label_trem5"));
        label_trem5->setGeometry(QRect(330, 150, 21, 17));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(115, 210, 22, 255));
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
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
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
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
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
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        label_trem5->setPalette(palette);
        label_trem5->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        MainWindow->setCentralWidget(centralWidget);
        label_trilho1->raise();
        label_trilho2->raise();
        label_trilho3->raise();
        label_trilho4->raise();
        label_trem1->raise();
        pushButton->raise();
        pushButton_2->raise();
        label_trilho4_2->raise();
        label_trilho1_2->raise();
        label_trilho2_2->raise();
        label_trem2->raise();
        label_trem3->raise();
        label_trem4->raise();
        label_trem5->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 917, 22));
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
        label_trem1->setText(QApplication::translate("MainWindow", "T1", nullptr));
        label_trilho1->setText(QString());
        label_trilho2->setText(QString());
        label_trilho3->setText(QString());
        label_trilho4->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Ligar", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Parar", nullptr));
        label_trilho4_2->setText(QString());
        label_trilho1_2->setText(QString());
        label_trilho2_2->setText(QString());
        label_trem2->setText(QApplication::translate("MainWindow", "T2", nullptr));
        label_trem3->setText(QApplication::translate("MainWindow", "T3", nullptr));
        label_trem4->setText(QApplication::translate("MainWindow", "T4", nullptr));
        label_trem5->setText(QApplication::translate("MainWindow", "T5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
