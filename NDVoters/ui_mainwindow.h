/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
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
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralWidget;
    QComboBox *AgeDrop;
    QComboBox *GenderDrop;
    QComboBox *DormDrop;
    QPushButton *graphButton;
    QPushButton *quitButton;
    QCustomPlot *customPlot;
    QComboBox *PartyDrop;
    QComboBox *AgeDrop_2;
    QLabel *label;
    QComboBox *GenderDrop_2;
    QComboBox *DormDrop_2;
    QComboBox *PartyDrop_2;
    QLabel *label_3;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menuNDVOTERS;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(975, 618);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        AgeDrop = new QComboBox(centralWidget);
        AgeDrop->setObjectName(QString::fromUtf8("AgeDrop"));
        AgeDrop->setGeometry(QRect(20, 160, 123, 31));
        GenderDrop = new QComboBox(centralWidget);
        GenderDrop->setObjectName(QString::fromUtf8("GenderDrop"));
        GenderDrop->setGeometry(QRect(20, 210, 121, 31));
        DormDrop = new QComboBox(centralWidget);
        DormDrop->setObjectName(QString::fromUtf8("DormDrop"));
        DormDrop->setGeometry(QRect(20, 260, 121, 31));
        graphButton = new QPushButton(centralWidget);
        graphButton->setObjectName(QString::fromUtf8("graphButton"));
        graphButton->setGeometry(QRect(420, 480, 113, 32));
        quitButton = new QPushButton(centralWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(820, 480, 81, 31));
        customPlot = new QCustomPlot(centralWidget);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(180, 60, 581, 411));
        customPlot->setFocusPolicy(Qt::StrongFocus);
        customPlot->setAutoFillBackground(true);
        PartyDrop = new QComboBox(centralWidget);
        PartyDrop->setObjectName(QString::fromUtf8("PartyDrop"));
        PartyDrop->setGeometry(QRect(20, 310, 121, 31));
        AgeDrop_2 = new QComboBox(centralWidget);
        AgeDrop_2->setObjectName(QString::fromUtf8("AgeDrop_2"));
        AgeDrop_2->setGeometry(QRect(800, 160, 123, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 120, 71, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe WP Black"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        GenderDrop_2 = new QComboBox(centralWidget);
        GenderDrop_2->setObjectName(QString::fromUtf8("GenderDrop_2"));
        GenderDrop_2->setGeometry(QRect(800, 210, 121, 31));
        DormDrop_2 = new QComboBox(centralWidget);
        DormDrop_2->setObjectName(QString::fromUtf8("DormDrop_2"));
        DormDrop_2->setGeometry(QRect(800, 260, 121, 31));
        PartyDrop_2 = new QComboBox(centralWidget);
        PartyDrop_2->setObjectName(QString::fromUtf8("PartyDrop_2"));
        PartyDrop_2->setGeometry(QRect(800, 310, 121, 31));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(820, 120, 81, 21));
        label_3->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, -30, 381, 111));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe WP Black"));
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 975, 26));
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
        AgeDrop->clear();
        AgeDrop->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Age", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "19", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "21", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "22", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "23", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "24", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "25", 0, QApplication::UnicodeUTF8)
        );
        //AgeDrop->setCurrentText(QApplication::translate("MainWindow", "Age", 0, QApplication::UnicodeUTF8));
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
         << QApplication::translate("MainWindow", "Pasquerilla West", 0, QApplication::UnicodeUTF8)
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
        PartyDrop->clear();
        PartyDrop->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Political Party", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Republican Party", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Democratic Party", 0, QApplication::UnicodeUTF8)
        );
        AgeDrop_2->clear();
        AgeDrop_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Age", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "19", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "21", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "22", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "23", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "24", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "25", 0, QApplication::UnicodeUTF8)
        );
        //AgeDrop_2->setCurrentText(QApplication::translate("MainWindow", "Age", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Left Bar</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        GenderDrop_2->clear();
        GenderDrop_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Gender", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Female", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Male", 0, QApplication::UnicodeUTF8)
        );
        DormDrop_2->clear();
        DormDrop_2->insertItems(0, QStringList()
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
         << QApplication::translate("MainWindow", "Pasquerilla West", 0, QApplication::UnicodeUTF8)
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
        PartyDrop_2->clear();
        PartyDrop_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Political Party", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Republican Party", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Democratic Party", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Right Bar</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt; color:#ffffff;\">NDVoters</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        menuNDVOTERS->setTitle(QApplication::translate("MainWindow", "NDVOTERS", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
