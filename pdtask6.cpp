#include<iostream>
using namespace std;
main() {
float size;
float costOfBag;
float area;
float costOfFertilizer;
float costOfFertilizing;
cout << "enter the size of the fertilizer bag in pounds:";
cin >> size;
cout <<" enter the cost of the bag: $";
cin >> costOfBag;
cout << "enter the area in the square feet that can be covered by the bag: ";
cin >> area;
costOfFertilizer = costOfBag / size;
costOfFertilizing = costOfBag / area;
 cout <<" cost of fertilizer per pound: $" << costOfFertilizer <<endl;
cout << "cost of fertilizing per square feet: $" <<costOfFertilizing;
}