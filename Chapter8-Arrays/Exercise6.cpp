
#include <iostream>
#include <string>
using namespace std;

// Sometimes I break everything down into functions and sometimes I don't if the problem doesn't specify it

int main() {

	unsigned seed;
	// Uses the time function to get a "seed" value for srand
	// srand is needed in order to make rand() give different results everytime
	seed = time(0);
	srand(seed);

	const int SIZE = 5;
	int winningDigits[SIZE];
	int theirDigits[SIZE];
	int matchingAmount = 0;

	// Go through the array, adding a random number between 1 and 9 to each spot.
	// Get their digits also. Putting in same for loop because the SIZE will be the same no matter what.
	for (int i = 0; i < SIZE; i++) {
		winningDigits[i] = rand() % 9 + 1;

		// Prompt them for their numbers.
		if (i == 0) {
			cout << "Please enter your five numbers." << endl;
		}
		// Collect their numbers.
		cin >> theirDigits[i];

		// See if their numbers match.
		if (winningDigits[i] == theirDigits[i]) {
			matchingAmount += 1;
		}
	}

	// Display the lottery's digits

	cout << "The lotterys numbers are." << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << winningDigits[i] << " ";
	}
	// Go to next line.
	cout << endl;

	// Display player's numbers.
	cout << "Your lotto numbers were." << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << theirDigits[i] << " ";
	}

	cout << endl;
	cout << "The amount of numbers you matched with the winning numbers is " << matchingAmount << " ." << endl;


	return 0;
}