#include<iostream>
using namespace std ;
main() {
	int YourNumber, FirstDigit, RemoveLastDigit, SecondDigit;
	int RemoveSecondDigit ,ThirdDigit, RemoveThirdDigit,FourthDigit;
	int SumOfDigits ;
	cout << "Enter a 4-digit number: " ;
	cin >> YourNumber ;
	FirstDigit = YourNumber%10 ;
        RemoveLastDigit = YourNumber/10 ;
	 SecondDigit = RemoveLastDigit%10 ;
	 RemoveSecondDigit = RemoveLastDigit/10 ;
	 ThirdDigit = RemoveSecondDigit%10 ;
	 RemoveThirdDigit = RemoveSecondDigit/10 ;
	 FourthDigit = RemoveThirdDigit%10 ;
	 SumOfDigits = FirstDigit + SecondDigit + ThirdDigit + FourthDigit ;
	cout << "Sum of the individual digits: " << SumOfDigits;
	
}