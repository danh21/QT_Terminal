#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void serial_tx();
    void serial_rx();

    void clear_output();

    void on_actionCOM1_triggered();
    void on_actionCOM2_triggered();
    void on_actionCOM3_triggered();

    void on_action1200_triggered();
    void on_action38400_triggered();
    void on_action2400_triggered();
    void on_action4800_triggered();
    void on_action9600_triggered();
    void on_action19200_triggered();
    void on_action57600_triggered();
    void on_action115200_triggered();

    void on_action5_triggered();
    void on_action6_triggered();
    void on_action7_triggered();
    void on_action8_triggered();

    void on_actionNone_triggered();
    void on_actionEven_triggered();
    void on_actionOdd_triggered();
    void on_actionSpace_triggered();
    void on_actionMark_triggered();

    void on_action1_triggered();
    void on_action1_5_triggered();
    void on_action2_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
