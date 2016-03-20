// Exercise 7 - Binary String Search


#include <iostream>
#include <string>

void stringSelectionSort(std::string [], int); 
int binaryStringSearch(std::string [], int, std::string);

int main() {
	
	const int SIZE = 20;

	std::string name[SIZE] =
	{"Collins, Bill", "Smith, Bart", "Michalski, Joe", "Griffin, Jim", "Sanchez, Manny",
	 "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill", "Allison, Jeff", "Moreno Juan",
	  "Wolfe, Bill", "Whitman, Jean", "Moretti, Bella", "Wu, Hong", "Patel, Renee", 
	  "Harrison, Rose", "Smith, Cathy", "Conroy, Pat", "Kelly, Sean", "Holland, Beth"};

	  // Sort the array first
	  stringSelectionSort(name, SIZE);
	
	
	  std::cout << "Searching array for Moretti, Bella and Collins, Bill. (Will be -1 if not in array)" << std::endl;
	  std::cout << "It is at position " << binaryStringSearch(name, SIZE, "Moretti, Bella") << " and " << 
	  binaryStringSearch(name, SIZE, "Collins, Bill") << std::endl;


	  return 0;
}


/********************************************************************************
**								binaryStringSearch
**
**Input: An array of strings, an int for the size of array, and a string for last and first name.
**Output: An int that is the location of where that name is in the list.
**Description: Goes through the array, searching for the string.
*********************************************************************************/

int binaryStringSearch(std::string theArray[], int size, std::string searchFor) {

	int first = 0,
	last = size - 1,
	middle,
	position = -1;
	bool found = false; 

	while (!found && first <= last) {

		middle = (first + last ) / 2;

		if (theArray[middle] == searchFor) {
			found = true;
			position = middle;

		} else if (theArray[middle][0] > searchFor[0]) {
			last = middle - 1;

		} else {
			first = middle + 1;
		} 

	}
	return position;
}



/********************************************************************************
**								stringSelectionSort
**
**Input: An array of strings, and an int for the size of array
**Output: None.
**Description: Goes through the array and sorts it by last name alphabetically
*********************************************************************************/



void stringSelectionSort(std::string theArray[], int size) {

	int startScan, minIndex;
	char Value;
	std::string holdValue;
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