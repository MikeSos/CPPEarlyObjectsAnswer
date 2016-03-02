// Exercise 4 - Annual Rainfall Report

#include <iostream>
#include <string>


/**********************************
	RainfallPerMonth Structure
************************************/

struct RainfallPerMonth {

	double rainfallAmount;
	std::string month;

	//Constructor
	RainfallPerMonth(std::string month) {
		this->month = month;
	}

};



void enterRainfall(RainfallPerMonth [], int);
void sortByRainfall(RainfallPerMonth [], int);
void displayData(RainfallPerMonth [], int);


int main() { 


	// An array of 12 structures. One structure for each month
	RainfallPerMonth theMonths[12] = { RainfallPerMonth("January"),
									   RainfallPerMonth("February"),
									   RainfallPerMonth("March"),
									   RainfallPerMonth("April"),
									   RainfallPerMonth("May"),
									   RainfallPerMonth("June"),
									   RainfallPerMonth("July"),
									   RainfallPerMonth("August"),
									   RainfallPerMonth("September"),
									   RainfallPerMonth("October"),
									   RainfallPerMonth("November"),
									   RainfallPerMonth("December")};


	enterRainfall(theMonths, 12);
	displayData(theMonths,12);

	sortByRainfall(theMonths, 12);
	displayData(theMonths, 12);

	return 0;

}



/********************************************************************************
**								enterRainfall
**
**Input: An array of RainfallPerMonth structures, and the size of the array. 
**Output: None
**Description: goes through the array and for each month gets user to input the 
**			   amount of rainfall for that month.
*********************************************************************************/


void enterRainfall(RainfallPerMonth theArray[], int size) {

	double hold;

	for (int i = 0; i < size; i++ ) {

		std::cout << "Please enter the amount of rain for " << theArray[i].month << "." << std::endl;
		std::cin >> hold;

		theArray[i].rainfallAmount = hold;

	}

}


/********************************************************************************
**								sortByRainfall
**
**Input: An array of RainfallPerMonth structures, and the size of the array. 
**Output: None.
**Description: Sorts the array of rainfall structures by comparing the rainfall amount.
*********************************************************************************/


void sortByRainfall(RainfallPerMonth theArray[], int size) {

	RainfallPerMonth temp("");
	bool swap;

	do {
		// Flag for holding if a swap occured
		swap = false;

		// Go through array
		for (int count = 0; count < (size - 1); count++) {

			// If value being looked at is greater than the value to its right.
			if (theArray[count].rainfallAmount > theArray[count+1].rainfallAmount) {

				temp = theArray[count]; // Put current position of loop in temp
				theArray[count] = theArray[count+1]; // Shift the lower value to the left
				theArray[count+1] = temp;
				swap = true;
			}


		}
	} while (swap); // Loop again if a swap occurred

}



/********************************************************************************
**								displayData
**
**Input: An array of RainfallPerMonth structures, and the size of the array.
**Output: Displays the contents of the structures that the array holds.
**Description: Loops through the array, displaying the month and its rainfall.
*********************************************************************************/


void displayData(RainfallPerMonth theArray[], int size) {

	for (int i = 0; i < size; i++) {

		std::cout << theArray[i].month << "'s rainfall amount is " << theArray[i].rainfallAmount << " inches." << std::endl;

	}
}





