#include "dataCreatorEngine.h"
#include <fstream>
#include <iostream>
#include <Windows.h>
#include "Source.h"

using namespace std;

// When ever the cursor is moved and recording is in process this is called
double calcCleanCost(short int mouseCost) {
	// This function takes the mouse location and uses
	// the Y coordinate to determine the cost output.
	// NOTE: this function will calculate the cost based
	// only on the mouse position.

	return (double)(mouseCost - 89) / 2.92;
}
double calcCleanVol(short int mouseVol) {
	// This function takes the mouse location and uses
	// the X coordinate to determine the volume output.
	// NOTE: this function will calculate the volume based
	// only on the mouse position.

	// EDIT: This should later be changed so it is not
	// hard coded.
	return (double)(mouseVol - 174) / 4.4;
}
void dataPublisher(double volumeOutput, double costOutput) {
	// This function should be overloaded at some point
	// in order to handle different combinations of data output.
	ofstream dataCollector;
	dataCollector.open("data_output.txt");
	dataCollector << getCurrentTime().hour << ":" << getCurrentTime().minute << ":"
		<< getCurrentTime().second << ":" << getCurrentTime().msec << " " << "SYMB"
		<< " " << volumeOutput << " " << costOutput << " " << "B/S";
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
	updateMousePos(p.x, p.y);
	panelXLoc = panelX;
	panelYLoc = panelY;

	isRecording = true;
	VTBasicThread();


}
void stopRecording() {
	// This should close any open file streams that are currently
	// being used for writing data.
	// I should wait to program this until I have created all of the data
	// writer code/functions.
	isRecording = false;
	myTime.stopVT();
}
void updateMousePos(short int mouseX, short int mouseY) {
	// Will need to check to be sure that the cursor is in the panel and not just the window.
	// If this is true, then run a calc function to derive the cost and volume associated with the position

	// EDIT:At some point this should be changed so that
	// It is not hard coded demensions.
	if (isRecording) {
		if (mouseX > panelXLoc && mouseX < panelXLoc + 614 &&
			mouseY > panelYLoc && mouseY < panelYLoc + 381) {

			// This should calculate the cost and then send the result
			// to another data publishing function.  This log publishing
			// function should be in the data maker engine.
			dataPublisher(calcCleanVol(mouseX), calcCleanCost(mouseY));
			return;
		}
	}
	else return;
}