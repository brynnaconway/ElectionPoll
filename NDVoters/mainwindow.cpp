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
    Voter *voter; //object points to voter class
    int i = 0;
    if (myfile.is_open()){ //open the file and check if it is open
    	//parse through the results.dat, using comma as a delimiter and storing information
        while (!myfile.eof()){
            getline(myfile, candidate, ',');
            getline(myfile, age, ',');
            getline(myfile, gender, ',');
            getline(myfile, dorm, ',');
            getline(myfile, party, ',');
            getline(myfile, garbage, '\n');
            voter = new Voter; //allocate a new voter
            voters.push_back(voter); //push the new voter into vector of voters
            //set the values of the dorm, age, gender, party, and candidate name to the specific voter 
            voters[i]->setCandidate(candidate); 
            voters[i]->setAge(age);
            voters[i]->setGender(gender);
            voters[i]->setDorm(dorm);
            voters[i]->setParty(party);
            i++;
        }
    }

    trump = new Candidate("Donald Trump", voters); //create pointer to Candidate object for trump
    trump->countVotes(1, voters); //count the votes for the left bar graphs
    trump->countVotes(2, voters); //count the voters for the right bar graphs 
    clinton = new Candidate("Hillary Clinton", voters); //create pointer to Candidate for clinton
    clinton->countVotes(1, voters);//count the votes for the left bar graphs
    clinton->countVotes(2, voters); //count the voters for the right bar graphs 
    kasich = new Candidate("John Kasich", voters); //create pointer to Candidate for kasich
    kasich->countVotes(1, voters); //count the votes for the left bar graphs
    kasich->countVotes(2, voters); //count the voters for the right bar graphs 
    cruz = new Candidate("Ted Cruz", voters); //create pointer to Candidate for cruz
    cruz->countVotes(1, voters); //count the votes for the left bar graphs
    cruz->countVotes(2, voters); //count the voters for the right bar graphs 
    sanders = new Candidate("Bernie Sanders", voters); //create pointer to candidate for sanders
    sanders->countVotes(1, voters); //count the votes for the left bar graphs
    sanders->countVotes(2, voters); //count the voters for the right bar graphs 
	//Set up background image
    ui->setupUi(this);
    QPixmap bkgrnd("./background.jpg");
    bkgrnd = bkgrnd.scaled(this->size(), Qt::IgnoreAspectRatio); //scale image to size of window
    QPalette palette; //create object in Qpalette
    palette.setBrush(QPalette::Background, bkgrnd); //prevents background from getting overwritten 
    this->setPalette(palette);

    MainWindow::makePlot(); //make the plot on the gui

}

//clean up memory allocation 
MainWindow::~MainWindow()
{
    delete sanders;
    delete trump;
    delete clinton;
    delete cruz;
    delete kasich;
    delete ui;
}

//allows for gui to close when quit is pressed
void MainWindow::on_actionQuit_triggered()
{
    qApp->quit();
}
//allows for gui to close when quit is pressed
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
    group ->append(votes); //push the votes to the group
    group ->append(votes2); //push the second set of votes to the group
    ui->customPlot->addPlottable(votes); //adds the data to the left bars
    ui->customPlot->addPlottable(votes2); //adds the data to the right bars 

    // set names and colors:
    QPen pen;
    pen.setWidthF(1.2);
    pen.setColor(QColor(11,18,83));
    votes->setPen(pen);
    votes->setBrush(QColor(11, 18, 83, 80));

    pen.setWidthF(1.2);
    pen.setColor(QColor(49,49,49));
    votes2->setPen(pen);
    votes2->setBrush(QColor(154, 222, 196, 80));

    // set background colors correctly
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

    // Add data by using getTotal and getTotal2 for each Candidate object:
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

//Drop down for age left bar
void MainWindow::on_AgeDrop_currentIndexChanged(const QString &arg1)
{

    int ageIndex;
    ageIndex = ui->AgeDrop->currentIndex();
    string ageString = ui->AgeDrop->itemText(ageIndex).toStdString();
	
	//sets the Age Choice to the selection from the drop down to each candidate
    sanders->setAgeChoice(ageString);
    clinton->setAgeChoice(ageString);
    trump->setAgeChoice(ageString);
    kasich->setAgeChoice(ageString);
    cruz->setAgeChoice(ageString);
	
	//count the votes for the left bar
    sanders->countVotes(1, voters);
    clinton->countVotes(1, voters);
    trump->countVotes(1, voters);
    kasich->countVotes(1, voters);
    cruz->countVotes(1, voters);


}

//Drop down for gender left bar
void MainWindow::on_GenderDrop_currentIndexChanged(const QString &arg1)
{
    int genderIndex;
    genderIndex = ui->GenderDrop->currentIndex();
    string genderString = ui->GenderDrop->itemText(genderIndex).toStdString();
    
	//sets the Gender Choice to the selection from the drop down to each candidate
    sanders->setGenderChoice(genderString);
    clinton->setGenderChoice(genderString);
    trump->setGenderChoice(genderString);
    kasich->setGenderChoice(genderString);
    cruz->setGenderChoice(genderString);
	
	//counts the votes for the left bar for each candidate
    sanders->countVotes(1, voters);
    clinton->countVotes(1, voters);
    trump->countVotes(1, voters);
    kasich->countVotes(1, voters);
    cruz->countVotes(1, voters);
}

