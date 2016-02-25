//Exercise 2 - Lottery Winners



#include <iostream>
#include <string>


void linearSearch(const int [], int, int);

int main() {

	int holdNumber;

	int favoriteNumbers[10] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};


	std::cout << "Please enter this week's winning lottery number." << std::endl;
	std::cin >> holdNumber;

	linearSearch(favoriteNumbers, 10, holdNumber);


	return 0;
}


/********************************************************************************
**							linearSearch
**
**Input: An array, an int for the size of an array, and value to be searched for.
**Output: A message letting the user know if the value is in the array or not.
*********************************************************************************/


void linearSearch(const int array[], int size, int value) {

	int index = 0;
	bool found = false; 

	// Go through array until the value is found or has searched the whole array.
	while (index < size && !found) {

		if (array[index] == value) {
			std::cout << "You have won the lottery!!!" << std::endl;
			found = true;
		}

		index++;

	}

	// Value wasn't found
	if (found == false) {
		std::cout << "Nope. Once again, you have lost the lottery." << std::endl; 
	}
}

