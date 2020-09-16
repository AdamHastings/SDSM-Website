#pragma once
#include "Globals.h"
#include <QWidget>
#include <QPushButton>
#include <QButtonGroup>
#include <QRadioButton>
#include <QLabel>
#include <QGroupBox>
#include "ButtonArray.h"

class ComparePage : public QWidget
{
	Q_OBJECT

public:
	ComparePage(QWidget *parent = Q_NULLPTR);
	~ComparePage();

	QLabel* header;
	QPushButton* continue_btn;
	ButtonArray* arr1;
	ButtonArray* arr2;
	ButtonArray* arr3;

private:
	void setupPage();
	void makeConnections();
};
