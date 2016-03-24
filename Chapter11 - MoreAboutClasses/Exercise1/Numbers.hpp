// Chapter 11 Excercise 1 - Check Writing

// Numbers Declaration File

#ifndef NUMBERS_HPP
#define NUMBERS_HPP

#include <string>

class Numbers {

private:
	int number;
	static std::string lessThan20[];
	static std::string hundred;
	static std::string thousand;

public:
	Numbers(int);
	void print();
};

#endif