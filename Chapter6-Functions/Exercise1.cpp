#include <iostream>
#include <iomanip>
using namespace std;


double calculateRetail(double, double);

int main() {

	// Set empty variables to collect the  values
	double cost, markup;

	// Collect the user's values for the two variables.
	cout << "Please enter the cost of the item and then its markup percentage: " << endl;
	cin >> cost >> markup;

	// This will set the decimal precision so that a 7.50 is shown rather than 7.5
	cout << fixed << setprecision(2);
	cout << "If an item's wholesale cost is " << cost << " and its markup percentage is " << markup 
	<< "%, then the item's retail price is " << calculateRetail(cost, markup) << endl;
	// sent to next line for readability

	return 0;
}


/****************************************
			calculateRetail

Input: Wholesale cost and markup %
Output: Retail price of item
****************************************/

double calculateRetail(double c, double m) {
	return c + ((m / 100) * c);
}