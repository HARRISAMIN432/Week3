#include<iostream>
using namespace std ;
main() {
	string MovieName ;
	int AdultTicketPrice , ChildTicketPrice ;
	int PercentageOfAmountToBeDonated ;
	int NumberofAdultTicket , NumberofChildTicket ;
	int TotalAmount ;
	float Donation ;
	int RemainingAmount ;
	cout << "Enter the movie name: " ;
	cin >> MovieName ;
	cout << "Enter the adult ticket price: $" ;
	cin >> AdultTicketPrice ;
	cout << "Enter the child ticket price: $" ;
	cin >> ChildTicketPrice ;
	cout << "Enter the number of adult tickets sold: " ;
	cin >>  NumberofAdultTicket ;
	cout << "Enter the number of child tickets sold: " ; 
	cin >> NumberofChildTicket ;
	cout << "Enter the percentage of the amount to be donated to charity: " ;
	cin >> PercentageOfAmountToBeDonated ;
	TotalAmount = NumberofAdultTicket*AdultTicketPrice + NumberofChildTicket*ChildTicketPrice ;
	Donation = ( PercentageOfAmountToBeDonated*TotalAmount) /100 ;
	RemainingAmount = TotalAmount - Donation ;
	cout << endl ;
	cout << "Movie: " << MovieName << endl  ;
	cout << "Total amount generated from ticket sales: $" << TotalAmount << endl ;
	cout << "Donation to charity (" << PercentageOfAmountToBeDonated << "%): $" << Donation << endl ;
	cout << "Remaining amount after donation: $" <<  RemainingAmount
 	<< endl;
} 