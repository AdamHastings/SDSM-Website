#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Protocol2App.h"

class Protocol2App : public QMainWindow
{
    Q_OBJECT

public:
    Protocol2App(QWidget *parent = Q_NULLPTR);
    
    void showWTA();
    void WTAnext();
    void showFormPage();
    void acceptOffer();
    void declineOffer();

private:
    Ui::MainWindow ui;
    QString RegLocation = "HKEY_CURRENT_USER\\Software\\HastingsExperiment2020\\";
};