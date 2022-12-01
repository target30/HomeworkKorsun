#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QDebug>
#include <QByteArray>
#include <QString>
#include <algorithm>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ui_customContextMenuRequested(const QPoint &pos)
{

}


void MainWindow::on_pushButton_clicked()
{
    QVector<double> x, y;
    QFile file(
    "C:\\Users\\79851\\Desktop\\numbers.txt"
    );
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0, "error", file.errorString());
    }
    QTextStream in(&file);
    if(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList string_numbers = line.split(";");
        foreach(QString num, string_numbers)
        x.append(num.toDouble());
        line = in.readLine();
        string_numbers = line.split(";");
        foreach(QString num, string_numbers)
        y.append(num.toDouble());
    }
    file.close();

    ui->widget->clearGraphs();
    ui->widget->addGraph();
    ui->widget->graph(0)->setData(x, y);
    ui->widget->graph(0)->setPen(QColor(50, 50, 50, 255));//задаем цвет точки

    //формируем вид точек
    ui->widget->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 4));

    ui->widget->xAxis->setLabel("x");
    ui->widget->yAxis->setLabel("y");
    //Установим область, которая будет показываться на графике
    ui->widget->xAxis->setRange(-1+*std::min_element(x.constBegin(), x.constEnd()),1+*std::max_element(x.constBegin(), x.constEnd()));//Для оси Ox
    ui->widget->yAxis->setRange(-1+*std::min_element(y.constBegin(), y.constEnd()),1+*std::max_element(y.constBegin(), y.constEnd()));//Для оси Oy

    //И перерисуем график на нашем widget
    ui->widget->replot();
}

