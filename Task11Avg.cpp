#include<iostream>
using namespace std ;
main() {
	int age , NumberOfTimesMoved , AverageLiving ;
	cout << "Enter the person's age: " ;
	cin >> age ;
	cout << "Enter the number of times they've moved: " ;
	cin >> NumberOfTimesMoved ;
	AverageLiving = age/(NumberOfTimesMoved + 1 ) ;
	cout << "Average number of years lived in the same house: " << AverageLiving ;  
	
}