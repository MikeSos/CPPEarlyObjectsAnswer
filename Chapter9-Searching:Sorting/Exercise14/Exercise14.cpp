

// Chapter 9 Exercise 14 - Using Vectors - String Selection Sort Modification

//Modify selection sort in chapter to take strings
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std; // using namespace std for this one

void stringSelectionSort(vector<string> &); 

int main() {

	vector<string> holdNames;

	ifstream theFile;
	string hold;

	theFile.open("names.dat");

	// Was opened
	if (theFile) {
		while (theFile >> hold) { // Value is being read 
			holdNames.push_back(hold);
		}

		theFile.close();

	// Error 
	} else {
		cout << "File couldn't be opened." << endl;
	}


	  stringSelectionSort(holdNames);

	  for (int i = 0; i < 20; i++) {
	  	cout << holdNames.at(i) << endl;
	  }

	  return 0;
}


/********************************************************************************
**								stringSelectionSort
**
**Input: A vector of strings
**Output: None.
**Description: Goes through the vector and sorts it by last name alphabetically
*********************************************************************************/


void stringSelectionSort(vector<string> &theNames) {

	int startScan, minIndex;
	char Value;
	string holdValue;
	bool found = false;

	// Goes through the vector 
	for (startScan = 0; startScan < (theNames.size()); startScan++) {

		// Sets minIndex to be the start of where the scan is
		minIndex = startScan;

		//Set value to the vector position currently being scanned
		Value = theNames.at(startScan)[0];

		// Go through index, starting at position to right of scan
		for (int index = startScan + 1; index < theNames.size(); index++) {

			// Test current position to see if it is of lower value and that it isn't equal to the value.
			if (theNames.at(index)[0] < Value && theNames.at(index)[0] != Value) {

				Value = theNames.at(index)[0];		// Change value to the new position
				holdValue = theNames.at(index);  	// Set holdValue string to the current position
				minIndex = index;				// Change minIndex
				found = true;					// Switch found to true

			}
		}

		// A position needs to be changed.
		if (found == true) {
			theNames.at(minIndex) = theNames.at(startScan);		// Set the new minIndex position to the position that was searched
			theNames.at(startScan) = holdValue;				// The new position to search for is the startScan location
			found = false;									// Set found back to false.
		}

	}

}