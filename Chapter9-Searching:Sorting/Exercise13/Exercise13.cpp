// Chapter 9 Exercise 13 - Using Files - String Selection Sort Modifcation

//Modify selection sort in chapter to take strings
#include <iostream>
#include <fstream>
#include <string>
using namespace std; // Using namespace std in this exercise.

void stringSelectionSort(string [], int); 

int main() {

	string holdNames[20];

	ifstream theFile;
	string hold;
	int currentPosition = 0;

	theFile.open("names.dat");

	// Was opened
	if (theFile) {
		while (theFile >> hold) { // Value is being read 
			holdNames[currentPosition] = hold;
			currentPosition++;
		}

		theFile.close();

	// Error 
	} else {
		cout << "File couldn't be opened." << endl;
	}


	  stringSelectionSort(holdNames, 20);

	  for (int i = 0; i < 20; i++) {
	  	cout << holdNames[i] << endl;
	  }

	  return 0;
}


/********************************************************************************
**								stringSelectionSort
**
**Input: An array of strings, and an int for the size of array
**Output: None.
**Description: Goes through the array and sorts it by last name alphabetically
*********************************************************************************/


void stringSelectionSort(string theArray[], int size) {

	int startScan, minIndex;
	char Value;
	string holdValue;
	bool found = false;

	// Goes through the array 
	for (startScan = 0; startScan < (size - 1); startScan++) {

		// Sets minIndex to be the start of where the scan is
		minIndex = startScan;

		//Set value to the array currently being scanned
		Value = theArray[startScan][0];

		// Go through index, starting at position to right of scan
		for (int index = startScan + 1; index < size; index++) {

			// Test current position to see if it is of lower value and that it isn't equal to the value.
			if (theArray[index][0] < Value && theArray[index][0] != Value) {

				Value = theArray[index][0];		// Change value to the new position
				holdValue = theArray[index];  	// Set holdValue string to the current position
				minIndex = index;				// Change minIndex
				found = true;					// Switch found to true

			}
		}

		// A position needs to be changed.
		if (found == true) {
			theArray[minIndex] = theArray[startScan];		// Set the new minIndex position to the position that was searched
			theArray[startScan] = holdValue;				// The new position to search for is the startScan location
			found = false;									// Set found back to false.
		}

	}

}
