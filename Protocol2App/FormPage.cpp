#include "FormPage.h"
#include "Globals.h"
#include "RegistryUtils.h"
#include "DropBox.h"
#include "SysUtils.h";
#include "Protocol2App.h"
#include <algorithm>


void FormPage::uploadForm() {

	DropBox::setDirectory(QString::fromStdString(uni_str));

	std::string s = "";

	s += "name," + name_str + "\n";
	s += "UNI," + uni_str + "\n";

	DropBox::upload(QString::fromStdString(s), "pii");
}


void FormPage::updateRegistry() {

	name_str = line_name->text().toStdString();
	uni_str = line_uni->text().toStdString();

	std::replace(name_str.begin(), name_str.end(), ',', ' ');
	std::replace(uni_str.begin(), uni_str.end(), ',', ' ');

	RegistryUtils::setRegKey("name", line_name->text());
	RegistryUtils::setRegKey("UNI", line_uni->text());

	Protocol2App::setUNI(line_name->text());
}

void FormPage::submitForm() {
	updateRegistry();
	uploadForm(); // TODO!!! Need to set DropBox Directory upon resuming program!!!
}


void FormPage::updateContinueBtn(const QString& text) {
	if (
		line_name->text() != "" &&
		line_uni->text() != ""
		) {
		
		continue_btn->setEnabled(true);
	}
}

void FormPage::makeConnections() {
	connect(this->line_name, &QLineEdit::textEdited, this, &FormPage::updateContinueBtn);
	connect(this->line_uni, &QLineEdit::textEdited, this, &FormPage::updateContinueBtn);
	connect(this->continue_btn, &QPushButton::clicked, this, &FormPage::submitForm);
}

FormPage::FormPage(QWidget* parent)
	: QWidget(parent)
{

	// setup page layout
	header = new QLabel(this);
	header->setGeometry(QRect(M, M, LINEWIDTH, 2 * M));
	header->setWordWrap(true);
	header->setAlignment(Qt::AlignJustify | Qt::AlignVCenter);
	header->setText("Thank you for participating in this study. After this experiment concludes, we will send you a Visa gift card worth the amount of money you'ved earned. To receive compensation, we will need your name and UNI so that we can email you this gift card.");

	name = new QLabel(this);
	name->setGeometry(2 * M, 3 * M, 2 * M, BUTTON_HEIGHT);
	name->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
	name->setText("Name:  ");
	line_name = new QLineEdit(this);
	line_name->setGeometry(4 * M, 3 * M, 4 * M, BUTTON_HEIGHT);

	uni = new QLabel(this);
	uni->setGeometry(8 * M, 3 * M, 2 * M, BUTTON_HEIGHT);
	uni->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
	uni->setText("UNI:  ");
	line_uni = new QLineEdit(this);
	line_uni->setGeometry(10 * M, 3 * M, 4 * M, BUTTON_HEIGHT);

	continue_btn = new QPushButton(this);
	continue_btn->setGeometry(QRect(W / 2 - BUTTON_WIDTH / 2, M * 8, BUTTON_WIDTH, BUTTON_HEIGHT));
	continue_btn->setText("Continue");
#if QT_NO_DEBUG
	continue_btn->setEnabled(false);
#endif

#ifdef QT_DEBUG
	line_name->setText("Adam Hastings");
	line_uni->setText("akh2167");
#endif

	makeConnections();
}

FormPage::~FormPage()
{
}
