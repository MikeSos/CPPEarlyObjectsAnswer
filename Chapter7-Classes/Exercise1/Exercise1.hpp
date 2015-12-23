// Data members to store month, day, and year
// Three parameter defaul constructor that allows date to be set at time a new Date object is created
// If no argument are passed, a constructor with 1, 1, 2001
// If one of the values are invalid then set the default argument of 1, 1, 2001 should be set 
// Print date in following formats

// Exercise 1 specification file

#ifndef EXERCISE1_HPP
#define EXERCISE1_HPP

class Date {

private: 
	int month, day, year;

public:
	Date();
	Date(int, int, int);
	void setMonth(int);
	void setDay(int);
	void setYear(int);
	bool testDay(int, int);
	void printFormatOne();
	void printFormatTwo();
	void printFormatThree();

};


#endif