/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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

#include "GoodbyePage.h"

//#define DEBUG 1


QT_BEGIN_NAMESPACE

class Ui_MainWindow
{

private:
    QRect rec = QApplication::desktop()->screenGeometry();
    const int H = min(rec.height() / 2, rec.width() / 2);
    const int W = max(rec.height() / 2, rec.width() / 2);

    const int MARGIN = H/10;
    const int M = MARGIN;
    const int LINEWIDTH = W - (2*MARGIN);

    const int BUTTON_WIDTH = W/4;
    const int BUTTON_HEIGHT = H/16;

public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    
    QWidget *start_page;
    QLabel *intro_label;
    QPushButton *consent_btn;
    QLabel *outline_label;
    QLabel *consent_label;
    QPushButton *not_consent_btn;
    QWidget *consent_page;
    
    QWidget *goodbye_page;
    QLabel *goodbye_label;
    QPushButton *goodbye_btn;

    GoodbyePage *goodbye;

    QWidget* mod_page;
    QLabel* mod_label;
    QPushButton* mod_not_consent_btn;
    QPushButton* mod_consent_btn;


    QWidget *reg_page;
    QLabel *reg_label;
    QPushButton *reg_ok_btn;
    QPushButton* reg_notok_btn;
    QProgressBar* reg_pb;
    QLabel* reg_done_label;
    
    QWidget *task1_page;
    QLabel *task1_label;
    QLabel *task1_title;
    QCheckBox *task1a;
    QCheckBox *task1b;
    QCheckBox *task1c;
    QCheckBox *task1d;
    QCheckBox *task1e;
    QCheckBox *task1f;
    QCheckBox *task1g;
    QCheckBox* task1h;
    QCheckBox* task1i;
    QCheckBox* task1j;
    QPushButton *task1_continue_btn;

    QWidget *patch_page;
    QLabel *patch_label;
    QLabel *patch_done_label;
    QProgressBar *patch_progress_bar;
    QPushButton *patch_continue_btn;

    QWidget *patch2_page;
    QLabel* patch2_label;
    QLabel* patch2_done_label;
    QProgressBar* patch2_progress_bar;
    QPushButton* patch2_continue_btn;

    QWidget* patch3_page;
    QLabel* patch3_label;
    QLabel* patch3_done_label;
    QProgressBar* patch3_progress_bar;
    QPushButton* patch3_continue_btn;

    QWidget *task2_page;
    QLabel *task2_label;
    QLabel *task2_title;
    QCheckBox *task2a;
    QCheckBox *task2b;
    QCheckBox *task2c;
    QCheckBox *task2d;
    QCheckBox *task2e;
    QCheckBox *task2f;
    QCheckBox *task2g;
    QCheckBox* task2h;
    QCheckBox* task2i;
    QCheckBox* task2j;
    QPushButton *task2_continue_btn;

    QWidget *task3_page;
    QLabel *task3_label;
    QLabel *task3_title;
    QCheckBox *task3a;
    QCheckBox *task3b;
    QCheckBox *task3c;
    QCheckBox *task3d;
    QCheckBox *task3e;
    QCheckBox *task3f;
    QCheckBox *task3g;
    QCheckBox* task3h;
    QCheckBox* task3i;
    QCheckBox* task3j;
    QPushButton *task3_continue_btn;

    QWidget *q1_page;
    QLabel *q1_label;
    QButtonGroup *q1_button_group;
    QRadioButton *q1_t2faster_btn;
    QRadioButton *q1_t3faster_btn;
    QRadioButton *q1_same_btn;
    QPushButton *q1_continue_btn;

    QWidget *q2_page;
    QLabel *q2_label;
    QSpinBox *q2_input;
    QPushButton *q2_continue_btn;

    QWidget *pre_wta_page;
    QLabel *pre_wta_label;
    QPushButton *pre_wta_continue_btn;

    QWidget *wta_page;
    QLabel *wta_label;
    QLabel *wta_offer;
    QLabel *wta_disclaimer_label;
    QPushButton *wta_yes_btn;
    QPushButton *wta_no_btn;



    void config_goodbye_page() {

    }

    void configPages() {
        config_goodbye_page();

    }

