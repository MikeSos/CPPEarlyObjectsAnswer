
#include <iostream>
#include "Exercise7.cpp"
using namespace std;


int main() {

	int userItemNum, userQuantity;
	double userCost;

	// Get the user inputs for the above variables making sure all inputs are not negative. 
	do { 
		cout << "Please enter the item number of the thing you are buying and how much of it you are buying. " << endl;
		cin >> userItemNum >> userQuantity;

		cout << "Please enter the cost of the item." << endl;
		cin >> userCost;

		if (userItemNum < 0 || userQuantity < 0 || userCost < 0) {
			cout << "Please make sure all inputs are 0 or above." << endl;
		}
	} while (userItemNum < 0 || userQuantity < 0 || userCost < 0);

	// Test the function

	Inventory one(userItemNum, userQuantity, userCost);
	cout << "Here is the item number " << one.getItemNumber() << endl;
	cout << "Here is the quantity " << one.getQuantity() << endl;
	cout << "Here is the cost per unit " << one.getCostPerUnit() << endl;
	cout << "Here is the total cost " << one.getTotalCost() << endl;

	return 0;
}
