#include "UsagePage.h"
#include "Globals.h"
#include <QLabel>


void UsagePage::checkIfContinue() {
	if (
		gaming->isChecked() ||
		word_processing->isChecked() ||
		spreadsheets->isChecked() ||
		programming->isChecked() ||
		streaming->isChecked() ||
		video_editing->isChecked() ||
		animation->isChecked() ||
		design_tools->isChecked() ||
		web_searches->isChecked() ||
		email->isChecked() ||
		e_reading->isChecked() ||
		social_media->isChecked() ||
		video_calls->isChecked() ||
		crypto_mining->isChecked() ||
		photo_storage->isChecked() ||
		shopping->isChecked() ||
		other->isChecked()
		) {
		continue_btn->setEnabled(true);
	}
	else {
		continue_btn->setEnabled(false);
	}
}

void UsagePage::handleOther() {
	if (other->isChecked()) {
		input->setEnabled(true);
	}
	else {
		input->setText("");
		input->setEnabled(false);
	}
}

UsagePage::UsagePage(QWidget *parent)
	: QWidget(parent)
{
	label = new QLabel(this);
	label->setGeometry(M, M, LINEWIDTH, M);
	label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
	label->setText("How do you typically use the computer you are using right now? Select all that apply.");

	int BOX_HEIGHT = BUTTON_HEIGHT * 1.2;

	gaming = new QCheckBox(this);
	gaming->setText("Gaming");
	gaming->setGeometry(M, 2 * M, 7 * M, BOX_HEIGHT);

	word_processing = new QCheckBox(this);
	word_processing->setText("Word Processing");
	word_processing->setGeometry(M, 2 * M + BOX_HEIGHT, 7 * M, BOX_HEIGHT);

	programming = new QCheckBox(this);
	programming->setText("Programming or coding");
	programming->setGeometry(M, 2 * M + 2 * BOX_HEIGHT, 7 * M, BOX_HEIGHT);

	spreadsheets = new QCheckBox(this);
	spreadsheets->setText("Spreadsheets");
	spreadsheets->setGeometry(M, 2 * M + 3 * BOX_HEIGHT, 7 * M, BOX_HEIGHT);

	streaming = new QCheckBox(this);
	streaming->setText("Streaming (video or audio)");
	streaming->setGeometry(M, 2 * M + 4 * BOX_HEIGHT, 7 * M, BOX_HEIGHT);

	video_editing = new QCheckBox(this);
	video_editing->setText("Video or photo editing");
	video_editing->setGeometry(M, 2 * M + 5 * BOX_HEIGHT, 7 * M, BOX_HEIGHT);

	animation = new QCheckBox(this);
	animation->setText("Computer animation or 3D modeling");
	animation->setGeometry(M, 2 * M + 6 * BOX_HEIGHT, 7 * M, BOX_HEIGHT);

	design_tools = new QCheckBox(this);
	design_tools->setText("Graphic design");
	design_tools->setGeometry(M, 2 * M + 7 * BOX_HEIGHT, 7 * M, BOX_HEIGHT);

	web_searches = new QCheckBox(this);
	web_searches->setText("Web searches");
	web_searches->setGeometry(W/2, 2 * M + 0 * BOX_HEIGHT, 7 * M, BOX_HEIGHT);

	email = new QCheckBox(this);
	email->setText("Email");
	email->setGeometry(W/2, 2 * M + 1 * BOX_HEIGHT, 7 * M, BOX_HEIGHT);

	e_reading = new QCheckBox(this);
	e_reading->setText("Reading");
	e_reading->setGeometry(W/2, 2 * M + 2 * BOX_HEIGHT, 7 * M, BOX_HEIGHT);

	social_media = new QCheckBox(this);
	social_media->setText("Social media");
	social_media->setGeometry(W/2, 2 * M + 3 * BOX_HEIGHT, 7 * M, BOX_HEIGHT);

	video_calls = new QCheckBox(this);
	video_calls->setText("Video calls");
	video_calls->setGeometry(W/2, 2 * M + 4 * BOX_HEIGHT, 7 * M, BOX_HEIGHT);

	crypto_mining = new QCheckBox(this);
	crypto_mining->setText("Cryptocurrency mining");
	crypto_mining->setGeometry(W/2, 2 * M + 5 * BOX_HEIGHT, 7 * M, BOX_HEIGHT);

	photo_storage = new QCheckBox(this);
	photo_storage->setText("Data storage (e.g. for photos or documents)");
	photo_storage->setGeometry(W/2, 2 * M + 6 * BOX_HEIGHT, 7 * M, BOX_HEIGHT);

	shopping = new QCheckBox(this);
	shopping->setText("Shopping");
	shopping->setGeometry(W/2, 2 * M + 7 * BOX_HEIGHT, 7 * M, BOX_HEIGHT);

	other = new QCheckBox(this);
	other->setText("Other (please specify):");
	other->setGeometry(M*4, 2 * M + 8 * BOX_HEIGHT, 4 * M, BOX_HEIGHT);

	input = new QLineEdit(this);
	input->setGeometry(M * 8, 2 * M + 8 * BOX_HEIGHT + (BOX_HEIGHT - BUTTON_HEIGHT)/2, 7 * M, BUTTON_HEIGHT);
	input->setEnabled(false);

	continue_btn = new QPushButton(this);
	continue_btn->setText("Continue");
	continue_btn->setEnabled(false);
	continue_btn->setGeometry(W / 2 - BUTTON_WIDTH / 2, M * 9, BUTTON_WIDTH, BUTTON_HEIGHT);


	connect(gaming, &QPushButton::clicked, this, &UsagePage::checkIfContinue);
	connect(word_processing, &QPushButton::clicked, this, &UsagePage::checkIfContinue);
	connect(spreadsheets, &QPushButton::clicked, this, &UsagePage::checkIfContinue);
	connect(programming, &QPushButton::clicked, this, &UsagePage::checkIfContinue);
	connect(streaming, &QPushButton::clicked, this, &UsagePage::checkIfContinue);
	connect(video_editing, &QPushButton::clicked, this, &UsagePage::checkIfContinue);
	connect(animation, &QPushButton::clicked, this, &UsagePage::checkIfContinue);
	connect(design_tools, &QPushButton::clicked, this, &UsagePage::checkIfContinue);
	connect(web_searches, &QPushButton::clicked, this, &UsagePage::checkIfContinue);
	connect(email, &QPushButton::clicked, this, &UsagePage::checkIfContinue);
	connect(e_reading, &QPushButton::clicked, this, &UsagePage::checkIfContinue);
	connect(social_media, &QPushButton::clicked, this, &UsagePage::checkIfContinue);
	connect(video_calls, &QPushButton::clicked, this, &UsagePage::checkIfContinue);
	connect(crypto_mining, &QPushButton::clicked, this, &UsagePage::checkIfContinue);
	connect(photo_storage, &QPushButton::clicked, this, &UsagePage::checkIfContinue);
	connect(shopping, &QPushButton::clicked, this, &UsagePage::checkIfContinue);
	connect(other, &QPushButton::clicked, this, &UsagePage::checkIfContinue);
	connect(other, &QPushButton::clicked, this, &UsagePage::handleOther);
}

UsagePage::~UsagePage()
{
}
