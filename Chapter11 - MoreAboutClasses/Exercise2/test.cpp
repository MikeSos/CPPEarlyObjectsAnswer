// Chapter 11  Problem 2 - Day of The Year

#include <iostream>
#include "DayOfYear.hpp"


int main () {

	DayOfYear Jan1(1);
	DayOfYear Jan15(15);
	DayOfYear Jan31(31);
	DayOfYear Feb1(32);
	DayOfYear Feb15(47);
	DayOfYear Feb28(59);
	DayOfYear December365(365);
	DayOfYear April(120);


	Jan1.print();
	Jan15.print();
	Jan31.print();
	Feb1.print();
	Feb15.print();
	Feb28.print();
	December365.print();
	April.print();
	




	return 0;
}