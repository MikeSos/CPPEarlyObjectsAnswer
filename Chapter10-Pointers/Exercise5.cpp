#include <iostream>
using namespace std;


int findMode(int *, int );

int main() {

	// Problem says to set up an integer array. An array name is a pointer.
	const int SIZE = 30;
	int responses[SIZE];
	int holdMode;


	cout << "Enter the amount of pie each person ate this past year." << endl;
	for (int i = 0; i < SIZE; i ++) {
		cin >> responses[i];
	}

	holdMode = findMode(responses, SIZE);


	cout << "The mode is " << holdMode << " " << endl;


	return 0;
}


/*******************************************************
					findMode

Intakes a pointer to an int array and the size of the
array. Finds the mode in that array. If multiple numbers tie
for the mode, then the first number in the array of those tied
will be the one picked and returned.
*******************************************************/



int findMode(int *theArray, int size) {

	int currentMode = *(theArray);
	int currentTest;
	int showsUp = 0;
	int highestAmount = 0;

	// Go through each position in the array
	for (int i = 0; i < size; i++) {
		// This is position to be tested
		currentTest = *(theArray + i);

		// Test each position in array against the value held in currentTest
		for (int j = 0; j < size; j++) {
			// If a value in the array equals currentTest then add one to show up
			if (*(theArray + j) == currentTest) {
				showsUp += 1;
			}
		}
		// If showsUp greater, than that means the currentTest is the new mode.
		if (showsUp > highestAmount) {
			highestAmount = showsUp;
			currentMode = currentTest;
		}
		// Reset before next loop around
		showsUp = 0;
	}
	return currentMode;
}



