#pragma once

#include <QtWidgets/QMainWindow>
#include <QProgressBar>
#include "ui_MainWindow.h"

#ifdef _WIN32
#include <windows.h>
#pragma comment(lib, "user32.lib")
#endif

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = Q_NULLPTR);

private:
    Ui::MainWindow ui;

    int throttled_task = -1;
    int unthrottled_task = -1;
    int slowdown = 30;

    int default_CsEnabled;
    int default_ACProcThrottleMin;
    int default_ACProcThrottleMax;
    int default_DCProcThrottleMin;
    int default_DCProcThrottleMax;

    void getDefaultPowercfg();

    void showGoodbye();
    void showTask1();
    void showTask2();
    void showTask3();
    void setFreq(int p);
    void pickThrottledTask();
    void showPatch1();
    void showPatch2();
    void showPatch3();

};
