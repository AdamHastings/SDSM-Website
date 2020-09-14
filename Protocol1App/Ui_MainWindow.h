#pragma once
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QSpinBox>
#include <QFont>
#include <QScreen>
#include <QApplication>
#include <QDesktopWidget>

#include <algorithm>

#include "Globals.h"
#include "StartPage.h"
#include "GoodbyePage.h"
#include "TaskPage.h"


QT_BEGIN_NAMESPACE


class Ui_MainWindow
{

public:
    QWidget* centralwidget;
    QStackedWidget* stackedWidget;

    QWidget* start_page;
    QLabel* intro_label;
    QPushButton* consent_btn;
    QLabel* outline_label;
    QLabel* consent_label;
    QPushButton* not_consent_btn;

    GoodbyePage* goodbye;
    StartPage* start;
    TaskPage* task1;
    TaskPage* task2;
    TaskPage* task3;

    void setupUi(QMainWindow* MainWindow)
    {
        rec = QApplication::desktop()->screenGeometry();
        H = std::min(rec.height() / 2, rec.width() / 2);
        W = std::max(rec.height() / 2, rec.width() / 2);

        MARGIN = H / 10;
        M = MARGIN;
        LINEWIDTH = W - (2 * MARGIN);

        BUTTON_WIDTH = W / 4;
        BUTTON_HEIGHT = H / 16;

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

        ///////////////////////////////////////////////////////////////////////

        start = new StartPage();
        stackedWidget->addWidget(start);

        goodbye = new GoodbyePage();
        stackedWidget->addWidget(goodbye);

        task1 = new TaskPage("from Los Angeles, USA to New York City, USA", "Low Library", "\"Bolero\" by composer Maurice Ravel");
        /*task1->setTaskNum(1);
        task1->setCities("Los Angeles", "New York City");
        task1->setPhoto("Low Library");
        task1->setVideo("\"Bolero\" by Maurice Ravel");*/
        stackedWidget->addWidget(task1);

        task2 = new TaskPage("from Casablanca, Morocco to Cairo, Egypt", "the Alma Mater statue", "\"Rhapsody in Blue\" by composer George Gershwin");
        /*task2->setTaskNum(2);
        task2->setCities("Los Angeles", "New York City");
        task2->setPhoto("Low Library");
        task2->setVideo("\"Bolero\" by Maurice Ravel");
        stackedWidget->addWidget(task2);*/

        task3 = new TaskPage("from Sydney, Australia to Perth, Australia", "Low Library", "\"Fantasia on a Theme by Thomas Tallis\" by composer Ralph Vaughan Williams");
        /*task3->setTaskNum(1);
        task3->setCities("Los Angeles", "New York City");
        task3->setPhoto("Low Library");
        task3->setVideo("\"Bolero\" by Maurice Ravel");
        stackedWidget->addWidget(task3);*/



    } // setupUi
};

namespace Ui {
    class MainWindow : public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE