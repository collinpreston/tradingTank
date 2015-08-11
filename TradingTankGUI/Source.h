#include <iostream>

struct VTDate {
	int hour;
	int minute;
	int second;
	int msec;
	bool operator>(const VTDate &) const;
	bool operator<(const VTDate &) const;
	bool operator==(const VTDate &) const;
	bool operator<=(const VTDate &) const;
	bool operator>=(const VTDate &) const;
};
struct trade {
	VTDate TOS;
	int shares;
	float price;
};
class VTime
{
public:

	VTime();
	VTime(int initHour, int initMinute, int initSecond, int initMsec);
	void resetVT();
	void startVT();
	bool clockTick();
	VTDate tickPrecision;	// This will store the amount that each tick will increase the VT by
	VTDate maxTime;			// This will store the time that the user wants to go up to.
	VTDate startTime;
	VTDate currentTime;
};
extern unsigned int __stdcall VTBasicThread();
extern VTDate getCurrentTime();
extern int getPercentageComplete();
extern VTDate getMaxTime();
extern VTDate getStartTime();
extern volatile bool globalThreadStop;
extern int convertTimeToMSec(VTDate time);


/*
class stock {
public:
	class tradeEvent {
	public:

	};
private:
	string symbol;
};
*/
