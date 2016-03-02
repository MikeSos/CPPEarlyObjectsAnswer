//Exercise 8 - Search Benchmarks

#include <iostream>

int findValueLinear(int [], int, int);
int findValueBinary(int [], int, int);

int main() {

	


	int theArray[20] = {4, 6, 8, 10, 44, 45, 50, 55, 60, 65, 100, 105, 115, 131, 150, 160, 170, 190, 777, 888};

	std::cout << "The amount of comparisons done with a linear search: " << findValueLinear(theArray, 20, 115) << std::endl;
	std::cout << "The amount of comparisons done with a binary search: " << findValueBinary(theArray, 20, 115) << std::endl;


	return 0;
}



/******************************************************************
**						findValueLinear
**
** Input: An array of ints, its size, and the value to find.
** Output: The amount of comparisons it took to find that int from 
**		   using a linear search.
******************************************************************/


int findValueLinear(int anArray[], int size, int valueToFind) {

	int amtOfComparisons = 0;
	bool flag = false;

	// Go until either the flag is hit or the amt of comparisons is equal to the size
	while (flag == false && amtOfComparisons < size) {

		if (anArray[amtOfComparisons] == valueToFind) {
			flag = true;
		}

		amtOfComparisons++; 
	}

	return amtOfComparisons;
}



/******************************************************************
**						findValueBinary
**
** Input: An array of ints, its size, and the value to find.
** Output: The amount of comparisons it took to find that int from 
**		   using a binary search.
******************************************************************/

int findValueBinary(int anArray[], int size, int valueToFind) {

	int amtOfComparisons = 0;
	int first = 0,
		last = size - 1,
		middle;
	bool flag = false;

	while (flag == false && first <= last) {

		middle = (first + last) / 2;

		if (anArray[middle] == valueToFind) {

			flag = true;

		} else if (anArray[middle] > valueToFind) { // Value is in lower half.
			last = middle - 1;

		} else { // Value is in upper half
			first = middle + 1;
		}

		amtOfComparisons++;

	}

	return amtOfComparisons;

}

