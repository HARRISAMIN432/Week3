#include<iostream>
using namespace std ;
main() {
	int Sqmeters ,  Width , Height , Paint ;
	cout << "Number of square meters you can paint: " ;
	cin >> Sqmeters ;
	cout << "Width of the single wall (in meters): " ;
	cin >> Width ;
	cout << "Height of the single wall (in meters): ";
	cin >> Height ;
	Paint = (Sqmeters) / (Width*Height) ;
	cout << "Number of walls you can paint: " << Paint ;
}