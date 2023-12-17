#include<iostream>
using namespace std ;
void add() ;
main() {
	add() ;
}										 void add() {
        int n1 ,n2 , sum ;
	cout << "Enter First Number: " ;
	cin >> n1 ;
	cout << "Enter Second Number: " ;
	cin >> n2 ;
	sum = n1 + n2 ;
	cout << "Sum: " << sum ;
}