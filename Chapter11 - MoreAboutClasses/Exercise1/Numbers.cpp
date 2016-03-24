// Chapter 11 Excercise 1 - Check Writing

// Numbers Implementation File


#include <iostream>
#include <string>
#include "Numbers.hpp"

// This class is only for numbers between 1 and 9999


// Declare static member variables

std::string Numbers::lessThan20[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
									   "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
										"eighteen", "nineteen"};

	

std::string Numbers::hundred = "hundred";

std::string Numbers::thousand = "thousand";

// Constructor

Numbers::Numbers(int number) {
	this->number = number;
}


// Prints out the English version of the number that was inputted in the constructor

void Numbers::print() {

	std::string toOutput = "";

	if (number > 999 ) {

		// Concats the first number in chain if over 999. The division returns the int
		// That is between 1 and 9;
		toOutput = toOutput + lessThan20[number / 1000] + " " + thousand;
		number = number % 1000;
	}


	if (number > 99) {

		toOutput = toOutput + " " + lessThan20[number / 100] + " " + hundred;
		number = number % 100;
	}


	if (number > 19) {
		
		toOutput = toOutput + " " + lessThan20[number / 10] + " ";
		number = number % 10;

	}


	if (number < 20) {

		toOutput = toOutput + " " + lessThan20[number];
	}


	std::cout << toOutput << std::endl;


}