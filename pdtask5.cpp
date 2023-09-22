#include<iostream>
using namespace std;
main() {
string name;
float days;
float kgs;
cout << "enter the name of the person: ";
cin >> name;
cout << "enter the target weight lose in kilograms: ";
cin >> kgs;
days = kgs * 15 ;
cout << name << " will need " << days << " days to lose " << kgs << " kg of weight by following doctor's recommendation. ";
 


}