#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Candidate.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Voter.h"
#include <QString>
#include <QPaintEvent>
using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    string file = "results.dat"; // sets the file to the correct one
    string candidate, age, gender, dorm, party, garbage;
    ifstream myfile(file.c_str() ); //this will input the file
    Voter *voter;
    int i = 0;
    if (myfile.is_open()){ //open the file and check if it is open
        while (!myfile.eof()){
            getline(myfile, candidate, ',');
            getline(myfile, age, ',');
            getline(myfile, gender, ',');
            getline(myfile, dorm, ',');
            getline(myfile, party, ',');
            getline(myfile, garbage, '\n');
            voter = new Voter;
            voters.push_back(voter);
            voters[i]->setCandidate(candidate);
            voters[i]->setAge(age);
            voters[i]->setGender(gender);
            voters[i]->setDorm(dorm);
            voters[i]->setParty(party);
            i++;
        }
    }

    trump = new Candidate("Donald Trump", voters);
    trump->countVotes(1, voters);
    trump->countVotes(2, voters);
    clinton = new Candidate("Hillary Clinton", voters);
    clinton->countVotes(1, voters);
    clinton->countVotes(2, voters);
    kasich = new Candidate("John Kasich", voters);
    kasich->countVotes(1, voters);
    kasich->countVotes(2, voters);
    cruz = new Candidate("Ted Cruz", voters);
    cruz->countVotes(1, voters);
    cruz->countVotes(2, voters);
    sanders = new Candidate("Bernie Sanders", voters);
    sanders->countVotes(1, voters);
    sanders->countVotes(2, voters);

    ui->setupUi(this);
    QPixmap bkgrnd("./background.jpg");
    bkgrnd = bkgrnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgrnd);
    this->setPalette(palette);

    MainWindow::makePlot();

}

MainWindow::~MainWindow()
{
    delete sanders;
    delete trump;
    delete clinton;
    delete cruz;
    delete kasich;
    delete ui;
}

void MainWindow::on_actionQuit_triggered()
{
    qApp->quit();
}

void MainWindow::on_quitButton_clicked()
{
    qApp->quit();
}

void MainWindow::makePlot() {
    ui->customPlot->clearPlottables();
    // create empty bar chart objects:
    QCPBars *votes = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
    QCPBars *votes2 = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
    QCPBarsGroup *group = new QCPBarsGroup(ui->customPlot);
    group ->append(votes);
    group ->append(votes2);
    ui->customPlot->addPlottable(votes);
    ui->customPlot->addPlottable(votes2);

    // set names and colors:
    QPen pen;
    pen.setWidthF(1.2);
    votes->setName("Males");
    pen.setColor(QColor(11,18,83));
    votes->setPen(pen);
    votes->setBrush(QColor(11, 18, 83, 80));

    pen.setWidthF(1.2);
    votes2->setName("Females");
    pen.setColor(QColor(49,49,49));
    votes2->setPen(pen);
    votes2->setBrush(QColor(154, 222, 196, 80));

    // set background to transparent
    ui->customPlot->setBackground(Qt::white);
    ui->customPlot->axisRect()->setBackground(Qt::white);

    // prepare x axis with candidate labels:
    QVector<double> ticks;
    QVector<QString> labels;
    ticks << 1 << 2 << 3 << 4 << 5;
    labels << "Sanders" << "Clinton" << "Cruz" << "Kasich" << "Trump";
    ui->customPlot->xAxis->setAutoTicks(false);
    ui->customPlot->xAxis->setAutoTickLabels(false);
    ui->customPlot->xAxis->setTickVector(ticks);
    ui->customPlot->xAxis->setTickVectorLabels(labels);
    ui->customPlot->xAxis->setTickLabelRotation(60);
    ui->customPlot->xAxis->setSubTickCount(0);
    ui->customPlot->xAxis->setTickLength(0, 4);
    ui->customPlot->xAxis->grid()->setVisible(true);
    ui->customPlot->xAxis->setRange(0, 6);

    // prepare y axis:
    ui->customPlot->yAxis->setRange(0, voters.size()/2);
    ui->customPlot->yAxis->setPadding(5); // a bit more space to the left border
    ui->customPlot->yAxis->setLabel("Number of Votes");
    ui->customPlot->yAxis->grid()->setSubGridVisible(true);
    QPen gridPen;
    gridPen.setStyle(Qt::SolidLine);
    gridPen.setColor(QColor(0, 0, 0, 25));
    ui->customPlot->yAxis->grid()->setPen(gridPen);
    gridPen.setStyle(Qt::DotLine);
    ui->customPlot->yAxis->grid()->setSubGridPen(gridPen);

    // Add data:
    QVector<double> votesData;
    votesData  << sanders->getTotal() << clinton->getTotal() << cruz->getTotal() << kasich->getTotal() << trump->getTotal();
    votes->setData(ticks, votesData);
    votes->setWidth(0.25);
    QVector<double> votesData2;
    votesData2 << sanders->getTotal2() << clinton->getTotal2() << cruz->getTotal2() << kasich->getTotal2() << trump->getTotal2();
    votes2->setData(ticks, votesData2);
    votes2->setWidth(0.25);

    ui->customPlot->replot();
}

// make graph button
void MainWindow::on_graphButton_clicked()
{
    makePlot();
}

