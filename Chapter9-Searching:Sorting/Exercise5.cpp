// Exercise 5 - Hit the Slopes


#include <iostream>
#include <string>


struct snowReport {
	int date;
	double snowAmt;
};

void enterSnow(snowReport [], int, int);
void sortSnowfall(snowReport [], int);

int main() {


	std::string monthName;
	int startDate, endDate;
	snowReport theArray[7];

	// Get month
	std::cout << "Please enter the month you would like to keep the snow report for." << std::endl;
	std::cin >> monthName;

	// Get start date
	std::cout << "Please enter the starting date for the seven day period." << std::endl;
	std::cin >> startDate;
	std::cin.ignore(20, '\n'); // Account for decimals

	// Make sure that the end date is correct by going until they enter the right date
	do {
		std::cout << "Please enter the end date. We are only accounting for if this period is a 7 day period in the same month." << std::endl;
		std::cin >> endDate;
		std::cin.ignore(20,'\n');

		if (endDate != (startDate + 6)) {
			std::cout << "Please enter the valid date. If it is the 2nd, then it would go to the 8th." << std::endl;
		}
	} while (endDate != (startDate + 6));



	enterSnow(theArray, startDate, 7);
	sortSnowfall(theArray, 7);

	std::cout << "Snow Report " << monthName << " " << startDate << " -- " << endDate << std::endl;
	std::cout << "Date  " << " Base  " << std::endl;

	// Go through array and print out the date and the amount that occured on that date
	for (int i = 0; i < 7; i++) {
		std::cout << " " << theArray[i].date << "       " << theArray[i].snowAmt << std::endl;
	}


	return 0;
}


/********************************************************************************
**								enterSnow
**
**Input: An array of snowReport structures, int for start date and the size of the array. 
**Output: None.
**Description: Goes through the array and sets the day for a specific structure and then 
**			   gets user to input the amount of snow for that day.
*********************************************************************************/


void enterSnow(snowReport theArray[], int startDate, int size) {

	double hold;

	for (int i = 0; i < size; i++ ) {

		theArray[i].date = startDate + i;
		std::cout << "Please enter the amount of snow for date " << theArray[i].date << "." << std::endl;
		std::cin >> hold;

		theArray[i].snowAmt = hold;

	}

}




/********************************************************************************
**								sortSnowfall
**
**Input: An array of snowReport structures and the size of the array. 
**Output: None.
**Description: Sorts the array by the snowReport structure's snowfall amount data member.
*********************************************************************************/


void sortSnowfall(snowReport theArray[], int size) {

	snowReport temp;
	bool swap;

	do {
		// Flag for holding if a swap occured
		swap = false;

		// Go through array
		for (int count = 0; count < (size - 1); count++) {

			// If value being looked at is greater than the value to its right.
			if (theArray[count].snowAmt > theArray[count+1].snowAmt) {

				temp = theArray[count]; // Put current position of loop in temp
				theArray[count] = theArray[count+1]; // Shift the lower value to the left
				theArray[count+1] = temp;
				swap = true;
			}


		}
	} while (swap); // Loop again if a swap occurred

}