    void setupUi(QMainWindow *MainWindow)
    {
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
        
        //// start page ///////////////////////////////////////////////////////
        
        start_page = new QWidget();
        start_page->setObjectName(QStringLiteral("start_page"));
        
        intro_label = new QLabel(start_page);
        intro_label->setObjectName(QStringLiteral("intro_label"));
        intro_label->setGeometry(QRect(MARGIN, MARGIN, LINEWIDTH, MARGIN*3));
        intro_label->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        intro_label->setWordWrap(true);
              
        outline_label = new QLabel(start_page);
        outline_label->setObjectName(QStringLiteral("outline_label"));
        outline_label->setGeometry(QRect(MARGIN, MARGIN*4, LINEWIDTH, MARGIN*3));
        outline_label->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        outline_label->setWordWrap(true);
        
        consent_label = new QLabel(start_page);
        consent_label->setObjectName(QStringLiteral("consent_label"));
        consent_label->setGeometry(QRect(MARGIN, MARGIN*7, LINEWIDTH, MARGIN));
        consent_label->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        consent_label->setWordWrap(true);
        
        consent_btn = new QPushButton(start_page);
        consent_btn->setObjectName(QStringLiteral("consent_btn"));
        consent_btn->setGeometry(QRect(W/2 - BUTTON_WIDTH - M, M*8, BUTTON_WIDTH, BUTTON_HEIGHT));

        not_consent_btn = new QPushButton(start_page);
        not_consent_btn->setObjectName(QStringLiteral("not_consent_btn"));
        not_consent_btn->setGeometry(QRect(W/2 + M, M*8, BUTTON_WIDTH, BUTTON_HEIGHT));

        stackedWidget->addWidget(start_page);

        //// goodbye page /////////////////////////////////////////////////////

        /*goodbye_page = new GoodbyePage();*/
        //auto c = new GoodbyePage();

        //QWidget *gb = new GoodbyePage();

        //GoodbyePage gb = new GoodbyePage();

        goodbye_page = new QWidget();
        goodbye_page->setObjectName(QStringLiteral("goodbye_page"));
        stackedWidget->addWidget(goodbye_page);

        goodbye_label = new QLabel(goodbye_page);
        goodbye_label->setObjectName(QStringLiteral("goodbye_label"));
        goodbye_label->setGeometry(QRect(M, M, LINEWIDTH, M*4));
        goodbye_label->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        goodbye_label->setWordWrap(true);
        goodbye_label->setText("Thank you for your participation. You may now exit this window.");

        //goodbye = new GoodbyePage();
        //stackedWidget->addWidget(goodbye);

        


        //// modification consent page

        mod_page = new QWidget();
        stackedWidget->addWidget(mod_page);

        mod_label = new QLabel(mod_page);
        mod_label->setGeometry(QRect(M, M, LINEWIDTH, M * 4));
        mod_label->setAlignment(Qt::AlignJustify | Qt::AlignTop);
        mod_label->setWordWrap(true);
        mod_label->setText("As part of this experiment, we will make temporary modifications to you computer. It is important that your computer does not power down during this experiment. If your computer powers down, you will need to re-do this experiment to restore your computer to its original state.");

        mod_consent_btn = new QPushButton(mod_page);
        mod_consent_btn->setGeometry(QRect(M, M * 5, W / 2 - 2 * M, 2 * BUTTON_HEIGHT));
        mod_consent_btn->setText("I understand");
        
        mod_not_consent_btn = new QPushButton(mod_page);
        mod_not_consent_btn->setGeometry(QRect(M + W / 2, M * 5, W / 2 - 2 * M, 2 * BUTTON_HEIGHT));
        mod_not_consent_btn->setText("Do not make changes\n to my computer");

        //// registry edit page ///////////////////////////////////////////////

        reg_page = new QWidget();
        stackedWidget->addWidget(reg_page);

        reg_label = new QLabel(reg_page);
        reg_label->setGeometry(QRect(M, M, LINEWIDTH, M * 3));
        reg_label->setAlignment(Qt::AlignJustify | Qt::AlignVCenter);
        reg_label->setWordWrap(true);
        reg_label->setText("As part of this experiment, we will make some temporary modifications to your computer. However, your computer's current configuration does not allow us to make these modifications. Please note that all modifications made to your computer are temporary and will be reversed at the end of this experiment. Do you allow us to make temporary, reversible changes to your computer?");

        reg_ok_btn = new QPushButton(reg_page);
        reg_ok_btn->setGeometry(QRect(M, M * 5, W / 2 - 2 * M, 2*BUTTON_HEIGHT));
        reg_ok_btn->setText("Make the changes now");

        reg_notok_btn = new QPushButton(reg_page);
        reg_notok_btn->setGeometry(QRect(M + W / 2, M * 5, W / 2 - 2 * M, 2* BUTTON_HEIGHT));
        reg_notok_btn->setText("Do not make changes\n to my computer");

        reg_done_label = new QLabel(reg_page);
        reg_done_label->setWordWrap(true);
        reg_done_label->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        reg_done_label->setGeometry(QRect(M, M * 7, LINEWIDTH, M));

        //QWidget* reg_page;
        //QLabel* reg_label;
        //QPushButton* reg_ok_btn;
        //QProgressBar* reg_pb;
        //QLabel* reg_done_label;

        //// task1 page ///////////////////////////////////////////////////////
        
        task1_page = new QWidget();
        task1_page->setObjectName(QStringLiteral("task1_page"));
        stackedWidget->addWidget(task1_page);

        QFont titlefont = QFont();
        titlefont.setBold(true);
        titlefont.setPointSize(16);

        task1_title = new QLabel(task1_page);
        task1_title->setGeometry(QRect(M, M/2, LINEWIDTH, M));
        task1_title->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        task1_title->setText("Task 1");
        task1_title->setFont(titlefont);

        task1_label = new QLabel(task1_page);
        task1_label->setObjectName(QStringLiteral("task1_label"));
        task1_label->setGeometry(QRect(M, M, LINEWIDTH, M));
        task1_label->setAlignment(Qt::AlignHCenter|Qt::AlignBottom);
        task1_label->setWordWrap(true);
        task1_label->setText("You will now do some simple tasks. Check off each box below as you complete the following tasks: ");

        task1a = new QCheckBox(task1_page);
        task1a->setGeometry(QRect(M, BUTTON_HEIGHT*4, LINEWIDTH, BUTTON_HEIGHT));
        task1a->setText("Open up a web browser. Login to your LionMail account. Create a new Google Doc titled \"Task 1\".");

        task1b = new QCheckBox(task1_page);
        task1b->setGeometry(QRect(M, BUTTON_HEIGHT*5, LINEWIDTH, BUTTON_HEIGHT));
        task1b->setText("Open Google Maps in a new tab. Find the distance (in miles) between New York City and Los Angeles.");
        task1b->setEnabled(false);

        task1c = new QCheckBox(task1_page);
        task1c->setGeometry(QRect(M, BUTTON_HEIGHT*6, LINEWIDTH, BUTTON_HEIGHT));
        task1c->setText("Write down this distance in the Google Doc.");
        task1c->setEnabled(false);

        task1d = new QCheckBox(task1_page);
        task1d->setGeometry(QRect(M, BUTTON_HEIGHT*7, LINEWIDTH, BUTTON_HEIGHT));
        task1d->setText("Open any search engine in another tab and find any picture of Low Library.");
        task1d->setEnabled(false);

        task1e = new QCheckBox(task1_page);
        task1e->setGeometry(QRect(M, BUTTON_HEIGHT*8, LINEWIDTH, BUTTON_HEIGHT));
        task1e->setText("Copy and paste this picture into the Google Doc.");
        task1e->setEnabled(false);

        task1f = new QCheckBox(task1_page);
        task1f->setGeometry(QRect(M, BUTTON_HEIGHT * 9, LINEWIDTH, BUTTON_HEIGHT));
        task1f->setText("Open YouTube in another tab. Find a video of jazz trumpeter Miles Davis performing the song \"So What\" live.");
        task1f->setEnabled(false);

        task1g = new QCheckBox(task1_page);
        task1g->setGeometry(QRect(M, BUTTON_HEIGHT * 10, LINEWIDTH, BUTTON_HEIGHT));
        task1g->setText("Copy and paste this video's URL into the Google Doc.");
        task1g->setEnabled(false);

        task1h = new QCheckBox(task1_page);
        task1h->setGeometry(QRect(M, BUTTON_HEIGHT*11, LINEWIDTH, BUTTON_HEIGHT));
        task1h->setText("Download the Google Doc as a PDF (click on File > Download > PDF Document ).");
        task1h->setEnabled(false);

        task1i = new QCheckBox(task1_page);
        task1i->setGeometry(QRect(M, BUTTON_HEIGHT*12, LINEWIDTH, BUTTON_HEIGHT));
        task1i->setText("Open LionMail in a new tab. Compose a new email titled \"<your uni>-task1\" (where <your uni> is your UNI).\n Attach the downloaded PDF to the email and send to tasks-test-2020@cs.columbia.edu.");
        task1i->setEnabled(false);

        task1j = new QCheckBox(task1_page);
        task1j->setGeometry(QRect(M, BUTTON_HEIGHT * 13, LINEWIDTH, BUTTON_HEIGHT));
        task1j->setText("Close all tabs and delete the previously downloaded PDF from your computer.");
        task1j->setEnabled(false);

        task1_continue_btn = new QPushButton(task1_page);
        task1_continue_btn->setObjectName(QStringLiteral("task1_continue_btn"));
        task1_continue_btn->setGeometry(QRect(W/2 - BUTTON_WIDTH/2, M*9, BUTTON_WIDTH, BUTTON_HEIGHT));
        task1_continue_btn->setText("Continue");
        task1b->setEnabled(false);

        
        #if QT_NO_DEBUG
        task1_continue_btn->setEnabled(false);
        #endif


        //// patch page ///////////////////////////////////////////////////////
        
        patch_page = new QWidget();
        patch_page->setObjectName(QStringLiteral("patch_page"));
        stackedWidget->addWidget(patch_page);

        patch_label = new QLabel(patch_page);
        patch_label->setObjectName(QStringLiteral("patch_label"));
        patch_label->setGeometry(QRect(M, M, LINEWIDTH, M*5));
        patch_label->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        patch_label->setWordWrap(true);
        patch_label->setText("We will now make some modifications to your computer. These modifications are only temporary and will end once this experiment concludes.");

        patch_progress_bar = new QProgressBar(patch_page);
        patch_progress_bar->setGeometry(QRect(W/2 - 4*M, M*5, 8*M, M));
        patch_progress_bar->setMinimum(0);
        patch_progress_bar->setMaximum(100);
        patch_progress_bar->setValue(0);

        patch_done_label = new QLabel(patch_page);
        patch_done_label->setGeometry(QRect((W-BUTTON_WIDTH)/2, M*6, BUTTON_WIDTH, BUTTON_HEIGHT));
        patch_done_label->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);

