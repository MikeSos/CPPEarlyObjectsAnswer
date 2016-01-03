
#include <iostream>
using namespace std;


int findMode(int *, int);
int getMedian(int *, int ); // Median will end up rounding down instead of showing a decimal.
int getAverage(int *, int); // Average will do the same. 

int main() {

	int amountOfStudents;
	int *theArray;
	int mode, median, average;

	// Get amount of students
	cout << "Please enter how many students were surveyed." << endl;
	cin >> amountOfStudents;

	// Dynamically allocate the array
	theArray = new int[amountOfStudents];

	cout << "Please enter the amount of movies each student watched in a month." << endl;
	for (int i = 0; i < amountOfStudents; i++) {
		cin >> *(theArray + i);
	}

	mode = findMode(theArray, amountOfStudents);
	median = getMedian(theArray, amountOfStudents);
	average = getAverage(theArray, amountOfStudents);

	cout << "Here is the mode: " << mode << endl;
	cout << "Here is the median: " << median << endl;
	cout << "Here is the average: " << average << endl;


	delete [] theArray;
	theArray = 0;

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



/**********************************************************
						getMedian

Intakes a pointer to an array of ints and an int for the size
of the array. Finds and returns the median.
**********************************************************/

int getMedian(int *anArray, int size) {

	// If it is odd 
	if (size % 2 != 0) {
		// Median position will be equidistant from both ends, so (size - 1) / 2 is the location
		return *(anArray + ((size - 1) / 2 ));
	}

	// For even. This will target the two locations in the middle, add them together and then divide by 2
	return (*(anArray + (size/2)) + *(anArray + ((size / 2)-1))) / 2;
}




/*************************************************************
						getAverage

Intakes a pointer to an array of ints and an int for the size of
the array. Calculates and returns the average. 
*************************************************************/

int getAverage(int *anArray, int size) {
	int total = 0;

	for (int i = 0; i < size; i++) {
		total += *(anArray + i);
	}

	return total / size;
}





