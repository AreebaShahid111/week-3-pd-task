#include<iostream>
using namespace std;
main() {
int nOfSquareMeter;
int width;
int length;
cout <<" no of square meters you can paint: ";
cin >>  nOfSquareMeter;
cout << "width of single wall (in meters):";
cin >> width;
cout << "length of the single wall (in meters): ";
cin >> length;
int nOfWalls;
nOfWalls =nOfSquareMeter / (length * width) ;
cout <<" number of walls you can paint: " << nOfWalls ; 
 

}