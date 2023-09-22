#include<iostream>
using namespace std;
main() {
string moviename;
float adultprice;
float childprice;
float adultsold;
float childsold;
cout << "enter the movie name: ";
cin >> moviename;
cout << "enter the adult ticket price: $ ";
cin >> adultprice;
cout << "enter the child ticket price: $ ";
cin >> childprice;
cout << "enter the no of adult tickets sold: ";
cin >> adultsold;
cout << "enter the no of child ticket sold: ";
cin >> childsold;
float amountGenerated;
amountGenerated = (adultsold * adultprice ) + (childsold * childprice );
float donation;
donation = 0.1 * amountGenerated;
float remaining ;
remaining = amountGenerated - donation;
cout << "Movie: " << moviename <<endl;
cout <<" Total amount generated from the ticket sales" << amountGenerated <<endl;
cout << "Donation to charity (10%): $ " << donation << endl;
cout << "Remaining amount after donation: $" << remaining ; 








}