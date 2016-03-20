// Chapter 9 Exercise 10 Sorting Orders


#include <iostream>


void bubbleSortIt(int [], int);
void selectionSort(int [], int); 
void displayContents(int [], int);

int main() {

	int theArrayOne[8] = {99, 4, 32, 456, 33, 24, 15, 690};
	int theArrayTwo[8] = {99, 4, 32, 456, 33, 24, 15, 690};

	std::cout << "The array before the bubble sort is " << std::endl;
	displayContents(theArrayOne, 8); 
	std::cout << std::endl;

	std::cout << "Here is how it is after each pass." << std::endl;
	std::cout << std::endl;

	bubbleSortIt(theArrayOne, 8);

	std::cout << std::endl;

	std::cout << "The array before the selection sort is " << std::endl; 
	displayContents(theArrayTwo, 8);
	std::cout << std::endl;

	std::cout << "Here is how it is after each pass." << std::endl;
	std::cout << std::endl;

	selectionSort(theArrayTwo, 8);



	return 0;
}


/********************************************************************************
**								displayContents
**
**Input: An array of ints, and an int for the size of array
**Output: Displays the ints in a row.
**Description: Displays all the contents of an array.
*********************************************************************************/

void displayContents(int array[], int size) {

	for (int i = 0; i < size; i++)
		std::cout << array[i] << " ";

	std::cout << std::endl;
}


/********************************************************************************
**								bubbleSortIt
**
**Input: An array of ints, and an int for the size of array
**Output: None.
**Description: Goes through the array and sort the ints by number using bubble sort.
*********************************************************************************/


void bubbleSortIt(int anArray [], int size) {

	int temp;
	bool swap;

	do {
		swap = false;
		for (int count = 0; count < (size - 1); count++) {

			if (anArray[count] > anArray[count+1]) {

				temp = anArray[count];
				anArray[count] = anArray[count+1];
				anArray[count+1] = temp;
				swap = true;
				displayContents(anArray, size);

			}
		}
	} while (swap);
	
}



/********************************************************************************
**								selectionSortIt
**
**Input: An array of ints, and an int for the size of array
**Output: None.
**Description: Goes through the array and sort the ints by number using selection sort.
*********************************************************************************/


void selectionSort(int theArray[], int size) {

	int startScan, minIndex, minValue;

	for (startScan = 0; startScan < (size - 1); startScan++) {

		minIndex = startScan;
		minValue = theArray[startScan];

		for (int index = startScan + 1; index < size; index++) {

			if (theArray[index] < minValue) {

				minValue = theArray[index];
				minIndex = index;
			}
		}

		theArray[minIndex] = theArray[startScan];
		theArray[startScan] = minValue;
		displayContents(theArray, size);
	}
}