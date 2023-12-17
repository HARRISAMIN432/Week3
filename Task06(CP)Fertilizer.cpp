#include<iostream>
using namespace std ;
main() {
	int Pounds ;
	int cost ;
	float AreaperSquareFoot	 ;
	float CostofFertilizerperPound ;
	float CostofFertilizerperSquareFoot ;
	cout << "Enter the size of the fertilizer bag in pounds: " ;
	cin >> Pounds ;
	cout << "Enter the cost of the bag: $" ;
	cin >> cost ;
	cout << "Enter the area in square feet that can be covered by the bag: " ;
	cin >> AreaperSquareFoot ;
	CostofFertilizerperPound = cost/Pounds ;
	CostofFertilizerperSquareFoot = cost/AreaperSquareFoot	 ;
	cout << "Cost of fertilizer per pound: $" << CostofFertilizerperPound << endl ;
	cout << "Cost of fertilizing per square foot: $" << CostofFertilizerperSquareFoot ;
}