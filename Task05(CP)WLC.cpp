#include<iostream>
using namespace std ;
main() {
	string Name ;
	float targetWeight ;
	float Days ;
	cout << "Enter the Name of the Person: " ;
	cin >> Name ;
	cout << "Enter the target weight loss in kilograms: " ;
	cin >> targetWeight ;
	Days = targetWeight*15 ;
	cout << Name << " will need " << Days << " days to lose " << targetWeight << " kg of weight by following the doctor's suggestions" ;	
}