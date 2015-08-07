#include <iostream>
double calcCleanCost(short int);
double calcCleanVol(short int);
void dataPublisher(double, double);
bool isRecording = false;
short int panelXLoc;
short int panelYLoc;
void startRecording(short int, short int);
void updateMousePos(short int, short int);
void stopRecording();