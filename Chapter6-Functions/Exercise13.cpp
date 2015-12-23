#include <iostream>
using namespace std;

/* This is the answer I came up with from my interpretation of the problem. */


void getInformation(double &, double &, double &);
void orderCost(double, double, double , double shippingCost = 10);


int main() {

	double spoolsOrdered = 0, spoolStock = 0, specialCharges = 0;

	getInformation(spoolsOrdered, spoolStock, specialCharges);


	orderCost(spoolsOrdered, spoolStock, specialCharges);

	return 0;
}




/****************************************************
					getInformation

Input: 3 reference parameters for # spools ordered,
# spools in stock, and special charges
Task: Receive input from user and assign to these vars
******************************************************/

void getInformation(double &spOrder, double &spStock, double &specCharg) {

	cout << "Please enter the number of spools ordered: " << endl;
	cin >> spOrder;

	cout << "Please enter number of spools in stock: " << endl;
	cin >> spStock;

	cout << "Please add any special shipping and handling charges above $10 rate: " << endl;
	cin >> specCharg;

}


/******************************************************************************
									orderCost

Input: Number of ordered spools, spools in stock, if there were any
special charges, and a default argument for shipping cost of $10.
Output: Displays Number of ordered spools ready to ship, number of spools on
backorder, total selling price ready to ship, total shipping cost of ready to ship,
and the total cost.
*******************************************************************************/

void orderCost(double spOrder, double spStock, double specCharg, double shippingCost) {

	// Test to see whether there is enough stock to fill full order, if so then fill full order
	if (spStock >= spOrder) {
		cout << "Number of ordered spools ready to ship from current stock are " << spOrder << endl;
		cout << "0 Spools on backorder." << endl;

		cout << "Total selling price of portion ready to ship is " << spOrder * 100 << endl;
		cout << "Total shipping and handling charges on the portion ready to ship is " << spOrder * shippingCost + specCharg << endl;
		cout << "Total cost of portion ready to ship is " << spOrder * 100 * shippingCost + specCharg << endl;
	} else {
		// Now will account for if the stock amount is less than the order amount. 
		// Will be just switching the spOrder with spStock, and changing the amount of backorder.

		cout << "Number of ordered spools ready to ship from current stock are " << spStock << endl;
		cout << spOrder - spStock << " Spools on backorder." << endl;

		cout << "Total selling price of portion ready to ship is " << spStock * 100 << endl;
		cout << "Total shipping and handling charges on the portion ready to ship is " << spStock * shippingCost + specCharg << endl;
		cout << "Total cost of portion ready to ship is " << spStock * 100 * shippingCost + specCharg << endl;

	}
}














