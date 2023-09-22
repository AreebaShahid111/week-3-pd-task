#include<iostream>
using namespace std;
main() {
int nOfMinutes;
int framesPerSec;
int totalnOfFrames;
cout<< "Number of Minutes: ";
cin >> nOfMinutes ; 
cout<< "Frames per Second: ";
cin >> framesPerSec;
totalnOfFrames = nOfMinutes * 60 *  framesPerSec;
cout << "Total Number of Frames: " << totalnOfFrames ;
}