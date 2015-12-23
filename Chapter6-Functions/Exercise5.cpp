#include <iostream>
using namespace std;

// Just a note.
//
// I don't really like this problem, since at this point in the book,
// it requires having (at least the way I solved it) to put in inputs in 
// a specific order in order for the function to work properly or else
// the location and correct sales amounts will be mixed up.


double getSales(string);
void findHighest(double, double, double, double);

int main() {

	// Variables to hold sales amount.
	double Northeast, Southeast, Northwest, Southwest;

	Northeast = getSales("Northeast"); 
	Southeast = getSales("Southeast");
	Northwest = getSales("Northwest");
	Southwest = getSales("Southwest");
	findHighest(Northeast, Southeast, Northwest, Southwest);

	return 0;

}



/***************************************************
						getSales

Input: Name of a division
Task: Asks users for a divisions quarterly
sales figure, validating that it is not less than 0
Output: Returns the input.
********************************************************/

double getSales(string division) {

	// To hold sales
	double amount;

	// Request and store sales amount. If less than, 0 will ask again.
	do {
	cout << "Please enter " << division << " sales. " << endl;
	cin >> amount;
} while (amount < 0);

	return amount;
}


/********************************************************
						findHighest

Input: Four sales totals.
Output: Prints name of highest grossing division and its
sales figures.
********************************************************/

void findHighest(double Northeast, double Southeast, double Northwest, double Southwest) {

	// Finds out if Northeast is the largest by comparing it against all others. Will do the same for the other 3.
	if (Northeast > Southeast && Northeast > Northwest && Northeast > Southwest)
		cout << "The highest grossing division is the Northeast with $" << Northeast << " in sales." << endl;

	if (Southeast > Northeast && Southeast > Northwest && Southeast > Southwest)
		cout << "The highest grossing division is the Southeast with $" << Southeast << " in sales." << endl;

	if (Northwest > Southeast && Northwest > Northeast && Northwest > Southwest)
		cout << "The highest grossing division is the Northwest with $" << Northwest << " in sales." << endl;

	if (Southwest > Northeast && Southwest > Northwest && Southwest > Southeast)
		cout << "The highest grossing division is the Southwest with $" << Southwest << " in sales." << endl;
}

