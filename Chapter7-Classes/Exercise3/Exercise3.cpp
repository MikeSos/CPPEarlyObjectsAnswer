// 10 Widgets may be produced each hour,
// Class object will calculate how many days it will take to produce any number of Widgets
// Two 8 hour shifts (160 widgets per day)
// Ask user for number of widgets that have been ordered and then display the number of days
// it will take to produce them. 

#include <iostream>
#include "Exercise3.hpp"


/*************************************
			Default Constructor

Sets amount ordered and totalDays to 0.
**************************************/

Widget::Widget() {
	amountOrdered = 0;
	totalDays = 0;
}



/********************************************
			getAndSetAmount

Requests how many widgets they want to order
and sets the response to amount ordered.
*********************************************/

void Widget::getAndSetAmount() {
	std::cout << "How many widgets would you like to order?" << std::endl;
	std::cin >> amountOrdered;
}



/************************************************
					calculateDays

Calculate how many days it will take to fulfill
the order and set that to totalDays.
*************************************************/

void Widget::calculateDays() {
	totalDays = amountOrdered / 160;
}


/*************************************
			displayDays

Displays how many days it will take.
**************************************/

void Widget::displayDays() {
	std::cout << "The number of days it will take is " << totalDays << std::endl;
}

