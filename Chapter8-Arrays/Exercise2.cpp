#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {

	double userEntry;
	double sentinel = 1;

	// It is 21 because I will be having the 0 position filled with a filler.
	string RomanNums[21] = { "Filler", "I", "II", "III", "IV", "V",
				  "VI", "VII", "VIII", "IX", "X",
				  "XI", "XII", "XIII", "XIV", "XV",
				  "XVI", "XVII", "XVIII", "XIX", "XX"};

	while (sentinel != 0) {
		cout << "Please enter a number between 1 and 20 and we will show you its Roman Numeral equivalent. Enter 0 to end this constant asking." << endl;
		cin >> userEntry;

		// Check if it it is out of range.  
		if (userEntry < 1 || userEntry > 20) {
			cout << "Out of range." << endl;
		} else {
			// Convert to int so it can be used as a subscript.
			cout << RomanNums[static_cast<int>(userEntry)] << endl;
		}

		// Problem wants loop to use a sentinel to end loop
		sentinel = userEntry;

	}


	return 0;
}