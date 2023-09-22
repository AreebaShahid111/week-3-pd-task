#include<iostream>
using namespace std;
main() {
int n;
cout << "enter a 4-digit number:";
cin >> n;
int mod;
mod = n % 10;
int modu;
modu = n / 10;
int modul;
modul = modu % 10;
int modulu;
modulu = modu / 10;
int modulus;
modulus = modulu % 10;
int moduluss;
moduluss = modulu / 10;
int modulusss;
modulusss = mod + modul + modulus + moduluss;
cout << " Sum of the individual digits is: " << modulusss;

}