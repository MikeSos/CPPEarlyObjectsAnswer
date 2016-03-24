// Chapter 11 Excercise 1 - Check Writing


#include <iostream>
#include <string>
#include "Numbers.hpp"


int main() {

	
	std::cout << "Note: A number like 34 will just print out like three four instead of thirty four." << std::endl;
	sleep(2);

	int userNumber;

	std::cout << "Please enter a number between 1 and 9999 and we will print out that number in English." << std::endl;
	std::cin >> userNumber; 

	Numbers userChoice(userNumber);
	userChoice.print();



	// To show it works.

	Numbers test1(8560);
	std::cout << "The number 8560 translates to ";
	test1.print();

	Numbers test2(560);
	std::cout << "The number 560 translates to ";
	test2.print();

	Numbers test3(4320);
	std::cout << "The number 4320 translates to ";
	test3.print();

	Numbers test4(999);
	std::cout << "The number 999 translates to ";
	test4.print();

	Numbers test5(24);
	std::cout << "The number 24 translates to ";
	test5.print();

	Numbers test6(8560);
	std::cout << "The number 8560 translates to ";
	test6.print();


	return 0;
}