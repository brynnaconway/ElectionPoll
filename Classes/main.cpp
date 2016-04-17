#include "mainwindow.h"
#include <QApplication>
#include "Candidate.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Voter.h"


int main(int argc, char *argv[]) {

    QApplication a(argc, argv);
    MainWindow w;
    w.show();



return a.exec();
}