        patch_continue_btn = new QPushButton(patch_page);
        patch_continue_btn->setObjectName(QStringLiteral("patch_continue_btn"));
        patch_continue_btn->setGeometry(QRect(W/2 - BUTTON_WIDTH/2, M*8, BUTTON_WIDTH, BUTTON_HEIGHT));
        patch_continue_btn->setText("Continue");

        #if QT_NO_DEBUG
        patch_continue_btn->setEnabled(false);
        #endif


        //// patch2 page //////////////////////////////////////////////////////

        patch2_page = new QWidget();
        stackedWidget->addWidget(patch2_page);

        patch2_label = new QLabel(patch2_page);
        patch2_label->setText("We will now undo the previous modifications to your computer and apply some new ones. These modifications are only temporary and will end once this experiment concludes.");
        patch2_label->setGeometry(QRect(M, M, LINEWIDTH, M * 5));
        patch2_label->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        patch2_label->setWordWrap(true);

        patch2_progress_bar = new QProgressBar(patch2_page);
        patch2_progress_bar->setGeometry(QRect(W / 2 - 4 * M, M * 5, 8 * M, M));
        patch2_progress_bar->setMinimum(0);
        patch2_progress_bar->setMaximum(100);
        patch2_progress_bar->setValue(0);
        
        patch2_done_label = new QLabel(patch2_page);
        patch2_done_label->setGeometry(QRect((W - BUTTON_WIDTH) / 2, M * 6, BUTTON_WIDTH, BUTTON_HEIGHT));
        patch2_done_label->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        
        patch2_continue_btn = new QPushButton(patch2_page);
        patch2_continue_btn->setObjectName(QStringLiteral("patch_continue_btn"));
        patch2_continue_btn->setGeometry(QRect(W / 2 - BUTTON_WIDTH / 2, M * 8, BUTTON_WIDTH, BUTTON_HEIGHT));
        patch2_continue_btn->setText("Continue");