//drop down for dorm left bar
void MainWindow::on_DormDrop_currentIndexChanged(const QString &arg1)
{
    int dormIndex;
    dormIndex = ui->DormDrop->currentIndex();
    string dormString = ui->DormDrop->itemText(dormIndex).toStdString();

	//sets the Dorm Choice to the selection from the drop down to each candidate
    sanders->setDormChoice(dormString);
    clinton->setDormChoice(dormString);
    trump->setDormChoice(dormString);
    kasich->setDormChoice(dormString);
    cruz->setDormChoice(dormString);
    
	//count votes for the left bar
    sanders->countVotes(1, voters);
    clinton->countVotes(1, voters);
    trump->countVotes(1, voters);
    kasich->countVotes(1, voters);
    cruz->countVotes(1, voters);
}

//drop down menu for part left bar
void MainWindow::on_PartyDrop_currentIndexChanged(const QString &arg1)
{
    int partyIndex;
    partyIndex = ui->PartyDrop->currentIndex();
    string partyString = ui->PartyDrop->itemText(partyIndex).toStdString();
	//sets the party Choice to the selection from the drop down to each candidate
    sanders->setPartyChoice(partyString);
    clinton->setPartyChoice(partyString);
    trump->setPartyChoice(partyString);
    kasich->setPartyChoice(partyString);
    cruz->setPartyChoice(partyString);

	//count votes for the left bar
    sanders->countVotes(1, voters);
    clinton->countVotes(1, voters);
    trump->countVotes(1, voters);
    kasich->countVotes(1, voters);
    cruz->countVotes(1, voters);
}

//drop down menu for age right bar
void MainWindow::on_AgeDrop_2_currentIndexChanged(const QString &arg1)
{
    int ageIndex;
    ageIndex = ui->AgeDrop_2->currentIndex();
    string ageString = ui->AgeDrop_2->itemText(ageIndex).toStdString();
	//sets the age Choice to the selection from the drop down to each candidate
    sanders->setAgeChoice(ageString);
    clinton->setAgeChoice(ageString);
    trump->setAgeChoice(ageString);
    kasich->setAgeChoice(ageString);
    cruz->setAgeChoice(ageString);

	//count votes for the right bar 
    sanders->countVotes(2, voters);
    clinton->countVotes(2, voters);
    trump->countVotes(2, voters);
    kasich->countVotes(2, voters);
    cruz->countVotes(2, voters);
}


//drop down menu for gender right bar 
void MainWindow::on_GenderDrop_2_currentIndexChanged(const QString &arg1)
{
    int genderIndex;
    genderIndex = ui->GenderDrop_2->currentIndex();
    string genderString = ui->GenderDrop_2->itemText(genderIndex).toStdString();

	//sets the Gender Choice to the selection from the drop down to each candidate
    sanders->setGenderChoice(genderString);
    clinton->setGenderChoice(genderString);
    trump->setGenderChoice(genderString);
    kasich->setGenderChoice(genderString);
    cruz->setGenderChoice(genderString);

	//count votes for the right bar 
    sanders->countVotes(2, voters);
    clinton->countVotes(2, voters);
    trump->countVotes(2, voters);
    kasich->countVotes(2, voters);
    cruz->countVotes(2, voters);
}

//drop down menu for dorm for right 
void MainWindow::on_DormDrop_2_currentIndexChanged(const QString &arg1)
{
    int dormIndex;
    dormIndex = ui->DormDrop_2->currentIndex();
    string dormString = ui->DormDrop_2->itemText(dormIndex).toStdString();

	//sets the dorm Choice to the selection from the drop down to each candidate
    sanders->setDormChoice(dormString);
    clinton->setDormChoice(dormString);
    trump->setDormChoice(dormString);
    kasich->setDormChoice(dormString);
    cruz->setDormChoice(dormString);

	//count votes for right bar
    sanders->countVotes(2, voters);
    clinton->countVotes(2, voters);
    trump->countVotes(2, voters);
    kasich->countVotes(2, voters);
    cruz->countVotes(2, voters);
}

//drop down menue for part right bars
void MainWindow::on_PartyDrop_2_currentIndexChanged(const QString &arg1)
{
    int partyIndex;
    partyIndex = ui->PartyDrop_2->currentIndex();
    string partyString = ui->PartyDrop_2->itemText(partyIndex).toStdString();
    
	//sets the Gender Choice to the selection from the drop down to each candidate
    sanders->setPartyChoice(partyString);
    clinton->setPartyChoice(partyString);
    trump->setPartyChoice(partyString);
    kasich->setPartyChoice(partyString);
    cruz->setPartyChoice(partyString);

	//count votes for the right bar 
    sanders->countVotes(2, voters);
    clinton->countVotes(2, voters);
    trump->countVotes(2, voters);
    kasich->countVotes(2, voters);
    cruz->countVotes(2, voters);
}
