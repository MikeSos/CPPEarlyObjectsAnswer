//Exercise 3 - Lottery Winners Modification (Binary Search instead)


#include <iostream>
#include <string>


void binarySearch(const int [], int, int);

int main() {

	int holdNumber;

	int favoriteNumbers[10] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};


	std::cout << "Please enter this week's winning lottery number." << std::endl;
	std::cin >> holdNumber;

	binarySearch(favoriteNumbers, 10, holdNumber);


	return 0;
}


/********************************************************************************
**							binarySearch
**
**Input: An array, an int for the size of an array, and value to be searched for.
**Output: A message letting the user know if the value is in the array or not.
*********************************************************************************/


void binarySearch(const int array[], int size, int value) {

	// Array elements
	int first = 0;			
	int last = size - 1;
	int middle;

	bool found = false;  // flag

	while (!found && first <= last) {

		// Calculate midpoint
		middle = (first + last) / 2; 

		if (array[middle] == value) {
			found = true;
			std::cout << "YOU HAVE WON THE LOTTERY!" << std::endl;

		   // If value in lower half
		} else if (array[middle] > value)  {	
			last = middle - 1;

		// It is in upper half
		} else {
			first = middle + 1;
		}

	}

	if (found == false) {
		std::cout << "You have once again lost the lottery." << std::endl;
	}

}






