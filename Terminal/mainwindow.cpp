#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSerialPort/QSerialPort>

QSerialPort *serial_port;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Serial Terminal by Danh21");

    /* setup COM port */
    serial_port = new QSerialPort(parent);
    serial_port->setPortName("COM3");
    serial_port->setBaudRate(QSerialPort::Baud9600);
    serial_port->setDataBits(QSerialPort::Data8);
    serial_port->setParity(QSerialPort::NoParity);
    serial_port->setStopBits(QSerialPort::OneStop);
    serial_port->open(QIODeviceBase::ReadWrite);

    connect(ui->sendBtn, SIGNAL(clicked(bool)), this, SLOT(serial_tx()));
    connect(serial_port, SIGNAL(readyRead()), this, SLOT(serial_rx()));
    connect(ui->clrBtn, SIGNAL(clicked(bool)), this, SLOT(clear_output()));
}

MainWindow::~MainWindow()
{
    delete ui;
    serial_port->close();
}


void MainWindow::serial_tx()
{
    serial_port->write(ui->input->text().toStdString().data());
    serial_port->write("\r\n");
}

void MainWindow::serial_rx()
{
    ui->output->moveCursor(QTextCursor::End);
    ui->output->insertPlainText(serial_port->readAll());
}

void MainWindow::clear_output()
{
    ui->output->clear();
}
