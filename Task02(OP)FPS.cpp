#include<iostream>
using namespace std;
main() {
	int minutes , framesPerSecond ;
	float numberOfFrames ;
	cout << "Number of Minutes: " ;
	cin >> minutes ;
	cout << "Frames per Second: " ;
	cin >> framesPerSecond ;
	numberOfFrames = minutes*60*framesPerSecond ;
	cout << "Total Number of Frames: " << numberOfFrames ;
	
}