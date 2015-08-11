#include "dataCreatorEngine.h"
#include <fstream>
#include <iostream>
#include <Windows.h>
#include "Source.h"

using namespace std;

// When ever the cursor is moved and recording is in process this is called
// This function takes the mouse location and uses
// the Y coordinate to determine the cost output.
// NOTE: this function will calculate the cost based
// only on the mouse position.
volatile bool globalThreadStop = false;
bool isRecording = false;
short int panelXLoc;
short int panelYLoc;
short int lastMouseLocX;
short int lastMouseLocY;
double calcCleanCost(short int mouseCost) {
	return (double)(mouseCost - 89) / 2.92;
}

// This function takes the mouse location and uses
// the X coordinate to determine the volume output.
// NOTE: this function will calculate the volume based
// only on the mouse position.
double calcCleanVol(short int mouseVol) {


	// EDIT: This should later be changed so it is not
	// hard coded.
	return (double)(mouseVol - 174) / 4.4;
}

// This function should be overloaded at some point
// in order to handle different combinations of data output.
void dataPublisher(double volumeOutput, double costOutput) {
	ofstream dataCollector;
	dataCollector.open("data_output.txt", ios::app);
	dataCollector << getCurrentTime().hour << ":" << getCurrentTime().minute << ":"
		<< getCurrentTime().second << ":" << getCurrentTime().msec << " " << "SYMB"
		<< " " << volumeOutput << " " << costOutput << " " << "B/S" << endl;

	// This should set some global variable to the variable that are the latest output
	// ie. above. 
	dataCollector.close();
}
void startRecording(short int panelX, short int panelY) {
	// This should start the VT ticker.
	// It should also take the first mouse tracker sample.
	// This function will also initialize the file streams.
	/// All of the file stream handling will be done by the
	/// data maker engine.

	// Take first sample.
	// Start threads for VT, file IO.
	POINT p;
	GetCursorPos(&p);
	ScreenToClient(GetActiveWindow(), &p);
	isRecording = true;
	updateMousePos(p.x, p.y);
	panelXLoc = panelX;
	panelYLoc = panelY;

	globalThreadStop = true;
	VTBasicThread();


}
void stopRecording() {
	// This should close any open file streams that are currently
	// being used for writing data.
	// I should wait to program this until I have created all of the data
	// writer code/functions.
	isRecording = false;
	return;
}
// This function will need to changed so that it just sets a flag.
// I don't want data every time that the mouse is moved.
// Instead I want for the VT to "clock-in" the mouse position at each tick
void updateMousePos(short int mouseX, short int mouseY) {
	// Will need to check to be sure that the cursor is in the panel and not just the window.
	// If this is true, then run a calc function to derive the cost and volume associated with the position

	// EDIT:At some point this should be changed so that
	// It is not hard coded demensions.
	if (isRecording) {
		if (mouseX > panelXLoc && mouseX < panelXLoc + 614 &&
			mouseY > panelYLoc && mouseY < panelYLoc + 381) {

			lastMouseLocX = mouseX;
			lastMouseLocY = mouseY;
			return;
		}
	}
	else return;
}