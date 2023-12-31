#pragma once
#include <string>
#include <QString>
#include <vector>
#include <stdbool.h>
#include <QProcess>

class PowerMgmt
{

public:

	static void getDefaultPowercfg();
	static void setFreqCap(int p);
	static void removeFreqCap();
	static void restoreDefaults();
	static bool runningAsAdmin();
	static void createCustomPowerPlan();

	// TODO does this really belong in PowerMgmt? Probably not...
	static double getCurrentClockFreq();
	static void getCurrentClockFreqStart(QProcess& proc);
	static double getCurrentClockFreqRead(QProcess& proc);

	static void getSystemConfigStart(QProcess& proc);
	static QString getSystemConfigRead(QProcess& proc);

	static void restoreRegistry();


private:
	PowerMgmt();
	~PowerMgmt();

	static void deleteCustomPowerPlan();
	static void restoreDefaultPowerPlan();
};