#include <iostream>


unsigned int __stdcall VTBasicThread();
VTDate getCurrentTime();
struct trade {
	VTDate TOS;
	int shares;
	float price;
};
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
class VTime
{
public:

	VTime();
	VTime(int initHour, int initMinute, int initSecond, int initMsec);
	void resetVT();
	void startVT();
	void stopVT();
	bool clockTick();
	VTDate tickPrecision;	// This will store the amount that each tick will increase the VT by
	VTDate maxTime;			// This will store the time that the user wants to go up to.
	VTDate startTime;
	VTDate currentTime;
};
class stock {
public:
	class tradeEvent {
	public:

	};
private:
	string symbol;
};
VTime myTime;