// Chapter 11  Problem 2 - Day of The Year


#ifndef DAYOFYEAR_HPP
#define DAYOFYEAR_HPP

#include <string>


class DayOfYear {

private:
	int day;
	static std::string months[];

public:
	DayOfYear(int);
	void print();



};


#endif