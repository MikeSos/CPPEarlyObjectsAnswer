#include <iostream>
#include "Exercise1.cpp"

int main() {

	// The enter way is (month, day, year);
	Date one;
	Date two(44, 10, 1990); // This should be invalid so ends up as 1/1/1
	Date three(3, 3, 3);
	Date four(12, 12, 2015);

	one.printFormatOne();
	one.printFormatTwo();
	one.printFormatThree();

	two.printFormatOne();
	two.printFormatTwo();
	two.printFormatThree();

	three.printFormatOne();
	three.printFormatTwo();
	three.printFormatThree();

	four.printFormatOne();
	four.printFormatTwo();
	four.printFormatThree();


}
