
#include <iostream>
using namespace std;

void getData(double [], int);
double totalRainfall(double [], int);
double averageRainfall(double [], int);
int driestMonth(double [], int);
int wettestMonth(double [], int);
void displayReport(double [], int);

int main() {

	const int SIZE = 12;
	double theMonths[SIZE];

	getData(theMonths, SIZE);
	displayReport(theMonths, SIZE);

	return 0;
}

/*******************************************************
						getData

Asks user for rainfall for each month and stores information
in an array.
*******************************************************/


void getData(double anArray[], int SIZE) {
	cout << "Please enter the amount of rain in inches that occurred during each month. Starting from January." << endl;
	for (int i = 0; i < SIZE; i++) {
		cin >> anArray[i];
	}
}




/*******************************************************
					totalRainfall

Calculate and return the total amount of rainfall that
happened during the year.
*******************************************************/

double totalRainfall(double anArray[], int SIZE) {

	double amount = 0;

	for (int i = 0; i < SIZE; i++) {
		amount += anArray[i];
	}

	return amount;

}




/*******************************************************
						averageRainfall

Calculate and return the average amount of rainfall that
happened over the year.
*******************************************************/

double averageRainfall(double anArray[], int SIZE) {

	double amount = 0;

	for (int i = 0; i < SIZE; i++) {
		amount += anArray[i];
	}

	return amount / 12;

}





/*******************************************************
					driestMonth

Find and return position number of the driest month of the year.
*******************************************************/

int driestMonth(double anArray[], int SIZE) {

	int holdNumber = 0;
	double lowestAmount = 5000;

	// Go through array and keep track of the lowest amount and the number in the array it occurred. 
	for (int i = 0; i < SIZE; i++) {

		if (anArray[i] < lowestAmount) {
			lowestAmount = anArray[i];
			holdNumber = i;
		}
	}
	// Return the position of where the lowest amount is
	return holdNumber;

}


/*******************************************************
					wettestMonth

Find and return position number of wettest month of year.
*******************************************************/

int wettestMonth(double anArray[], int SIZE) {

	int holdNumber = 0;
	double highestAmount = 0;

	// Go through array and keep track of the lowest amount and the number in the array it occurred. 
	for (int i = 0; i < SIZE; i++) {

		if (anArray[i] > highestAmount) {
			highestAmount = anArray[i];
			holdNumber = i;
		}
	}
	// Return the position of where the lowest amount is
	return holdNumber;

}


/*******************************************************
					displayReport

Intake an array and display a report of the past year's
total rainfall, average monthly rainfall, least amount
of rain that fell, and highest amount of rain that fell.
*******************************************************/

void displayReport(double anArray[], int SIZE) {

	cout << "This past year's rain report." << endl;
	cout << endl;
	cout << "Total rainfall: " << totalRainfall(anArray, SIZE) << " inches." << endl;
	cout << "Average monthly rainfall: " <<averageRainfall(anArray, SIZE) << " inches." << endl;

	// find and display the month of the lowest amount based on the array position returned from 
	// the driestMonth function
	switch(driestMonth(anArray, SIZE)) {
		case 0:
			cout << "The least rain fell in January with " << anArray[0] << " inches." << endl;
			break;
		case 1:
			cout << "The least rain fell in Febuary with " << anArray[1] << " inches." << endl;
			break;
		case 2:
			cout << "The least rain fell in March with " << anArray[2] << " inches." << endl;
			break;
		case 3:
			cout << "The least rain fell in April with " << anArray[3] << " inches." << endl;
			break;
		case 4:
			cout << "The least rain fell in May with " << anArray[4] << " inches." << endl;
			break;
		case 5:
			cout << "The least rain fell in June with " << anArray[5] << " inches." << endl;
			break;
		case 6:
			cout << "The least rain fell in July with " << anArray[6] << " inches." << endl;
			break;
		case 7:
			cout << "The least rain fell in August with " << anArray[7] << " inches." << endl;
			break;
		case 8:
			cout << "The least rain fell in September with " << anArray[8] << " inches." << endl;
			break;
		case 9:
			cout << "The least rain fell in October with " << anArray[9] << " inches." << endl;
			break;
		case 10:
			cout << "The least rain fell in November with " << anArray[10] << " inches." << endl;
			break;
		case 11:
			cout << "The least rain fell in December with " << anArray[11] << " inches." << endl;
			break;

	}

	// find and display the month of the highest amount based on the array position returned from 
	// the wettestMonth function
	switch(wettestMonth(anArray, SIZE)) {
		case 0:
			cout << "The most rain fell in January with " << anArray[0] << " inches." << endl;
			break;
		case 1:
			cout << "The most rain fell in Febuary with " << anArray[1] << " inches." << endl;
			break;
		case 2:
			cout << "The most rain fell in March with " << anArray[2] << " inches." << endl;
			break;
		case 3:
			cout << "The most rain fell in April with " << anArray[3] << " inches." << endl;
			break;
		case 4:
			cout << "The most rain fell in May with " << anArray[4] << " inches." << endl;
			break;
		case 5:
			cout << "The most rain fell in June with " << anArray[5] << " inches." << endl;
			break;
		case 6:
			cout << "The most rain fell in July with " << anArray[6] << " inches." << endl;
			break;
		case 7:
			cout << "The most rain fell in August with " << anArray[7] << " inches." << endl;
			break;
		case 8:
			cout << "The most rain fell in September with " << anArray[8] << " inches." << endl;
			break;
		case 9:
			cout << "The most rain fell in October with " << anArray[9] << " inches." << endl;
			break;
		case 10:
			cout << "The most rain fell in November with " << anArray[10] << " inches." << endl;
			break;
		case 11:
			cout << "The most rain fell in December with " << anArray[11] << " inches." << endl;
			break;

	}

}



