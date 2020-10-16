#pragma once

#include <QRect>
#include <QApplication>
#include <QMainWindow>
#include <QStackedWidget>
#include <QDesktopWidget>
#include <QDebug>

#include "Globals.h"
#include "StartPage.h"
#include "WTAPage.h"
#include "DoubleCheck.h"
#include "ExitPage.h"
#include "FormPage.h"
#include "RegistryEditPage.h"

#include "RegistryUtils.h"
#include "DropBox.h"

QT_BEGIN_NAMESPACE



class ui_Protocol2App
{

public:
    QWidget* centralwidget;
    QStackedWidget* stackedWidget;

    StartPage* start;
    NoAdminPage* noadmin;
    RegistryEditPage* regedit;
    GoodbyePage* goodbye;
    ModPage* mod;
    WTAPage* wta;
    DoubleCheckAccept* dc_accept;
    DoubleCheckDecline* dc_decline;
    NoMoreDaysPage* nomore;
    OneMoreDayPage* onemore;
    FormPage* form;



    void setupUi(QMainWindow* MainWindow)
    {
        rec = QApplication::desktop()->screenGeometry();
        H = std::min(rec.height() / 2, rec.width() / 2);
        W = std::max(rec.height() / 2, rec.width() / 2);
        M = H / 10;
        LINEWIDTH = W - (2 * M);
        BUTTON_WIDTH = W / 4;
        BUTTON_HEIGHT = H / 16;

        SLOWDOWN = 30;
        OFFER = 1;

        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));



        //// main setup ///////////////////////////////////////////////////////

        MainWindow->setMinimumSize(QSize(W, H));
        MainWindow->setMaximumSize(QSize(W, H));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setMinimumSize(QSize(W, H));
        centralwidget->setMaximumSize(QSize(W, H));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, W, H));
        stackedWidget->setMinimumSize(QSize(W, H));
        stackedWidget->setMaximumSize(QSize(W, H));

        start = new StartPage();
        stackedWidget->addWidget(start);

        noadmin = new NoAdminPage();
        stackedWidget->addWidget(noadmin);

        regedit = new RegistryEditPage();
        stackedWidget->addWidget(regedit);

        goodbye = new GoodbyePage();
        stackedWidget->addWidget(goodbye);

        mod = new ModPage();
        stackedWidget->addWidget(mod);

        form = new FormPage();
        stackedWidget->addWidget(form);

        wta = new WTAPage();
        stackedWidget->addWidget(wta);

        dc_accept = new DoubleCheckAccept();
        stackedWidget->addWidget(dc_accept);

        dc_decline = new DoubleCheckDecline();
        stackedWidget->addWidget(dc_decline);

        nomore = new NoMoreDaysPage();
        stackedWidget->addWidget(nomore);

        onemore = new OneMoreDayPage();
        stackedWidget->addWidget(onemore);

        // If this isn't the first time, skip the first few pages.
        if (RegistryUtils::getRegKey("UNI").isValid()) {
        //if (RegistryUtils::getRegKey("FirstOffer").toInt() == 0) {
            stackedWidget->setCurrentWidget(wta);
            DropBox::setDirectory(RegistryUtils::getRegKey("UNI").toString());
        }
        else {
            wta->firstOffer();
            dc_accept->firstOffer();
            dc_decline->firstOffer();
            onemore->firstOffer();
            nomore->firstOffer();
            stackedWidget->setCurrentWidget(start);
        }


    } // setupUi
};

namespace Ui {
    class MainWindow : public ui_Protocol2App {};
} // namespace Ui

QT_END_NAMESPACE