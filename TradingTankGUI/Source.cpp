#include <iostream>
#include "Source.h"
#include "dataCreatorEngine.h"
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

VTime myTime;
unsigned int __stdcall VTBasicThread()
{
	//VTime myTime;
	// Begin the clock
	
	myTime.startVT();
	while (globalThreadStop) {		// Will exit if the user clicks stop.
		do {
			dataPublisher(calcCleanVol(lastMouseLocX), calcCleanCost(lastMouseLocY));
			
			
			// This function will also update the progress bar

			// This while loop should contain a function to check the
			// system clock and keep track of the actual time in order to
			// delay VT correctly.
		} while (myTime.clockTick());	// Will exit once the max time is reached.
	}
	stopRecording();
	// At this point, the thread should end
	return 0;
}
VTime::VTime(void)
{
	startTime.hour = 9;
	startTime.minute = 30;
	startTime.second = 0;
	startTime.msec = 0;
}
VTime::VTime(int initHour, int initMinute, int initSecond, int initMsec)
{
	startTime.hour = initHour;
	startTime.minute = initMinute;
	startTime.second = initSecond;
	startTime.msec = initMsec;
}
bool VTDate::operator>(const VTDate &a) const {
	if (this->hour > a.hour && this->minute > a.minute && this->second > a.second && this->msec > a.msec) {
		return true;
	}
	else {
		return false;
	}
}
bool VTDate::operator<(const VTDate &a) const {
	if (this->hour < a.hour && this->minute < a.minute && this->second < a.second && this->msec < a.msec) {
		return true;
	}
	else {
		return false;
	}
}
bool VTDate::operator==(const VTDate &a) const {
	if (this->hour == a.hour && this->minute == a.minute && this->second == a.second && this->msec == a.msec) {
		return true;
	}
	else {
		return false;
	}
}
bool VTDate::operator<=(const VTDate &a) const {
	if (this->hour <= a.hour && this->minute <= a.minute && this->second <= a.second && this->msec <= a.msec) {
		return true;
	}
	else {
		return false;
	}
}
bool VTDate::operator>=(const VTDate &a) const {
	if (this->hour >= a.hour && this->minute >= a.minute && this->second >= a.second && this->msec >= a.msec) {
		return true;
	}
	else {
		return false;
	}
}
void VTime::resetVT()
{
	startTime.hour = 9;
	startTime.minute = 30;
	startTime.second = 0;
	startTime.msec = 0;
}
void VTime::startVT()
{
	// Code here will start VT
	// initialize to config file specs
	ifstream VTConfig;
	VTConfig.open("Config\\VT.txt");
	string hour;
	string minute;
	string second;
	string msec;
	short int line = 0;
	if (VTConfig) {
		while (!VTConfig.eof()) {
			getline(VTConfig, hour, ':');
			getline(VTConfig, minute, ':');
			getline(VTConfig, second, ':');
			getline(VTConfig, msec, ':');
			if (line == 0) {
				this->startTime.hour = stoi(hour);
				this->startTime.minute = stoi(minute);
				this->startTime.second = stoi(second);
				this->startTime.msec = stoi(msec);
			}
			if (line == 1) {
				this->tickPrecision.hour = stoi(hour);
				this->tickPrecision.minute = stoi(minute);
				this->tickPrecision.second = stoi(second);
				this->tickPrecision.msec = stoi(msec);
			}
			if (line == 2) {
				this->maxTime.hour = stoi(hour);
				this->maxTime.minute = stoi(minute);
				this->maxTime.second = stoi(second);
				this->maxTime.msec = stoi(msec);
			}
			line++;
		}
	}
	else {
		// TODO: Output an error to the log file
		return;
	}
	VTConfig.close();
	return;
}

bool VTime::clockTick()
{
	// Code here will advance the current
	// VT date by the VTRate.
	// NOTE: If the user does not specify a VTRate
	// the default will be 1 second.

	// Increment the current time by one tick duration
	this->currentTime.hour += this->tickPrecision.hour;
	this->currentTime.minute += this->tickPrecision.minute;
	this->currentTime.second += this->tickPrecision.second;
	this->currentTime.msec += this->tickPrecision.msec;

	if (this->currentTime <= this->maxTime) {
		return true;
	}
	else {
		return false;
	}

}
VTDate getCurrentTime() {
	return myTime.currentTime;
}
VTDate getStartTime() {
	return myTime.startTime;
}
VTDate getMaxTime() {
	return myTime.maxTime;
}
int getPercentageComplete() {
	double sumA, sumB;

	// Convert all of the different time measurements to msec
	// for both the current and max time in respect to the starting time
	sumA = (myTime.currentTime.hour - myTime.startTime.hour) * 3600000;
	sumA += (myTime.currentTime.minute - myTime.startTime.minute) * 60000;
	sumA += (myTime.currentTime.second - myTime.startTime.second) * 1000;
	sumA += (myTime.currentTime.msec = myTime.startTime.msec);

	sumB = (myTime.maxTime.hour - myTime.startTime.hour) * 3600000;
	sumB += (myTime.maxTime.minute - myTime.startTime.minute) * 60000;
	sumB += (myTime.maxTime.second - myTime.startTime.second) * 1000;
	sumB += (myTime.maxTime.msec - myTime.startTime.msec);

	return (int)((sumA / sumB) * 100);
}