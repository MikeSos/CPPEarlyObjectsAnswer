// Exercise 9 - Sorting Benchmarks

#include <iostream>


int bubbleSortIt(int [], int);
int selectionSort(int [], int); 

int main() {

	int theArrayOne[20] = {99, 4, 32, 456, 33, 24, 15, 690, 432, 565, 45, 67, 54, 2, 1, 90, 37, 55, 78, 20};
	int theArrayTwo[20] = {99, 4, 32, 456, 33, 24, 15, 690, 432, 565, 45, 67, 54, 2, 1, 90, 37, 55, 78, 20};

	std::cout << "The amount of exchanges that took place in the bubble sort is " << bubbleSortIt(theArrayOne, 20) << " exchanges." << std::endl;
	std::cout << "The amount of exchanges that took place in the selection sort is " << selectionSort(theArrayTwo, 20) << " exchanges." << std::endl;



	return 0;
}



/********************************************************************************
**								bubbleSortIt
**
**Input: An array of ints, and an int for the size of array
**Output: Returns int for number of exchanges it took to sort array.
**Description: Goes through the array and sort the ints by number using bubble sort.
*********************************************************************************/


int bubbleSortIt(int anArray [], int size) {

	int temp;
	bool swap;
	int counter = 0;

	do {
		swap = false;
		for (int count = 0; count < (size - 1); count++) {

			if (anArray[count] > anArray[count+1]) {

				temp = anArray[count];
				anArray[count] = anArray[count+1];
				anArray[count+1] = temp;
				swap = true;
				counter++;
			}
		}
	} while (swap);
	return counter;
	
}



/********************************************************************************
**								selectionSortIt
**
**Input: An array of ints, and an int for the size of array
**Output: Returns int for number of exchanges it took to sort array.
**Description: Goes through the array and sort the ints by number using selection sort.
*********************************************************************************/


int selectionSort(int theArray[], int size) {

	int startScan, minIndex, minValue;
	int counter = 0;

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
		counter ++;
	}
	return counter;
}
