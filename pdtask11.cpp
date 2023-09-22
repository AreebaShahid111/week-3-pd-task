#include<iostream>
using namespace std;
main() {
int age;
int noftimes;
cout << "enter the person's age: " ;
cin >> age;
cout << "enter the no of times they have moved: " ;
cin >> noftimes;
int average;
average = age / (noftimes + 1 );
cout << "average no of years lived in the same house: " << average ;

}