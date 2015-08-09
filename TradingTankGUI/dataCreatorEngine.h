#include <iostream>
extern double calcCleanCost(short int);
extern double calcCleanVol(short int);
extern void dataPublisher(double, double);
extern bool isRecording;
extern short int panelXLoc;
extern short int panelYLoc;
extern short int lastMouseLocX;
extern short int lastMouseLocY;
extern void startRecording(short int, short int);
extern void updateMousePos(short int, short int);
extern void stopRecording();