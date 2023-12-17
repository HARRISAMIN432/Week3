#include<iostream>
using namespace std ;
main() {
	float imposters ;
	float players ;
	float chanceOfBeingImposter ;
	cout << "Enter Imposter Count: " ;
	cin >> imposters ;
	cout << "Enter Player Count: " ;
	cin >> players ;
	chanceOfBeingImposter = (imposters/players)*100 ;
	cout << "Chance of being an imposter: " << chanceOfBeingImposter << "%" ;
}