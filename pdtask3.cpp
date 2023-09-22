#include<iostream>
using namespace std;
main() {
int initialVel;
int finalVel;
int acc;
int time;
cout << "Enter Initial Velocity (m/s): ";
cin >> initialVel;
cout << "Enter Acceleration (m/s^2): ";
cin >> acc;
cout <<" Enter Time (s): ";
cin >> time;
finalVel = (acc * time) + initialVel;
cout << " Final velocity (m/s):" << finalVel ;

}