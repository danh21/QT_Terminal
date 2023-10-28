#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSerialPort/QSerialPort>



QSerialPort *serial_port;

QAction *selectedCOM;
QAction *selectedBaud;
QAction *selectedData;
QAction *selectedParity;
QAction *selectedStop;



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Serial Terminal by Danh21");

    /* setup COM port */
    serial_port = new QSerialPort(parent);
    serial_port->setPortName("COM1");
    serial_port->setBaudRate(QSerialPort::Baud9600);
    serial_port->setDataBits(QSerialPort::Data8);
    serial_port->setParity(QSerialPort::NoParity);
    serial_port->setStopBits(QSerialPort::OneStop);
    serial_port->open(QIODeviceBase::ReadWrite);

    /* handle events */
    connect(ui->sendBtn, SIGNAL(clicked(bool)), this, SLOT(serial_tx()));
    connect(serial_port, SIGNAL(readyRead()), this, SLOT(serial_rx()));
    connect(ui->clrBtn, SIGNAL(clicked(bool)), this, SLOT(clear_output()));

    /* setup default actions */
    selectedCOM = ui->actionCOM1;
    selectedBaud = ui->action9600;
    selectedData = ui->action8;
    selectedParity = ui->actionNone;
    selectedStop = ui->action1;
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



void MainWindow::on_actionCOM1_triggered()
{
    serial_port->close();

    serial_port->setPortName("COM1");

    if (selectedCOM != ui->actionCOM1)
        selectedCOM->setChecked(false);
    else
        selectedCOM->setChecked(true);

    selectedCOM = ui->actionCOM1;

    serial_port->open(QIODeviceBase::ReadWrite);
}



void MainWindow::on_actionCOM2_triggered()
{
    serial_port->close();

    serial_port->setPortName("COM2");

    if (selectedCOM != ui->actionCOM2)
        selectedCOM->setChecked(false);
    else
        selectedCOM->setChecked(true);

    selectedCOM = ui->actionCOM2;

    serial_port->open(QIODeviceBase::ReadWrite);
}



void MainWindow::on_actionCOM3_triggered()
{
    serial_port->close();

    serial_port->setPortName("COM3");

    if (selectedCOM != ui->actionCOM3)
        selectedCOM->setChecked(false);
    else
        selectedCOM->setChecked(true);

    selectedCOM = ui->actionCOM3;

    serial_port->open(QIODeviceBase::ReadWrite);
}



void MainWindow::on_action1200_triggered()
{
    serial_port->setBaudRate(QSerialPort::Baud1200);

    if (selectedBaud != ui->action1200)
        selectedBaud->setChecked(false);
    else
        selectedBaud->setChecked(true);

    selectedBaud = ui->action1200;
}



void MainWindow::on_action2400_triggered()
{
    serial_port->setBaudRate(QSerialPort::Baud2400);

    if (selectedBaud != ui->action2400)
        selectedBaud->setChecked(false);
    else
        selectedBaud->setChecked(true);

    selectedBaud = ui->action2400;
}



void MainWindow::on_action4800_triggered()
{
    serial_port->setBaudRate(QSerialPort::Baud4800);

    if (selectedBaud != ui->action4800)
        selectedBaud->setChecked(false);
    else
        selectedBaud->setChecked(true);

    selectedBaud = ui->action4800;
}



void MainWindow::on_action9600_triggered()
{
    serial_port->setBaudRate(QSerialPort::Baud9600);

    if (selectedBaud != ui->action9600)
        selectedBaud->setChecked(false);
    else
        selectedBaud->setChecked(true);

    selectedBaud = ui->action9600;
}



void MainWindow::on_action19200_triggered()
{
    serial_port->setBaudRate(QSerialPort::Baud19200);

    if (selectedBaud != ui->action19200)
        selectedBaud->setChecked(false);
    else
        selectedBaud->setChecked(true);

    selectedBaud = ui->action19200;
}



void MainWindow::on_action38400_triggered()
{
    serial_port->setBaudRate(QSerialPort::Baud38400);

    if (selectedBaud != ui->action38400)
        selectedBaud->setChecked(false);
    else
        selectedBaud->setChecked(true);

    selectedBaud = ui->action38400;
}



