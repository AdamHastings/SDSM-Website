#include "MainWindow.h"
#include "Ui_MainWindow.h"
#include "DropBox.h"
#include "PowerMgmt.h"

#include <thread>
#include <chrono>
#include <stdlib.h>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <QProcess>
using namespace std;

void MainWindow::showGoodbye() {
    ui.stackedWidget->setCurrentWidget(ui.goodbye);
}

void MainWindow::showTask1() {
    ui.stackedWidget->setCurrentWidget(ui.task1);
}

void MainWindow::showTask2() {
    ui.stackedWidget->setCurrentWidget(ui.task2);
}

void MainWindow::showTask3() {
    ui.stackedWidget->setCurrentWidget(ui.task3);
}

void MainWindow::pickThrottledTask() {
    srand((unsigned)time(NULL));
    throttled_task = rand() % 2 + 2;
    unthrottled_task = (throttled_task == 2) ? 3 : 2;
}

void MainWindow::showPatch1() {
    ui.stackedWidget->setCurrentWidget(ui.patch1);
    pickThrottledTask();
    ui.patch1->fillBar();
    if (throttled_task == 2)
        PowerMgmt::setFreq(100 - slowdown);
    else
        PowerMgmt::setFreq(100);
    ui.patch1->done_label->setText("Done!");
    ui.patch1->continue_btn->setEnabled(true);
}

void MainWindow::showPatch2() {
    ui.stackedWidget->setCurrentWidget(ui.patch2);
    ui.patch2->fillBar();
    if (throttled_task == 3)
        PowerMgmt::setFreq(100 - slowdown);
    else
        PowerMgmt::setFreq(100);
    ui.patch2->done_label->setText("Done!");
    ui.patch2->continue_btn->setEnabled(true);
}

void MainWindow::showPatch3() {
    ui.stackedWidget->setCurrentWidget(ui.patch3);
    ui.patch3->fillBar();
    PowerMgmt::restoreDefaults();
    ui.patch3->done_label->setText("Done!");
    ui.patch3->continue_btn->setEnabled(true);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    //DropBox::upload("Protocol1App");

    connect(ui.start->not_consent_btn, &QPushButton::clicked, this, &MainWindow::showGoodbye);
    connect(ui.start->consent_btn, &QPushButton::clicked, this, &MainWindow::showTask1);
    connect(ui.task1->continue_btn, &QPushButton::clicked, this, &MainWindow::showPatch1);
    connect(ui.patch1->continue_btn, &QPushButton::clicked, this, &MainWindow::showTask2);
    connect(ui.task2->continue_btn, &QPushButton::clicked, this, &MainWindow::showPatch2);
    connect(ui.patch2->continue_btn, &QPushButton::clicked, this, &MainWindow::showTask3);
    connect(ui.task3->continue_btn, &QPushButton::clicked, this, &MainWindow::showPatch3);

}
