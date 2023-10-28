/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCOM1;
    QAction *actionCOM2;
    QAction *actionCOM3;
    QAction *action1200;
    QAction *action2400;
    QAction *action4800;
    QAction *action9600;
    QAction *action19200;
    QAction *action38400;
    QAction *action57600;
    QAction *action115200;
    QAction *action5;
    QAction *action6;
    QAction *action7;
    QAction *action8;
    QAction *actionNone;
    QAction *actionEven;
    QAction *actionOdd;
    QAction *actionSpace;
    QAction *actionMark;
    QAction *action1;
    QAction *action1_5;
    QAction *action2;
    QWidget *centralwidget;
    QPushButton *sendBtn;
    QLineEdit *input;
    QPlainTextEdit *output;
    QPushButton *clrBtn;
    QMenuBar *menubar;
    QMenu *menuCOM;
    QMenu *menuBaud;
    QMenu *menuDATA;
    QMenu *menuPARITY;
    QMenu *menuSTOP_BIT;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionCOM1 = new QAction(MainWindow);
        actionCOM1->setObjectName(QString::fromUtf8("actionCOM1"));
        actionCOM1->setCheckable(true);
        actionCOM1->setChecked(true);
        actionCOM1->setEnabled(true);
        actionCOM2 = new QAction(MainWindow);
        actionCOM2->setObjectName(QString::fromUtf8("actionCOM2"));
        actionCOM2->setCheckable(true);
        actionCOM3 = new QAction(MainWindow);
        actionCOM3->setObjectName(QString::fromUtf8("actionCOM3"));
        actionCOM3->setCheckable(true);
        actionCOM3->setChecked(false);
        action1200 = new QAction(MainWindow);
        action1200->setObjectName(QString::fromUtf8("action1200"));
        action1200->setCheckable(true);
        action2400 = new QAction(MainWindow);
        action2400->setObjectName(QString::fromUtf8("action2400"));
        action2400->setCheckable(true);
        action4800 = new QAction(MainWindow);
        action4800->setObjectName(QString::fromUtf8("action4800"));
        action4800->setCheckable(true);
        action9600 = new QAction(MainWindow);
        action9600->setObjectName(QString::fromUtf8("action9600"));
        action9600->setCheckable(true);
        action9600->setChecked(true);
        action19200 = new QAction(MainWindow);
        action19200->setObjectName(QString::fromUtf8("action19200"));
        action19200->setCheckable(true);
        action38400 = new QAction(MainWindow);
        action38400->setObjectName(QString::fromUtf8("action38400"));
        action38400->setCheckable(true);
        action57600 = new QAction(MainWindow);
        action57600->setObjectName(QString::fromUtf8("action57600"));
        action57600->setCheckable(true);
        action115200 = new QAction(MainWindow);
        action115200->setObjectName(QString::fromUtf8("action115200"));
        action115200->setCheckable(true);
        action5 = new QAction(MainWindow);
        action5->setObjectName(QString::fromUtf8("action5"));
        action5->setCheckable(true);
        action6 = new QAction(MainWindow);
        action6->setObjectName(QString::fromUtf8("action6"));
        action6->setCheckable(true);
        action7 = new QAction(MainWindow);
        action7->setObjectName(QString::fromUtf8("action7"));
        action7->setCheckable(true);
        action8 = new QAction(MainWindow);
        action8->setObjectName(QString::fromUtf8("action8"));
        action8->setCheckable(true);
        action8->setChecked(true);
        actionNone = new QAction(MainWindow);
        actionNone->setObjectName(QString::fromUtf8("actionNone"));
        actionNone->setCheckable(true);
        actionNone->setChecked(true);
        actionEven = new QAction(MainWindow);
        actionEven->setObjectName(QString::fromUtf8("actionEven"));
        actionEven->setCheckable(true);
        actionOdd = new QAction(MainWindow);
        actionOdd->setObjectName(QString::fromUtf8("actionOdd"));
        actionOdd->setCheckable(true);
        actionSpace = new QAction(MainWindow);
        actionSpace->setObjectName(QString::fromUtf8("actionSpace"));
        actionSpace->setCheckable(true);
        actionMark = new QAction(MainWindow);
        actionMark->setObjectName(QString::fromUtf8("actionMark"));
        actionMark->setCheckable(true);
        action1 = new QAction(MainWindow);
        action1->setObjectName(QString::fromUtf8("action1"));
        action1->setCheckable(true);
        action1->setChecked(true);
        action1_5 = new QAction(MainWindow);
        action1_5->setObjectName(QString::fromUtf8("action1_5"));
        action1_5->setCheckable(true);
        action2 = new QAction(MainWindow);
        action2->setObjectName(QString::fromUtf8("action2"));
        action2->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sendBtn = new QPushButton(centralwidget);
        sendBtn->setObjectName(QString::fromUtf8("sendBtn"));
        sendBtn->setGeometry(QRect(650, 50, 101, 41));
        input = new QLineEdit(centralwidget);
        input->setObjectName(QString::fromUtf8("input"));
        input->setGeometry(QRect(40, 50, 591, 41));
        output = new QPlainTextEdit(centralwidget);
        output->setObjectName(QString::fromUtf8("output"));
        output->setGeometry(QRect(40, 120, 591, 391));
        QFont font;
        font.setPointSize(9);
        output->setFont(font);
        output->setReadOnly(true);
        clrBtn = new QPushButton(centralwidget);
        clrBtn->setObjectName(QString::fromUtf8("clrBtn"));
        clrBtn->setGeometry(QRect(650, 120, 101, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuCOM = new QMenu(menubar);
        menuCOM->setObjectName(QString::fromUtf8("menuCOM"));
        menuCOM->setMinimumSize(QSize(0, 0));
        menuBaud = new QMenu(menubar);
        menuBaud->setObjectName(QString::fromUtf8("menuBaud"));
        menuDATA = new QMenu(menubar);
        menuDATA->setObjectName(QString::fromUtf8("menuDATA"));
        menuPARITY = new QMenu(menubar);
        menuPARITY->setObjectName(QString::fromUtf8("menuPARITY"));
        menuSTOP_BIT = new QMenu(menubar);
        menuSTOP_BIT->setObjectName(QString::fromUtf8("menuSTOP_BIT"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuCOM->menuAction());
        menubar->addAction(menuBaud->menuAction());
        menubar->addAction(menuDATA->menuAction());
        menubar->addAction(menuPARITY->menuAction());
        menubar->addAction(menuSTOP_BIT->menuAction());
        menuCOM->addAction(actionCOM1);
        menuCOM->addAction(actionCOM2);
        menuCOM->addAction(actionCOM3);
        menuBaud->addAction(action1200);
        menuBaud->addAction(action2400);
        menuBaud->addAction(action4800);
        menuBaud->addAction(action9600);
        menuBaud->addAction(action19200);
        menuBaud->addAction(action38400);
        menuBaud->addAction(action57600);
        menuBaud->addAction(action115200);
        menuDATA->addAction(action5);
        menuDATA->addAction(action6);
        menuDATA->addAction(action7);
        menuDATA->addAction(action8);
        menuPARITY->addAction(actionNone);
        menuPARITY->addAction(actionEven);
        menuPARITY->addAction(actionOdd);
        menuPARITY->addAction(actionSpace);
        menuPARITY->addAction(actionMark);
        menuSTOP_BIT->addAction(action1);
        menuSTOP_BIT->addAction(action1_5);
        menuSTOP_BIT->addAction(action2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCOM1->setText(QCoreApplication::translate("MainWindow", "COM1", nullptr));
        actionCOM2->setText(QCoreApplication::translate("MainWindow", "COM2", nullptr));
        actionCOM3->setText(QCoreApplication::translate("MainWindow", "COM3", nullptr));
        action1200->setText(QCoreApplication::translate("MainWindow", "1200", nullptr));
        action2400->setText(QCoreApplication::translate("MainWindow", "2400", nullptr));
        action4800->setText(QCoreApplication::translate("MainWindow", "4800", nullptr));
        action9600->setText(QCoreApplication::translate("MainWindow", "9600", nullptr));
        action19200->setText(QCoreApplication::translate("MainWindow", "19200", nullptr));
        action38400->setText(QCoreApplication::translate("MainWindow", "38400", nullptr));
        action57600->setText(QCoreApplication::translate("MainWindow", "57600", nullptr));
        action115200->setText(QCoreApplication::translate("MainWindow", "115200", nullptr));
        action5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        action6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        action7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        action8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        actionNone->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        actionEven->setText(QCoreApplication::translate("MainWindow", "Even", nullptr));
        actionOdd->setText(QCoreApplication::translate("MainWindow", "Odd", nullptr));
        actionSpace->setText(QCoreApplication::translate("MainWindow", "Space", nullptr));
        actionMark->setText(QCoreApplication::translate("MainWindow", "Mark", nullptr));
        action1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        action1_5->setText(QCoreApplication::translate("MainWindow", "1.5", nullptr));
        action2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        sendBtn->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        clrBtn->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        menuCOM->setTitle(QCoreApplication::translate("MainWindow", "COM", nullptr));
        menuBaud->setTitle(QCoreApplication::translate("MainWindow", "BAUD RATE", nullptr));
        menuDATA->setTitle(QCoreApplication::translate("MainWindow", "DATA BITS", nullptr));
        menuPARITY->setTitle(QCoreApplication::translate("MainWindow", "PARITY", nullptr));
        menuSTOP_BIT->setTitle(QCoreApplication::translate("MainWindow", "STOP BIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