void MainWindow::on_action57600_triggered()
{
    serial_port->setBaudRate(QSerialPort::Baud57600);

    if (selectedBaud != ui->action57600)
        selectedBaud->setChecked(false);
    else
        selectedBaud->setChecked(true);

    selectedBaud = ui->action57600;
}



void MainWindow::on_action115200_triggered()
{
    serial_port->setBaudRate(QSerialPort::Baud115200);

    if (selectedBaud != ui->action115200)
        selectedBaud->setChecked(false);
    else
        selectedBaud->setChecked(true);

    selectedBaud = ui->action115200;
}



void MainWindow::on_action5_triggered()
{
    serial_port->setDataBits(QSerialPort::Data5);

    if (selectedData != ui->action5)
        selectedData->setChecked(false);
    else
        selectedData->setChecked(true);

    selectedData = ui->action5;
}



void MainWindow::on_action6_triggered()
{
    serial_port->setDataBits(QSerialPort::Data6);

    if (selectedData != ui->action6)
        selectedData->setChecked(false);
    else
        selectedData->setChecked(true);

    selectedData = ui->action6;
}



void MainWindow::on_action7_triggered()
{
    serial_port->setDataBits(QSerialPort::Data7);

    if (selectedData != ui->action7)
        selectedData->setChecked(false);
    else
        selectedData->setChecked(true);

    selectedData = ui->action7;
}



void MainWindow::on_action8_triggered()
{
    serial_port->setDataBits(QSerialPort::Data8);

    if (selectedData != ui->action8)
        selectedData->setChecked(false);
    else
        selectedData->setChecked(true);

    selectedData = ui->action8;
}



void MainWindow::on_actionNone_triggered()
{
    serial_port->setParity(QSerialPort::NoParity);

    if (selectedParity != ui->actionNone)
        selectedParity->setChecked(false);
    else
        selectedParity->setChecked(true);

    selectedParity = ui->actionNone;
}



void MainWindow::on_actionEven_triggered()
{
    serial_port->setParity(QSerialPort::EvenParity);

    if (selectedParity != ui->actionEven)
        selectedParity->setChecked(false);
    else
        selectedParity->setChecked(true);

    selectedParity = ui->actionEven;
}



void MainWindow::on_actionOdd_triggered()
{
    serial_port->setParity(QSerialPort::OddParity);

    if (selectedParity != ui->actionOdd)
        selectedParity->setChecked(false);
    else
        selectedParity->setChecked(true);

    selectedParity = ui->actionOdd;
}



void MainWindow::on_actionSpace_triggered()
{
    serial_port->setParity(QSerialPort::SpaceParity);

    if (selectedParity != ui->actionSpace)
        selectedParity->setChecked(false);
    else
        selectedParity->setChecked(true);

    selectedParity = ui->actionSpace;
}



void MainWindow::on_actionMark_triggered()
{
    serial_port->setParity(QSerialPort::MarkParity);

    if (selectedParity != ui->actionMark)
        selectedParity->setChecked(false);
    else
        selectedParity->setChecked(true);

    selectedParity = ui->actionMark;
}



void MainWindow::on_action1_triggered()
{
    serial_port->setStopBits(QSerialPort::OneStop);

    if (selectedStop != ui->action1)
        selectedStop->setChecked(false);
    else
        selectedStop->setChecked(true);

    selectedStop = ui->action1;
}



void MainWindow::on_action1_5_triggered()
{
    serial_port->setStopBits(QSerialPort::OneAndHalfStop);

    if (selectedStop != ui->action1_5)
        selectedStop->setChecked(false);
    else
        selectedStop->setChecked(true);

    selectedStop = ui->action1_5;
}



void MainWindow::on_action2_triggered()
{
    serial_port->setStopBits(QSerialPort::TwoStop);

    if (selectedStop != ui->action2)
        selectedStop->setChecked(false);
    else
        selectedStop->setChecked(true);

    selectedStop = ui->action2;
}