        #if QT_NO_DEBUG
        patch2_continue_btn->setEnabled(false);
        #endif

        //// patch3 page //////////////////////////////////////////////////////

        patch3_page = new QWidget();
        stackedWidget->addWidget(patch3_page);

        patch3_label = new QLabel(patch3_page);
        patch3_label->setText("We will now undo all modifications made to your computer.");
        patch3_label->setGeometry(QRect(M, M, LINEWIDTH, M * 5));
        patch3_label->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        patch3_label->setWordWrap(true);
        
        patch3_progress_bar = new QProgressBar(patch3_page);
        patch3_progress_bar->setGeometry(QRect(W / 2 - 4 * M, M * 5, 8 * M, M));
        patch3_progress_bar->setMinimum(0);
        patch3_progress_bar->setMaximum(100);
        patch3_progress_bar->setValue(0);
        
        patch3_done_label = new QLabel(patch3_page);
        patch3_done_label->setGeometry(QRect(M, M * 6, LINEWIDTH, M * 2));
        patch3_done_label->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        patch3_done_label->setWordWrap(true);
        
        patch3_continue_btn = new QPushButton(patch3_page);
        patch3_continue_btn->setObjectName(QStringLiteral("patch_continue_btn"));
        patch3_continue_btn->setGeometry(QRect(W / 2 - BUTTON_WIDTH / 2, M * 8, BUTTON_WIDTH, BUTTON_HEIGHT));
        patch3_continue_btn->setText("Continue");

        #if QT_NO_DEBUG
        patch3_continue_btn->setEnabled(false);
        #endif

        //// task2 page ///////////////////////////////////////////////////////
        
        task2_page = new QWidget();
        task2_page->setObjectName(QStringLiteral("task2_page"));
        stackedWidget->addWidget(task2_page);

        task2_title = new QLabel(task2_page);
        task2_title->setGeometry(QRect(M, M/2, LINEWIDTH, M));
        task2_title->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        task2_title->setText("Task 2");
        task2_title->setFont(titlefont);

        task2_label = new QLabel(task2_page);
        task2_label->setObjectName(QStringLiteral("task2_label"));
        task2_label->setGeometry(QRect(M, M, LINEWIDTH, M));
        task2_label->setAlignment(Qt::AlignHCenter | Qt::AlignBottom);
        task2_label->setWordWrap(true);
        task2_label->setText("You will now do some more simple tasks, similar to what you did before.\nCheck off each box below as you complete the following tasks:");

        task2a = new QCheckBox(task2_page);
        task2a->setGeometry(QRect(M, BUTTON_HEIGHT * 4, LINEWIDTH, BUTTON_HEIGHT));
        task2a->setText("Open up a web browser. Login to your LionMail account. Create a new Google Doc titled \"Task 2\".");

