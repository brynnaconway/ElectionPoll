#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Candidate.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Voter.h"
#include <QString>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //vector <Voter *> voters;
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

    cout << "trump" << endl;
    Candidate trump("Donald Trump", voters);
    trump.countVotes(voters);
    cout << "clinton" << endl;
    Candidate clinton("Hillary Clinton", voters);
    clinton.countVotes(voters);
    cout << "kasich" << endl;
    Candidate kasich("John Kasich", voters);
    kasich.countVotes(voters);
    cout << "cruz" << endl;
    Candidate cruz("Ted Cruz", voters);
    cruz.countVotes(voters);
    cout << "sanders" << endl;
    Candidate sanders("Bernie Sanders", voters);
    sanders.countVotes(voters);
    sandersVotes = sanders.getTotal();

    ui->setupUi(this);
    QPixmap bkgrnd("./background.jpg");
    bkgrnd = bkgrnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgrnd);
    this->setPalette(palette);
    //qApp->setStyleSheet("background-image: url(:/images/background.jpg);");

    MainWindow::makePlot();

}

MainWindow::~MainWindow()
{
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
    // create empty bar chart objects:
    QCPBars *votes = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
    ui->customPlot->addPlottable(votes);
    // set names and colors:
    QPen pen;
    pen.setWidthF(1.2);
    votes->setName("Votes");
    pen.setColor(QColor(255, 131, 0));
    votes->setPen(pen);
    votes->setBrush(QColor(255, 131, 0, 50));

    // stack bars ontop of each other:
    //nuclear->moveAbove(fossil);
    //regen->moveAbove(nuclear);

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
    ui->customPlot->xAxis->setRange(0, 8);

    // prepare y axis:
    ui->customPlot->yAxis->setRange(0, voters.size());
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
    cout << "sanders total: " << sanders.getTotal() << endl;
    votesData  << sandersVotes << clinton.getTotal() << cruz.getTotal() << kasich.getTotal() << trump.getTotal();
    votes->setData(ticks, votesData);

    // setup legend:
   // ui->customPlot->legend->setVisible(true);
    //ui->customPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
    /*ui->customPlot->legend->setBrush(QColor(255, 255, 255, 200));
    QPen legendPen;
    legendPen.setColor(QColor(130, 130, 130, 200));
    ui->customPlot->legend->setBorderPen(legendPen);
    QFont legendFont = font();
    legendFont.setPointSize(10);
    ui->customPlot->legend->setFont(legendFont);
    ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);*/
}

// make graph button
void MainWindow::on_graphButton_clicked()
{
    makePlot();
    cout << "hi" << endl;
}

// clear button (display graph with default values)
void MainWindow::on_clearButton_clicked()
{
    return;
}

void MainWindow::on_AgeDrop_currentIndexChanged(const QString &arg1)
{
    //ageString = AgeDrop->setCurrentIndex()

    int ageIndex;
    ageIndex = ui->AgeDrop->currentIndex();
    string ageString = ui->AgeDrop->itemText(ageIndex).toStdString();


    sanders.setAgeChoice(ageString);
    clinton.setAgeChoice(ageString);
    trump.setAgeChoice(ageString);
    kasich.setAgeChoice(ageString);
    cruz.setAgeChoice(ageString);

    sanders.countVotes(voters);
    //clinton.countVotes(voters);
    /*trump.countVotes(voters);
    kasich.countVotes(voters);
    cruz.countVotes(voters);*/


}
