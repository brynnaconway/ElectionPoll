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
        textEdit->setGeometry(QRect(300, 0, 291, 71));
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
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; font-weight:600; color:#00aa7f;\">NDVoters</span></p></body></html>", 0));
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
         << QApplication::translate("MainWindow", "New Item", 0)
        );
        menuNDVOTERS->setTitle(QApplication::translate("MainWindow", "NDVOTERS", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
