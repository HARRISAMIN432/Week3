#include<iostream>
using namespace std;
main() {
	int sidesOfPolygon ;
	int SumofInternalAngles ;
	cout << "Enter the number of sides of the polygon: " ;
	cin >> sidesOfPolygon ;
	SumofInternalAngles = (sidesOfPolygon-2)*180 ;
	cout << "The sum of internal angles of a " <<  sidesOfPolygon << "-sided polygon is: " << SumofInternalAngles << " degrees" ;
}