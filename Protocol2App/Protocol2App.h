#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Protocol2App.h"

//enum restoreReason {TIMEOUT, DECLINE};

class Protocol2App : public QMainWindow
{
    Q_OBJECT

public:
    Protocol2App(QWidget *parent = Q_NULLPTR);
    
    //static void restoreSystem(restoreReason r);
    static int getDays();
    static QString getUNI();
    static QString getName();
    static int getHours();

    static void setUNI(QString input);
    static void setName(QString input);
    static void setHours(int input);
   

private:
    Ui::MainWindow ui;

    static int days;
    static QString uni;
    static QString name;
    static int hours;


private:
    void showStartNext();
    void showModNext();
    void showWTA();
    void WTAnext();
    void showFormPage();
    void showGoodbye();
    void acceptOffer();
    void declineOffer();
    void showSurvey();
    void showCheat();
    void showUsage();
    void showHours();
    void showNoMore();
    void showSurveyNext();
    void showImprove();
    void showDecrease();
    void showTimeoutSplash();

    void closeEvent(QCloseEvent* event);
    void resetProgram();
    void timeout();

    void enableExitButton();
    void disableExitButton();
};
