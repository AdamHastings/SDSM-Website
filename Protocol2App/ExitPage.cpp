#include "ExitPage.h"
#include "Globals.h"

ExitPage::ExitPage(QWidget *parent)
	: QWidget(parent)
{
	label = new QLabel();
	label->setGeometry(QRect(M, M, LINEWIDTH, M * 8));
	label->setAlignment(Qt::AlignJustify | Qt::AlignVCenter);
	label->setWordWrap(true);
}

ExitPage::~ExitPage()
{
}
