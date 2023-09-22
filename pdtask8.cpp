#include<iostream>
using namespace std;
main() {
float vegPrice;
float fruitPrice;
int kiloveg;
int kilofruit;
cout<< "Enter vegetables price per kilogram (in coins): ";
cin >> vegPrice;
cout << "Enter fruit price per kilogram (in coins): ";
cin >> fruitPrice;
cout << "Enter total kilograms of vegetables: ";
cin >> kiloveg;
cout << "Enter total kilograms of fruits: ";
cin >> kilofruit;
float fruitRS;
float vegRS;
fruitRS =  fruitPrice * 10 ;
vegRS = vegPrice * 10;
float totalRS;
totalRS = (fruitRS + vegRS) / 1.94;
cout <<" Total earnings in rupees (Rps): " << totalRS ;


}