        task2b = new QCheckBox(task2_page);
        task2b->setGeometry(QRect(M, BUTTON_HEIGHT * 5, LINEWIDTH, BUTTON_HEIGHT));
        task2b->setText("Open Google Maps in a new tab. Find the distance (in miles) between Casablanca, Morocco and Cairo, Egypt.");
        task2b->setEnabled(false);

        task2c = new QCheckBox(task2_page);
        task2c->setGeometry(QRect(M, BUTTON_HEIGHT * 6, LINEWIDTH, BUTTON_HEIGHT));
        task2c->setText("Write down this distance in the Google Doc.");
        task2c->setEnabled(false);

        task2d = new QCheckBox(task2_page);
        task2d->setGeometry(QRect(M, BUTTON_HEIGHT * 7, LINEWIDTH, BUTTON_HEIGHT));
        task2d->setText("Open any search engine in another tab and find any picture of Butler Library.");
        task2d->setEnabled(false);

        task2e = new QCheckBox(task2_page);
        task2e->setGeometry(QRect(M, BUTTON_HEIGHT * 8, LINEWIDTH, BUTTON_HEIGHT));
        task2e->setText("Copy and paste this picture into the Google Doc.");
        task2e->setEnabled(false);

        task2f = new QCheckBox(task2_page);
        task2f->setGeometry(QRect(M, BUTTON_HEIGHT * 9, LINEWIDTH, BUTTON_HEIGHT));
        task2f->setText("Open YouTube in another tab. Find a video of jazz pianist Dave Brubeck performing the song \"Take Five\" live.");
        task2f->setEnabled(false);

        task2g = new QCheckBox(task2_page);
        task2g->setGeometry(QRect(M, BUTTON_HEIGHT * 10, LINEWIDTH, BUTTON_HEIGHT));
        task2g->setText("Copy and paste this video's URL into the Google Doc.");
        task2g->setEnabled(false);

        task2h = new QCheckBox(task2_page);
        task2h->setGeometry(QRect(M, BUTTON_HEIGHT * 11, LINEWIDTH, BUTTON_HEIGHT));
        task2h->setText("Download the Google Doc as a PDF (click on File > Download > PDF Document ).");
        task2h->setEnabled(false);

        task2i = new QCheckBox(task2_page);
        task2i->setGeometry(QRect(M, BUTTON_HEIGHT * 12, LINEWIDTH, BUTTON_HEIGHT));
        task2i->setText("Open LionMail in a new tab. Compose a new email titled \"<your uni>-task2\" (where <your uni> is your UNI).\n Attach the downloaded PDF to the email and send to tasks-test-2020@cs.columbia.edu.");
        task2i->setEnabled(false);

        task2j = new QCheckBox(task2_page);
        task2j->setGeometry(QRect(M, BUTTON_HEIGHT * 13, LINEWIDTH, BUTTON_HEIGHT));
        task2j->setText("Close all tabs and delete the previously downloaded PDF from your computer.");
        task2j->setEnabled(false);

        task2_continue_btn = new QPushButton(task2_page);
        task2_continue_btn->setObjectName(QStringLiteral("task2_continue_btn"));
        task2_continue_btn->setGeometry(QRect(W / 2 - BUTTON_WIDTH / 2, M * 9, BUTTON_WIDTH, BUTTON_HEIGHT));
        task2_continue_btn->setText("Continue");
        task2b->setEnabled(false);

        /*task2a = new QCheckBox(task2_page);
        task2a->setGeometry(QRect(M, BUTTON_HEIGHT*5, LINEWIDTH, BUTTON_HEIGHT));
        task2a->setText("Open up a web browser");

        task2b = new QCheckBox(task2_page);
        task2b->setGeometry(QRect(M, BUTTON_HEIGHT*6, LINEWIDTH, BUTTON_HEIGHT));
        task2b->setText("Create a new Google Doc. Add the following information to the Google Doc:");

        task2c = new QCheckBox(task2_page);
        task2c->setGeometry(QRect(M*2, BUTTON_HEIGHT*7, LINEWIDTH, BUTTON_HEIGHT));
        task2c->setText("The distance (in miles) between Casablanca, Morocco and Cairo, Egypt");

        task2d = new QCheckBox(task2_page);
        task2d->setGeometry(QRect(M*2, BUTTON_HEIGHT*8, LINEWIDTH, BUTTON_HEIGHT));
        task2d->setText("A picture of Butler Library");

        task2e = new QCheckBox(task2_page);
        task2e->setGeometry(QRect(M*2, BUTTON_HEIGHT*9, LINEWIDTH, BUTTON_HEIGHT));
        task2e->setText("The URL of any TED talk");

        task2f = new QCheckBox(task2_page);
        task2f->setGeometry(QRect(M, BUTTON_HEIGHT*10, LINEWIDTH, BUTTON_HEIGHT));
        task2f->setText("Share the Google Doc with hastings@cs.columbia.edu");

        task2g = new QCheckBox(task2_page);
        task2g->setGeometry(QRect(M, BUTTON_HEIGHT*11, LINEWIDTH, BUTTON_HEIGHT));
        task2g->setText("Exit the web browser");

        task2_continue_btn = new QPushButton(task2_page);
        task2_continue_btn->setObjectName(QStringLiteral("task1_continue_btn"));
        task2_continue_btn->setGeometry(QRect(W/2 - BUTTON_WIDTH/2, M*8, BUTTON_WIDTH, BUTTON_HEIGHT));
        task2_continue_btn->setText("Continue");*/

