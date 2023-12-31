#pragma once

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include "Globals.h"

class DoubleCheck : public QWidget
{
	Q_OBJECT

public:
	DoubleCheck(QWidget *parent = Q_NULLPTR);
	~DoubleCheck();

	QLabel* label;
	QLabel* done_label;
	QPushButton* confirm_btn;
	QPushButton* mistake_btn;

protected:
	QString getTimestamp();
};



class DoubleCheckAccept : public DoubleCheck
{
	Q_OBJECT

public:
	DoubleCheckAccept(QWidget* parent = Q_NULLPTR);

	void firstOffer();

private:
	//void uploadChoice();
};



class DoubleCheckDecline : public DoubleCheck
{
	Q_OBJECT

public:
	DoubleCheckDecline(QWidget* parent = Q_NULLPTR);

	void firstOffer();

private:
	/*void restorePowerDefaults();
	void uploadChoice();
	void restoreSystem();*/
};

//class Check4Cheating : public DoubleCheck
//{
//	Q_OBJECT
//
//public:
//	Check4Cheating(QWidget* parent = Q_NULLPTR);
//
//
//};
