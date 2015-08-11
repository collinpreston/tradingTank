#include <iostream>
#include "Source.h"
#include "dataCreatorEngine.h"
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

VTime myTime;
unsigned int __stdcall VTBasicThread()
{
	//VTime myTime;
	// Begin the clock
	
	myTime.startVT();
	myTime.currentTime = myTime.startTime;
	while (globalThreadStop) {		// Will exit if the user clicks stop.
		dataPublisher(calcCleanVol(lastMouseLocX), calcCleanCost(lastMouseLocY));
			
			
		// This function still needs some sort of delay

		// This while loop should contain a function to check the
		// system clock and keep track of the actual time in order to
		// delay VT correctly.
		myTime.clockTick();	// Will exit once the max time is reached.
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
	if (convertTimeToMSec(*this) > convertTimeToMSec(a)) {
		return true;
	}
	else {
		return false;
	}
}
bool VTDate::operator<(const VTDate &a) const {
	if (convertTimeToMSec(*this) < convertTimeToMSec(a)) {
		return true;
	}
	else {
		return false;
	}
}
bool VTDate::operator==(const VTDate &a) const {
	if (convertTimeToMSec(*this) == convertTimeToMSec(a)) {
		return true;
	}
	else {
		return false;
	}
}
bool VTDate::operator<=(const VTDate &a) const {
	int b, c;
	b = convertTimeToMSec(*this);
	c = convertTimeToMSec(a);
	if (convertTimeToMSec(*this) <= convertTimeToMSec(a)) {
		return true;
	}
	else {
		return false;
	}
}
bool VTDate::operator>=(const VTDate &a) const {
	if (convertTimeToMSec(*this) >= convertTimeToMSec(a)) {
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
	ifstream VTConfig("Config\\VT.txt");

	int number;
	char delimiter;
	int start[4] = { 0 };
	int tick[4] = { 0 };
	int max[4] = { 0 };
	string Line;
	while (!VTConfig.eof()) {
		for (int i = 0; i < 4; i++)
		{
			getline(VTConfig, Line, ':'); // get values, one at a time, delimited by the : character
			stringstream iss;
			iss << Line; //Put the string into a stream
			iss >> start[i]; //This outputs the data as an int.
		}
		for (int i = 0; i < 4; i++)
		{
			getline(VTConfig, Line, ':'); // get values, one at a time, delimited by the : character
			stringstream iss;
			iss << Line; //Put the string into a stream
			iss >> tick[i]; //This outputs the data as an int.
		}
		for (int i = 0; i < 4; i++)
		{
			getline(VTConfig, Line, ':'); // get values, one at a time, delimited by the : character
			stringstream iss;
			iss << Line; //Put the string into a stream
			iss >> max[i]; //This outputs the data as an int.
		}
	}
	this->startTime.hour = start[0];
	this->startTime.minute = start[1];
	this->startTime.second = start[2];
	this->startTime.msec = start[3];

	this->tickPrecision.hour = tick[0];
	this->tickPrecision.minute = tick[1];
	this->tickPrecision.second = tick[2];
	this->tickPrecision.msec = tick[3];

	this->maxTime.hour = max[0];
	this->maxTime.minute = max[1];
	this->maxTime.second = max[2];
	this->maxTime.msec = max[3];

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
		globalThreadStop = false;
		return false;
	}

	// This function should also increment the
	// different time measures respectively in regards to
	// the increment that just took place.
	// Only do this if it is still less than the max time
	// in order to save on processing.

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
	int sumA, sumB;

	// Convert all of the different time measurements to msec
	// for both the current and max time in respect to the starting time
	sumA = convertTimeToMSec(myTime.currentTime);

	sumB = convertTimeToMSec(myTime.maxTime);

	return (sumA / sumB) * 100;
}
int convertTimeToMSec(VTDate time) {
	return (time.hour * 3600000) + (time.minute * 60000) + (time.second * 1000) + time.msec;
}