#pragma once
#include <string>
#include <QString>
using namespace std;


class SysUtils
{

public:

	static void takeSnapshot(QString snapshot_reason);
	static void restoreSystem();
	static void initExperiment();
	static QString getpwd();

private:

	static QString getTimestamp();

	SysUtils();
	~SysUtils();
};

