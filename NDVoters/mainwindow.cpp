#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setStyleSheet("background-image: url(:/images/background.jpg);");
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
    labels << "Sanders" << "Clinton" << "Kruz" << "Kasich" << "Trump";
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
    ui->customPlot->yAxis->setRange(0, 100.1);
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
    votesData  << 0.86*10.5 << 0.83*5.5 << 0.84*5.5 << 0.52*5.8 << 0.89*5.2;
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
}

// clear button (display graph with default values)
void MainWindow::on_clearButton_clicked()
{
    makePlot();
}