        #if QT_NO_DEBUG
        task2_continue_btn->setDisabled(true);
        #endif

        //// task3 page ///////////////////////////////////////////////////////
        
        task3_page = new QWidget();
        task3_page->setObjectName(QStringLiteral("task3_page"));
        stackedWidget->addWidget(task3_page);

        task3_title = new QLabel(task3_page);
        task3_title->setGeometry(QRect(M, M/2, LINEWIDTH, M));
        task3_title->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        task3_title->setText("Task 3");
        task3_title->setFont(titlefont);

        task3_label = new QLabel(task3_page);
        task3_label->setObjectName(QStringLiteral("task3_label"));
        task3_label->setGeometry(QRect(M, M, LINEWIDTH, M));
        task3_label->setAlignment(Qt::AlignHCenter | Qt::AlignBottom);
        task3_label->setWordWrap(true);
        task3_label->setText("You will now do some more simple tasks, similar to what you did before.\nCheck off each box below as you complete the following tasks:");

        task3a = new QCheckBox(task3_page);
        task3a->setGeometry(QRect(M, BUTTON_HEIGHT * 4, LINEWIDTH, BUTTON_HEIGHT));
        task3a->setText("Open up a web browser. Login to your LionMail account. Create a new Google Doc titled \"Task 3\".");

        task3b = new QCheckBox(task3_page);
        task3b->setGeometry(QRect(M, BUTTON_HEIGHT * 5, LINEWIDTH, BUTTON_HEIGHT));
        task3b->setText("Open Google Maps in a new tab. Find the distance (in miles) between Lima, Peru and Rio de Janeiro, Brazil.");
        task3b->setEnabled(false);

        task3c = new QCheckBox(task3_page);
        task3c->setGeometry(QRect(M, BUTTON_HEIGHT * 6, LINEWIDTH, BUTTON_HEIGHT));
        task3c->setText("Write down this distance in the Google Doc.");
        task3c->setEnabled(false);

        task3d = new QCheckBox(task3_page);
        task3d->setGeometry(QRect(M, BUTTON_HEIGHT * 7, LINEWIDTH, BUTTON_HEIGHT));
        task3d->setText("Open any search engine in another tab and find any picture of Roaree the Lion (Columbia's mascot).");
        task3d->setEnabled(false);

        task3e = new QCheckBox(task3_page);
        task3e->setGeometry(QRect(M, BUTTON_HEIGHT * 8, LINEWIDTH, BUTTON_HEIGHT));
        task3e->setText("Copy and paste this picture into the Google Doc.");
        task3e->setEnabled(false);

        task3f = new QCheckBox(task3_page);
        task3f->setGeometry(QRect(M, BUTTON_HEIGHT * 9, LINEWIDTH + M, BUTTON_HEIGHT));
        task3f->setText("Open YouTube in another tab. Find a video of jazz guitarist Wes Montgomery performing the song \"Round Midnight\" live.");
        task3f->setEnabled(false);

        task3g = new QCheckBox(task3_page);
        task3g->setGeometry(QRect(M, BUTTON_HEIGHT * 10, LINEWIDTH, BUTTON_HEIGHT));
        task3g->setText("Copy and paste this video's URL into the Google Doc.");
        task3g->setEnabled(false);

        task3h = new QCheckBox(task3_page);
        task3h->setGeometry(QRect(M, BUTTON_HEIGHT * 11, LINEWIDTH, BUTTON_HEIGHT));
        task3h->setText("Download the Google Doc as a PDF (click on File > Download > PDF Document ).");
        task3h->setEnabled(false);

        task3i = new QCheckBox(task3_page);
        task3i->setGeometry(QRect(M, BUTTON_HEIGHT * 12, LINEWIDTH, BUTTON_HEIGHT));
        task3i->setText("Open LionMail in a new tab. Compose a new email titled \"<your uni>-task3\" (where <your uni> is your UNI).\n Attach the downloaded PDF to the email and send to tasks-test-2020@cs.columbia.edu.");
        task3i->setEnabled(false);

        task3j = new QCheckBox(task3_page);
        task3j->setGeometry(QRect(M, BUTTON_HEIGHT * 13, LINEWIDTH, BUTTON_HEIGHT));
        task3j->setText("Close all tabs and delete the previously downloaded PDF from your computer.");
        task3j->setEnabled(false);

