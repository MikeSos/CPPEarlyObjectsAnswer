// Chapter 11  Problem 2 - Day of The Year


#include "DayOfYear.hpp"
#include <string>
#include <iostream>


// Challenge wants us to use a static string
std::string DayOfYear::months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September",
								 "October", "November", "December"};

/*************************************
*			Constructor				 
**************************************/

DayOfYear::DayOfYear(int day) {
	this->day = day;
}


/****************************************************
*			print()
*		
* Prints out month and the day based on day entered.
* So number 32 would be February 1, and 365 would be
* December 31.						 
*****************************************************/

// This is not for leap years

void DayOfYear::print() {

	if (day > 0 && day < 32) {
		std::cout << "Day " << day << " would be " + months[0] << " " << day << std::endl; 

	} else if (day > 31 && day < 60) {
		std::cout << "Day " << day << " would be " + months[1] << " "<< (day - 31) << std::endl; 

	} else if (day > 59 && day < 91) {
		std::cout << "Day " << day << " would be " + months[2] << " " << (day - 59) << std::endl; 

	} else if (day > 90 && day < 121) {
		std::cout << "Day " << day << " would be " + months[3] << " "<< (day - 90) << std::endl; 

	} else if (day > 120 && day < 152) {
		std::cout << "Day " << day << " would be " + months[4] << " "<< (day - 120) << std::endl; 

	} else if (day > 151 && day < 182) {
		std::cout << "Day " << day << " would be " + months[5] << " "<< (day - 151) << std::endl; 

	} else if (day > 181 && day < 213) {
		std::cout << "Day " << day << " would be " + months[6] << " "<< (day - 181) << std::endl; 

	} else if (day > 212 && day < 244) {
		std::cout << "Day " << day << " would be " + months[7] << " " << (day - 212) << std::endl; 

	} else if (day > 243 && day < 274) {
		std::cout << "Day " << day << " would be " + months[8] << " " << (day - 243) << std::endl; 

	} else if (day > 273 && day < 305) {
		std::cout << "Day " << day << " would be " + months[9] << " " << (day - 273) << std::endl; 

	} else if (day > 304 && day < 335) {
		std::cout << "Day " << day << " would be " + months[10] << " " << (day - 304) << std::endl; 

	} else if (day > 334 && day < 366) {
		std::cout << "Day " << day << " would be " + months[11] << " " << (day - 334) << std::endl; 
	}


}
