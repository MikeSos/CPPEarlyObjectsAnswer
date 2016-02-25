//Exercise 1 Chapter 9 - Charge Account Validation


#include <iostream>
#include <string>


void linearSearch(const int [], int, int);

int main() {

	int holdNumber;

	int chargeAccount[18] = {5658845, 4520125, 7895122, 87777541, 8451277, 1302850,
							 8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
							 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};


	std::cout << "Please enter your charge account number." << std::endl;
	std::cin >> holdNumber;

	linearSearch(chargeAccount, 18, holdNumber);


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
			std::cout << "The number is valid" << std::endl;
			found = true;
		}

		index++;

	}

	// Value wasn't found
	if (found == false) {
		std::cout << "The number is invalid." << std::endl; 
	}
}