void MainWindow::on_AgeDrop_currentIndexChanged(const QString &arg1)
{

    int ageIndex;
    ageIndex = ui->AgeDrop->currentIndex();
    string ageString = ui->AgeDrop->itemText(ageIndex).toStdString();

    sanders->setAgeChoice(ageString);
    clinton->setAgeChoice(ageString);
    trump->setAgeChoice(ageString);
    kasich->setAgeChoice(ageString);
    cruz->setAgeChoice(ageString);

    sanders->countVotes(1, voters);
    clinton->countVotes(1, voters);
    trump->countVotes(1, voters);
    kasich->countVotes(1, voters);
    cruz->countVotes(1, voters);


}

void MainWindow::on_GenderDrop_currentIndexChanged(const QString &arg1)
{
    int genderIndex;
    genderIndex = ui->GenderDrop->currentIndex();
    string genderString = ui->GenderDrop->itemText(genderIndex).toStdString();

    sanders->setGenderChoice(genderString);
    clinton->setGenderChoice(genderString);
    trump->setGenderChoice(genderString);
    kasich->setGenderChoice(genderString);
    cruz->setGenderChoice(genderString);

    sanders->countVotes(1, voters);
    clinton->countVotes(1, voters);
    trump->countVotes(1, voters);
    kasich->countVotes(1, voters);
    cruz->countVotes(1, voters);
}

void MainWindow::on_DormDrop_currentIndexChanged(const QString &arg1)
{
    int dormIndex;
    dormIndex = ui->DormDrop->currentIndex();
    string dormString = ui->DormDrop->itemText(dormIndex).toStdString();

    sanders->setDormChoice(dormString);
    clinton->setDormChoice(dormString);
    trump->setDormChoice(dormString);
    kasich->setDormChoice(dormString);
    cruz->setDormChoice(dormString);

    sanders->countVotes(1, voters);
    clinton->countVotes(1, voters);
    trump->countVotes(1, voters);
    kasich->countVotes(1, voters);
    cruz->countVotes(1, voters);
}

void MainWindow::on_PartyDrop_currentIndexChanged(const QString &arg1)
{
    int partyIndex;
    partyIndex = ui->PartyDrop->currentIndex();
    string partyString = ui->PartyDrop->itemText(partyIndex).toStdString();

    sanders->setPartyChoice(partyString);
    clinton->setPartyChoice(partyString);
    trump->setPartyChoice(partyString);
    kasich->setPartyChoice(partyString);
    cruz->setPartyChoice(partyString);

    sanders->countVotes(1, voters);
    clinton->countVotes(1, voters);
    trump->countVotes(1, voters);
    kasich->countVotes(1, voters);
    cruz->countVotes(1, voters);
}

void MainWindow::on_AgeDrop_2_currentIndexChanged(const QString &arg1)
{
    int ageIndex;
    ageIndex = ui->AgeDrop_2->currentIndex();
    string ageString = ui->AgeDrop_2->itemText(ageIndex).toStdString();

    sanders->setAgeChoice(ageString);
    clinton->setAgeChoice(ageString);
    trump->setAgeChoice(ageString);
    kasich->setAgeChoice(ageString);
    cruz->setAgeChoice(ageString);

    sanders->countVotes(2, voters);
    clinton->countVotes(2, voters);
    trump->countVotes(2, voters);
    kasich->countVotes(2, voters);
    cruz->countVotes(2, voters);
}



void MainWindow::on_GenderDrop_2_currentIndexChanged(const QString &arg1)
{
    int genderIndex;
    genderIndex = ui->GenderDrop_2->currentIndex();
    string genderString = ui->GenderDrop_2->itemText(genderIndex).toStdString();

    sanders->setGenderChoice(genderString);
    clinton->setGenderChoice(genderString);
    trump->setGenderChoice(genderString);
    kasich->setGenderChoice(genderString);
    cruz->setGenderChoice(genderString);

    sanders->countVotes(2, voters);
    clinton->countVotes(2, voters);
    trump->countVotes(2, voters);
    kasich->countVotes(2, voters);
    cruz->countVotes(2, voters);
}

void MainWindow::on_DormDrop_2_currentIndexChanged(const QString &arg1)
{
    int dormIndex;
    dormIndex = ui->DormDrop_2->currentIndex();
    string dormString = ui->DormDrop_2->itemText(dormIndex).toStdString();

    sanders->setDormChoice(dormString);
    clinton->setDormChoice(dormString);
    trump->setDormChoice(dormString);
    kasich->setDormChoice(dormString);
    cruz->setDormChoice(dormString);

    sanders->countVotes(2, voters);
    clinton->countVotes(2, voters);
    trump->countVotes(2, voters);
    kasich->countVotes(2, voters);
    cruz->countVotes(2, voters);
}

void MainWindow::on_PartyDrop_2_currentIndexChanged(const QString &arg1)
{
    int partyIndex;
    partyIndex = ui->PartyDrop_2->currentIndex();
    string partyString = ui->PartyDrop_2->itemText(partyIndex).toStdString();

    sanders->setPartyChoice(partyString);
    clinton->setPartyChoice(partyString);
    trump->setPartyChoice(partyString);
    kasich->setPartyChoice(partyString);
    cruz->setPartyChoice(partyString);

    sanders->countVotes(2, voters);
    clinton->countVotes(2, voters);
    trump->countVotes(2, voters);
    kasich->countVotes(2, voters);
    cruz->countVotes(2, voters);
}
