#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

void add_numbers(int& x, int y) {
	//Y is call by value - and doesn't change (the same in the main)
	//y+=y+10;
	// X is call by reference - the value of first changes every time (added to the previous)
	x+=y;
}

int main () {
	int first;
	int second;
	
	cout << "Enter the first number" << endl;
	cin >> first;
	cout << "Enter second number " << endl;
	cin >> second;
	
	add_numbers(first,second);
	
	cout << "The first time of calling add numbers is: " << first << endl;
	add_numbers(first,second);
	cout << "The second time of calling add numbers is: " << first << endl;
	add_numbers(first,second);
	cout << "The third time of calling add numbers is: " << first << endl;
	
}