//Modify selection sort in chapter to take strings
#include <iostream>
#include <string>

void stringSelectionSort(std::string [], int); 

int main() {
	
	const int SIZE = 20;

	std::string name[SIZE] =
	{"Collins, Bill", "Smith, Bart", "Michalski, Joe", "Griffin, Jim", "Sanchez, Manny",
	 "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill", "Allison, Jeff", "Moreno Juan",
	  "Wolfe, Bill", "Whitman, Jean", "Moretti, Bella", "Wu, Hong", "Patel, Renee", 
	  "Harrison, Rose", "Smith, Cathy", "Conroy, Pat", "Kelly, Sean", "Holland, Beth"};

	  stringSelectionSort(name, SIZE);

	  for (int i = 0; i < SIZE; i++) {
	  	std::cout << name[i] << std::endl;
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


void stringSelectionSort(std::string theArray[], int size) {

	int startScan, minIndex;
	char Value;
	std::string holdValue;
	bool flag = false;

	// Goes through the array 
	for (startScan = 0; startScan < (size - 1); startScan++) {

		// Sets minIndex to be the start of where the scan is
		minIndex = startScan;

		//Set value to the array currently being scanned
		Value = theArray[startScan][0];

		// Go through index, starting at position to right of scan
		for (int index = startScan + 1; index < size; index++) {
			if (theArray[index][0] < Value) {

				Value = theArray[index][0];
				holdValue = theArray[index];
				minIndex = index;

			}
		}

		theArray[minIndex] = theArray[startScan];
		theArray[startScan] = holdValue;
	}

}