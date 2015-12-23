// Implementation file

#include "Exercise6.hpp"

/***************************
	Default Constructor

Will set taxRate to 0.065
****************************/


Tips::Tips() {
	taxRate = 0.065;
}

/********************************
		Overload Constructor

Intakes a number and sets that to
the tax rate.
**********************************/
Tips::Tips(double taxR) {
	taxRate = taxR;

}


/*********************************************
				computeTip

Inptakes the total amount of the bill and the
desired tip rate. Calculates how much one 
should tip and returns that after taking out
the tax amount from the bill.
**********************************************/

double Tips::computeTip(double totalBill, double tipRate) {
	return (totalBill - (totalBill * taxRate)) * tipRate;
}