        task3_continue_btn = new QPushButton(task3_page);
        task3_continue_btn->setObjectName(QStringLiteral("task3_continue_btn"));
        task3_continue_btn->setGeometry(QRect(W / 2 - BUTTON_WIDTH / 2, M * 9, BUTTON_WIDTH, BUTTON_HEIGHT));
        task3_continue_btn->setText("Continue");
        task3b->setEnabled(false);

        /*task3_label = new QLabel(task3_page);
        task3_label->setObjectName(QStringLiteral("task3_label"));
        task3_label->setGeometry(QRect(M, M*2, LINEWIDTH, M));
        task3_label->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        task3_label->setWordWrap(true);
        task3_label->setText("You will now do some more simple tasks, similar to what you did before. Check off each box below as you complete the following tasks: ");

        task3a = new QCheckBox(task3_page);
        task3a->setGeometry(QRect(M, BUTTON_HEIGHT*5, LINEWIDTH, BUTTON_HEIGHT));
        task3a->setText("Open up a web browser");

        task3b = new QCheckBox(task3_page);
        task3b->setGeometry(QRect(M, BUTTON_HEIGHT*6, LINEWIDTH, BUTTON_HEIGHT));
        task3b->setText("Create a new Google Doc. Add the following information to the Google Doc:");

        task3c = new QCheckBox(task3_page);
        task3c->setGeometry(QRect(M*2, BUTTON_HEIGHT*7, LINEWIDTH, BUTTON_HEIGHT));
        task3c->setText("The distance (in miles) between Lima, Peru and Rio de Janeiro, Brazil");

        task3d = new QCheckBox(task3_page);
        task3d->setGeometry(QRect(M*2, BUTTON_HEIGHT*8, LINEWIDTH, BUTTON_HEIGHT));
        task3d->setText("A picture of Roaree the Lion (Columbia's mascot)");

        task3e = new QCheckBox(task3_page);
        task3e->setGeometry(QRect(M*2, BUTTON_HEIGHT*9, LINEWIDTH, BUTTON_HEIGHT));
        task3e->setText("The URL to any news clip");

        task3f = new QCheckBox(task3_page);
        task3f->setGeometry(QRect(M, BUTTON_HEIGHT*10, LINEWIDTH, BUTTON_HEIGHT));
        task3f->setText("Share the Google Doc with hastings@cs.columbia.edu");

        task3g = new QCheckBox(task3_page);
        task3g->setGeometry(QRect(M, BUTTON_HEIGHT*11, LINEWIDTH, BUTTON_HEIGHT));
        task3g->setText("Exit the web browser");

        task3_continue_btn = new QPushButton(task3_page);
        task3_continue_btn->setObjectName(QStringLiteral("task3_continue_btn"));
        task3_continue_btn->setGeometry(QRect(W/2 - BUTTON_WIDTH/2, M*8, BUTTON_WIDTH, BUTTON_HEIGHT));
        task3_continue_btn->setText("Continue");*/

        #if QT_NO_DEBUG
        task3_continue_btn->setEnabled(false);
        #endif

        //// q1 page //////////////////////////////////////////////////////////

        q1_page = new QWidget();
        q1_page->setObjectName(QStringLiteral("q1_page"));
        stackedWidget->addWidget(q1_page);

        q1_label = new QLabel(q1_page);
        q1_label->setObjectName(QStringLiteral("q1_label"));
        q1_label->setGeometry(QRect(M, M, LINEWIDTH, M*2));
        q1_label->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        q1_label->setWordWrap(true);
        q1_label->setText("Which of the following best matches your experiences in Tasks 2 and 3? Note that \"performance\" can include things like how long it took for applications to open, how long it took for webpages to load and render, how responsive the keyboard and mouse were to input events, how much screen lag you experienced, etc.");

        q1_button_group = new QButtonGroup(q1_page);
        q1_t2faster_btn = new QRadioButton(q1_page);
        q1_t2faster_btn->setGeometry(QRect(2*M, M*4, LINEWIDTH, BUTTON_HEIGHT));
        q1_t2faster_btn->setText("My computer seemed to have better performance during Task 2");
        q1_button_group->addButton(q1_t2faster_btn);

        q1_t3faster_btn = new QRadioButton(q1_page);
        q1_t3faster_btn->setGeometry(QRect(2*M, M*4+BUTTON_HEIGHT, LINEWIDTH, BUTTON_HEIGHT));
        q1_t3faster_btn->setText("My computer seemed to have better performance during Task 3");
        q1_button_group->addButton(q1_t3faster_btn);

        q1_same_btn = new QRadioButton(q1_page);
        q1_same_btn->setGeometry(QRect(2*M, M*4+2*BUTTON_HEIGHT, LINEWIDTH, BUTTON_HEIGHT));
        q1_same_btn->setText("The performance felt about the same during Tasks 2 and 3");
        q1_button_group->addButton(q1_same_btn);

