#include<iostream>
using namespace std;
main() {
float imposterCount;
float playerCount;
float chance;
cout << "enter imposter count: ";
cin >> imposterCount;
cout << "enter player count: ";
cin >> playerCount;
chance = imposterCount / playerCount * 100;
cout << "chance of being an imposter: " << chance <<"% " ;

}