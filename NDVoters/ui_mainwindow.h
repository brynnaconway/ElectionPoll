/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Apr 16 15:19:26 2016
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QComboBox *CandidateDrop;
    QComboBox *GenderDrop;
    QComboBox *DormDrop;
    QPushButton *graphButton;
    QPushButton *quitButton;
    QPushButton *clearButton;
    QCustomPlot *customPlot;
    QMenuBar *menuBar;
    QMenu *menuNDVOTERS;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(841, 600);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(250, 10, 181, 41));
        textEdit->setReadOnly(true);
        CandidateDrop = new QComboBox(centralWidget);
        CandidateDrop->setObjectName(QString::fromUtf8("CandidateDrop"));
        CandidateDrop->setGeometry(QRect(50, 130, 123, 26));
        GenderDrop = new QComboBox(centralWidget);
        GenderDrop->setObjectName(QString::fromUtf8("GenderDrop"));
        GenderDrop->setGeometry(QRect(50, 160, 121, 31));
        DormDrop = new QComboBox(centralWidget);
        DormDrop->setObjectName(QString::fromUtf8("DormDrop"));
        DormDrop->setGeometry(QRect(50, 190, 121, 26));
        graphButton = new QPushButton(centralWidget);
        graphButton->setObjectName(QString::fromUtf8("graphButton"));
        graphButton->setGeometry(QRect(290, 320, 113, 32));
        quitButton = new QPushButton(centralWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(570, 410, 61, 21));
        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(530, 10, 113, 32));
        customPlot = new QCustomPlot(centralWidget);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(190, 70, 331, 241));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 841, 22));
        menuNDVOTERS = new QMenu(menuBar);
        menuNDVOTERS->setObjectName(QString::fromUtf8("menuNDVOTERS"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuNDVOTERS->menuAction());
        menuNDVOTERS->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:24pt; font-weight:600; color:#00aa7f;\">NDVoters</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        CandidateDrop->clear();
        CandidateDrop->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Candidates", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Leah", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Brynna", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Erin", 0, QApplication::UnicodeUTF8)
        );
        CandidateDrop->setCurrentText(QApplication::translate("MainWindow", "Candidates", 0, QApplication::UnicodeUTF8));
        GenderDrop->clear();
        GenderDrop->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Gender", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Female", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Male", 0, QApplication::UnicodeUTF8)
        );
        DormDrop->clear();
        DormDrop->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Dorm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Alumni", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Badin", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Breen-Phillips", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Carroll", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Cavanaugh", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Dillon", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Duncan", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Farley", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Fisher", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Howard", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Keenan", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Keough", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Knott", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Lewis", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Lyons", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "McGlinn", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Morrissey", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "O'Neill", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Pangborn", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Pasquerilla East", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Paswuerilla West", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Ryan", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "St.Edward's", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Siegfried", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Sorin", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stanford", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Walsh", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Welsh Family", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Zahm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Off Campus", 0, QApplication::UnicodeUTF8)
        );
        graphButton->setText(QApplication::translate("MainWindow", "Create Graph", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("MainWindow", "Clear Graph", 0, QApplication::UnicodeUTF8));
        menuNDVOTERS->setTitle(QApplication::translate("MainWindow", "NDVOTERS", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
