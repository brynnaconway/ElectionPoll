#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qcustomplot.h"
#include "Candidate.h"
#include <vector>
#include <string>
using namespace std;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionQuit_triggered();

    void on_quitButton_clicked();

    void makePlot();
    void on_graphButton_clicked();
    
    void on_AgeDrop_currentIndexChanged(const QString &arg1);

    void on_GenderDrop_currentIndexChanged(const QString &arg1);

    void on_DormDrop_currentIndexChanged(const QString &arg1);

    void on_PartyDrop_currentIndexChanged(const QString &arg1);

    void on_AgeDrop_2_currentIndexChanged(const QString &arg1);

    void on_GenderDrop_2_currentIndexChanged(const QString &arg1);

    void on_DormDrop_2_currentIndexChanged(const QString &arg1);

    void on_PartyDrop_2_currentIndexChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    vector <Voter *> voters;
    Candidate *trump;
    Candidate *sanders;
    Candidate *clinton;
    Candidate *cruz;
    Candidate *kasich;
    int sandersVotes;

};

#endif // MAINWINDOW_H
