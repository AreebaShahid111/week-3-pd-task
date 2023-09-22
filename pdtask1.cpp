#include<iostream>
using namespace std;
main(){
int sidesOfPolygon;
int sumOfInternalAngles;
cout<< "Enter the number of sides of the polygon: ";
cin >> sidesOfPolygon;
sumOfInternalAngles = (sidesOfPolygon - 2) * 180;
cout << "The sum of internal angles of a " << sidesOfPolygon <<"-sided polygon is: "  << sumOfInternalAngles << " degrees";
}