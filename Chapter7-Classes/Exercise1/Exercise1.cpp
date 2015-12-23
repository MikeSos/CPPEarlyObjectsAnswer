
#include "Exercise1.hpp"
#include <iostream>

// Exercise 1 implementation file

/******************************************************************
						Default Constructor

Sets month to 1, day to 1, and year to 2001.
*******************************************************************/

Date::Date() {
	month = 1;
	day = 1; 
	year = 2001;
}

/******************************************************************
						OverLoad Constructor

Intakes three ints for the day, month, and year. If they are invalid
results then the object will be set with the values of 1, 1, 2001.

*******************************************************************/

Date::Date(int inputMonth, int inputDay, int inputYear) {
	// Test to make sure the month if valid 
	if ((inputMonth > 1 && inputMonth < 13)) {
		// If it is, now test to make sure day is valid
		if (inputDay > 0 && testDay(inputDay, inputMonth) == true) {

			// If it is, test to make sure year is valid.
			if (inputYear >= 0) {
				setMonth(inputMonth);
				setDay(inputDay);
				setYear(inputYear);
			}

		}
	} else {
		month = 1;
		day = 1;
		year = 2001;
	}	
}




/******************************************************************
							set Functions

Intake a value, and sets it to the correct value that its function 
name specifies. 
*******************************************************************/

void Date::setMonth(int inputMonth) {
		month = inputMonth;
}

void Date::setDay(int inputDay) {
	day = inputDay;
}

void Date::setYear(int inputYear) {
	year = inputYear;
}


/******************************************************************
						printFormatOne

Print out the date in the format of 1/1/01, aka in number form of
month/day/year
*******************************************************************/

void Date::printFormatOne() {

	// year modulus will 100 will cut things down to two digits
	std::cout << month << "/" << day << "/" << year % 100 << std::endl;
}





/******************************************************************
						printFormatTwo

Print out the date in the format of January 1, 2001. Month written, 
number, and number.
*******************************************************************/

void Date::printFormatTwo() {

	// Will enter the month into switch statement and based on the number
	// will print out the correct date with correct month.

	switch (month) {
		case 1:
			std::cout << "January " << day << ", " << year << std::endl;
			break;
		case 2:
			std::cout << "February " << day << ", " << year << std::endl;
			break;
		case 3:
			std::cout << "March " << day << ", " << year << std::endl;
			break;
		case 4:
			std::cout << "April " << day << ", " << year << std::endl;
			break;
		case 5:
			std::cout << "May " << day << ", " << year << std::endl;
			break;
		case 6:
			std::cout << "June " << day << ", " << year << std::endl;
			break;
		case 7:
			std::cout << "July " << day << ", " << year << std::endl;
			break;
		case 8:
			std::cout << "August " << day << ", " << year << std::endl;
			break;
		case 9:
			std::cout << "September " << day << ", " << year << std::endl;
			break;
		case 10:
			std::cout << "October " << day << ", " << year << std::endl;
			break;
		case 11:
			std::cout << "November " << day << ", " << year << std::endl;
			break;
		case 12:
			std::cout << "December " << day << ", " << year << std::endl;
			break;


	}
}




/******************************************************************
						printFormatThree

Print out the date in the format of 1 January 2001. Day Month written year
*******************************************************************/




void Date::printFormatThree() {

	// Will enter the month into switch statement and based on the number
	// will print out the correct date with correct month.

	switch (month) {
		case 1:
			std::cout << day << " January " << year << std::endl;
			break;
		case 2:
			std::cout << day << " February " << year << std::endl;
			break;
		case 3:
			std::cout << day << " March " << year << std::endl;
			break;
		case 4:
			std::cout << day << " April " << year << std::endl;
			break;
		case 5:
			std::cout << day << " March " << year << std::endl;
			break;
		case 6:
			std::cout << day << " June " << year << std::endl;
			break;
		case 7:
			std::cout << day << " July " << year << std::endl;
			break;
		case 8:
			std::cout << day << " August " << year << std::endl;
			break;
		case 9:
			std::cout << day << " September " << year << std::endl;
			break;
		case 10:
			std::cout << day << " October " << year << std::endl;
			break;
		case 11:
			std::cout << day << " November " << year << std::endl;
			break;
		case 12:
			std::cout << day << " December " << year << std::endl;
			break;


	}
}



/*********************************************************************
							testDay

Intakes a day and a month as ints,  and will check if the day falls into the 
current months acceptable days. Returns true or false.
**********************************************************************/

bool Date::testDay(int inputDay, int inputMonth) {

	bool holdValue = true;

	// Will input month number and go to that month and make sure that the days
	// entered are within the correct range for that month, if so it will change holdValue
	// to true and break out of switch, else it will break and then the function will return
	// holdValue as false.. A number below 1 is taken care of in the Date constructor.
	switch (inputMonth) {

		case 1:
			if (inputDay > 31) {
				holdValue = false;
				break;
			}

		case 2:
			if (inputDay > 28) {
				holdValue = false;
				break;
			}
		case 3:
			if (inputDay > 31) {
				holdValue = false;
				break;
			}

		case 4:
			if (inputDay > 30) {
				holdValue = false;
				break;
			}

		case 5:
			if (inputDay > 31) {
				holdValue = false;
				break;
			}

		case 6:
			if (inputDay > 30) {
				holdValue = false;
				break;
			}

		case 7:
			if (inputDay > 31) {
				holdValue = false;
				break;
			}

		case 8:
			if (inputDay > 31) {
				holdValue = false;
				break;
			}

		case 9:
			if (inputDay > 30) {
				holdValue = false;
				break;
			}

		case 10:
			if (inputDay > 31) {
				holdValue = false;
				break;
			}

		case 11:
			if (inputDay > 30) {
				holdValue = false;
				break;
			}

		case 12:
			if (inputDay > 31) {
				holdValue = false;
				break;
			}	
	}
	return holdValue;

}


















