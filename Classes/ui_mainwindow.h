/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QComboBox *AgeDrop;
    QComboBox *GenderDrop;
    QComboBox *DormDrop;
    QPushButton *graphButton;
    QPushButton *quitButton;
    QPushButton *clearButton;
    QCustomPlot *customPlot;
    QComboBox *PartyDrop;
    QMenuBar *menuBar;
    QMenu *menuNDVOTERS;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(841, 600);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(300, 0, 291, 81));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient(0, 0, 1, 0);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(187, 196, 205, 255));
        gradient.setColorAt(1, QColor(142, 162, 186, 255));
        QBrush brush1(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 255, 191, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(0, 212, 159, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 85, 63, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 113, 84, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient1(0, 0, 1, 0);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(187, 196, 205, 255));
        gradient1.setColorAt(1, QColor(142, 162, 186, 255));
        QBrush brush7(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        QLinearGradient gradient2(0, 0, 1, 0);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(187, 196, 205, 255));
        gradient2.setColorAt(1, QColor(142, 162, 186, 255));
        QBrush brush8(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush9(QColor(127, 212, 191, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient3(0, 0, 1, 0);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(187, 196, 205, 255));
        gradient3.setColorAt(1, QColor(142, 162, 186, 255));
        QBrush brush11(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient4(0, 0, 1, 0);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(187, 196, 205, 255));
        gradient4.setColorAt(1, QColor(142, 162, 186, 255));
        QBrush brush12(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        QLinearGradient gradient5(0, 0, 1, 0);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(187, 196, 205, 255));
        gradient5.setColorAt(1, QColor(142, 162, 186, 255));
        QBrush brush13(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        QLinearGradient gradient6(0, 0, 1, 0);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(187, 196, 205, 255));
        gradient6.setColorAt(1, QColor(142, 162, 186, 255));
        QBrush brush14(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        QLinearGradient gradient7(0, 0, 1, 0);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(187, 196, 205, 255));
        gradient7.setColorAt(1, QColor(142, 162, 186, 255));
        QBrush brush15(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush15);
        QLinearGradient gradient8(0, 0, 1, 0);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(187, 196, 205, 255));
        gradient8.setColorAt(1, QColor(142, 162, 186, 255));
        QBrush brush16(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush16);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush17(QColor(0, 170, 127, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush17);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        textEdit->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Segoe MDL2 Assets"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        textEdit->setFont(font);
        textEdit->setAutoFillBackground(false);
        textEdit->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(187, 196, 205, 255), stop:1 rgba(142, 162, 186, 255));"));
        textEdit->setFrameShape(QFrame::NoFrame);
        textEdit->setLineWidth(0);
        textEdit->setReadOnly(true);
        AgeDrop = new QComboBox(centralWidget);
        AgeDrop->setObjectName(QStringLiteral("AgeDrop"));
        AgeDrop->setGeometry(QRect(50, 80, 123, 31));
        GenderDrop = new QComboBox(centralWidget);
        GenderDrop->setObjectName(QStringLiteral("GenderDrop"));
        GenderDrop->setGeometry(QRect(50, 130, 121, 31));
        DormDrop = new QComboBox(centralWidget);
        DormDrop->setObjectName(QStringLiteral("DormDrop"));
        DormDrop->setGeometry(QRect(50, 180, 121, 31));
        graphButton = new QPushButton(centralWidget);
        graphButton->setObjectName(QStringLiteral("graphButton"));
        graphButton->setGeometry(QRect(360, 500, 113, 32));
        quitButton = new QPushButton(centralWidget);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(720, 500, 81, 31));
        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(670, 30, 113, 32));
        customPlot = new QCustomPlot(centralWidget);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(190, 80, 561, 411));
        customPlot->setFocusPolicy(Qt::StrongFocus);
        customPlot->setAutoFillBackground(true);
        PartyDrop = new QComboBox(centralWidget);
        PartyDrop->setObjectName(QStringLiteral("PartyDrop"));
        PartyDrop->setGeometry(QRect(50, 230, 121, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 841, 26));
        menuNDVOTERS = new QMenu(menuBar);
        menuNDVOTERS->setObjectName(QStringLiteral("menuNDVOTERS"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuNDVOTERS->menuAction());
        menuNDVOTERS->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe MDL2 Assets'; font-size:10pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:24pt; color:#ffffff;\">NDVoters</span></p></body></html>", 0));
        AgeDrop->clear();
        AgeDrop->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Age", 0)
         << QApplication::translate("MainWindow", "18", 0)
         << QApplication::translate("MainWindow", "19", 0)
         << QApplication::translate("MainWindow", "20", 0)
         << QApplication::translate("MainWindow", "21", 0)
         << QApplication::translate("MainWindow", "22", 0)
         << QApplication::translate("MainWindow", "23", 0)
         << QApplication::translate("MainWindow", "24", 0)
         << QApplication::translate("MainWindow", "25", 0)
        );
        AgeDrop->setCurrentText(QApplication::translate("MainWindow", "Age", 0));
        GenderDrop->clear();
        GenderDrop->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Gender", 0)
         << QApplication::translate("MainWindow", "Female", 0)
         << QApplication::translate("MainWindow", "Male", 0)
        );
        DormDrop->clear();
        DormDrop->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Dorm", 0)
         << QApplication::translate("MainWindow", "Alumni", 0)
         << QApplication::translate("MainWindow", "Badin", 0)
         << QApplication::translate("MainWindow", "Breen-Phillips", 0)
         << QApplication::translate("MainWindow", "Carroll", 0)
         << QApplication::translate("MainWindow", "Cavanaugh", 0)
         << QApplication::translate("MainWindow", "Dillon", 0)
         << QApplication::translate("MainWindow", "Duncan", 0)
         << QApplication::translate("MainWindow", "Farley", 0)
         << QApplication::translate("MainWindow", "Fisher", 0)
         << QApplication::translate("MainWindow", "Howard", 0)
         << QApplication::translate("MainWindow", "Keenan", 0)
         << QApplication::translate("MainWindow", "Keough", 0)
         << QApplication::translate("MainWindow", "Knott", 0)
         << QApplication::translate("MainWindow", "Lewis", 0)
         << QApplication::translate("MainWindow", "Lyons", 0)
         << QApplication::translate("MainWindow", "McGlinn", 0)
         << QApplication::translate("MainWindow", "Morrissey", 0)
         << QApplication::translate("MainWindow", "O'Neill", 0)
         << QApplication::translate("MainWindow", "Pangborn", 0)
         << QApplication::translate("MainWindow", "Pasquerilla East", 0)
         << QApplication::translate("MainWindow", "Pasquerilla West", 0)
         << QApplication::translate("MainWindow", "Ryan", 0)
         << QApplication::translate("MainWindow", "St.Edward's", 0)
         << QApplication::translate("MainWindow", "Siegfried", 0)
         << QApplication::translate("MainWindow", "Sorin", 0)
         << QApplication::translate("MainWindow", "Stanford", 0)
         << QApplication::translate("MainWindow", "Walsh", 0)
         << QApplication::translate("MainWindow", "Welsh Family", 0)
         << QApplication::translate("MainWindow", "Zahm", 0)
         << QApplication::translate("MainWindow", "Off Campus", 0)
        );
        graphButton->setText(QApplication::translate("MainWindow", "Create Graph", 0));
        quitButton->setText(QApplication::translate("MainWindow", "Quit", 0));
        clearButton->setText(QApplication::translate("MainWindow", "Clear Graph", 0));
        PartyDrop->clear();
        PartyDrop->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Political Party", 0)
         << QApplication::translate("MainWindow", "Republican Party", 0)
         << QApplication::translate("MainWindow", "Democratic Party", 0)
        );
        menuNDVOTERS->setTitle(QApplication::translate("MainWindow", "NDVOTERS", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