        q1_continue_btn = new QPushButton(q1_page);
        q1_continue_btn->setEnabled(false);
        q1_continue_btn->setGeometry(QRect(W/2 - BUTTON_WIDTH/2, M*8, BUTTON_WIDTH, BUTTON_HEIGHT));
        q1_continue_btn->setText("Continue");

        //// q2 page //////////////////////////////////////////////////////////

        q2_page = new QWidget();
        q2_page->setObjectName(QStringLiteral("q2_page"));
        stackedWidget->addWidget(q2_page);
        
        q2_label = new QLabel(q2_page);
        q2_label->setObjectName(QStringLiteral("q1_label"));
        q2_label->setGeometry(QRect(M, M, LINEWIDTH, M*2));
        q2_label->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        q2_label->setWordWrap(true);

        q2_input = new QSpinBox(q2_page);
        q2_input->setMinimum(0);
        q2_input->setMaximum(9999);
        q2_input->setSuffix(" %");
        q2_input->setGeometry(QRect((W-BUTTON_WIDTH)/2, M*5, BUTTON_WIDTH, BUTTON_HEIGHT));
        
        q2_continue_btn = new QPushButton(q2_page);
        q2_continue_btn->setGeometry(QRect(W/2 - BUTTON_WIDTH/2, M*8, BUTTON_WIDTH, BUTTON_HEIGHT));
        q2_continue_btn->setText("Continue");

        #if QT_NO_DEBUG
        q2_continue_btn->setEnabled(false);
        #endif

        //// pre wta page /////////////////////////////////////////////////////

        pre_wta_page = new QWidget();
        stackedWidget->addWidget(pre_wta_page);

        pre_wta_label = new QLabel(pre_wta_page);
        pre_wta_label->setGeometry(QRect(M, M, LINEWIDTH, M*6));
        pre_wta_label->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        pre_wta_label->setWordWrap(true);

        pre_wta_continue_btn = new QPushButton(pre_wta_page);
        pre_wta_continue_btn->setGeometry(QRect(W/2 - BUTTON_WIDTH/2, M*8, BUTTON_WIDTH, BUTTON_HEIGHT));
        pre_wta_continue_btn->setText("Continue");

        //// wta page /////////////////////////////////////////////////////////

        wta_page = new QWidget();
        stackedWidget->addWidget(wta_page);

        wta_label = new QLabel(wta_page);
        wta_label->setObjectName(QStringLiteral("q1_label"));
        wta_label->setGeometry(QRect(M, M, LINEWIDTH, M*3));
        wta_label->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        wta_label->setWordWrap(true);
        

        wta_offer = new QLabel(wta_page);
        wta_offer->setGeometry(QRect(0, M*3, W, M*2));
        wta_offer->setAlignment(Qt::AlignCenter|Qt::AlignVCenter);
        QFont font = QFont();
        font.setBold(true);
        font.setPointSize(30);
        wta_offer->setFont(font);

        wta_disclaimer_label = new QLabel(wta_page);
        wta_disclaimer_label->setGeometry(QRect(M, M*5, W-(2*M), M*3));
        wta_disclaimer_label->setAlignment(Qt::AlignCenter|Qt::AlignVCenter);
        wta_disclaimer_label->setWordWrap(true);
        wta_disclaimer_label->setText("(This is for your current computer only and does not apply to any future computers you may buy.)");
        // wta_disclamer_label->setText("Note: ");
        // Would you be willing to slow down your computer for
        // Avoid "permanent"


        wta_yes_btn = new QPushButton(wta_page);
        wta_yes_btn->setGeometry(QRect(W/2 - BUTTON_WIDTH - M, M*8, BUTTON_WIDTH, BUTTON_HEIGHT));
        wta_yes_btn->setText("Yes");
        
        wta_no_btn = new QPushButton(wta_page);
        wta_no_btn->setGeometry(QRect(W/2 + M, M*8, BUTTON_WIDTH, BUTTON_HEIGHT));
        wta_no_btn->setText("No");

        ///////////////////////////////////////////////////////////////////////

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        intro_label->setText(QApplication::translate("MainWindow", "Thank you for participating in this experiment. This experiment will have you complete a few simple tasks on this computer. This experiment does not track your actions or steal any personal information. There is minimal risk involved in participating in this experiment. This experiment will take about 20 minutes to complete.", Q_NULLPTR));
        consent_btn->setText(QApplication::translate("MainWindow", "I consent", Q_NULLPTR));
        outline_label->setText(QApplication::translate("MainWindow", "This experiment is designed to test how computer users respond to some computer system modifications we are prototyping. We will first have you complete some simple tasks with these modifications turned off. Later, we will turn on these modifications and ask you to complete the same set of tasks.", Q_NULLPTR));
        consent_label->setText(QApplication::translate("MainWindow", "Do you consent to participate in this study? You may exit the experiment at any point.", Q_NULLPTR));
        not_consent_btn->setText(QApplication::translate("MainWindow", "I do not consent", Q_NULLPTR));
        
        
        
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
