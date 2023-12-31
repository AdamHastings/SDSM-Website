#pragma once

#include <QWidget>
#include <QButtonGroup>
#include <QRadioButton>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QRect>

class ButtonArray : public QGroupBox
{
	Q_OBJECT

public:
	ButtonArray(QWidget *parent = Q_NULLPTR);
	~ButtonArray();

	QHBoxLayout* hbox;
	QButtonGroup* bgroup;

	int getClicked();

	QRadioButton* speed0;
	QRadioButton* speed1;
	QRadioButton* speed2;
	QRadioButton* speed3;
	QRadioButton* speed4;
};
