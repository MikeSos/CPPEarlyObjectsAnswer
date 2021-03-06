// Asks for starting size of a population ( min 2), annual birth rate, annual death rate, and num of years
// to display (min 1)
// Display starting population and projected population at end of each year.
// Use a function that calculates and returns the projected new size of population after a year. 
// Formula is N = P(1 + B)( 1 - D)... New population, P Previous pop, b birth rate, d death rate.
// Birth and death rate are usually .032 and .026 aka in decimal form

#include <iostream>
using namespace std;

void getPopulationInfo(double &, double &, double &, int &);
double calculatePopulation(double, double, double);

int main() {

	double startingSize, birthRate, deathRate;
	int yearsToDisplay;

	getPopulationInfo(startingSize, birthRate, deathRate, yearsToDisplay);

	// Display the population for the number of years asked to display.
	for (int i = 1; i < yearsToDisplay + 1; i++) {
		cout << "The starting population at start of the year " << i << " is " << startingSize << endl;
		cout << "The new projected population after year " <<  i << " is " << calculatePopulation(startingSize, birthRate, deathRate) << endl;

		// Set the starting size to projected calculaiton for the end of the current year
		startingSize = calculatePopulation(startingSize, birthRate, deathRate);

	}

	return 0;
}

/*********************************************************
					getPopulationInfo

Input: 4 Reference variables for starting size of population, 
annual birth rate, annual death rate, and num of years to display
Task: Set these variables based off user input.
**********************************************************/

void getPopulationInfo(double &startPop, double &birthRate, double &deathRate, int &numOfYears) {

	cout << "Please enter the starting size of a population. Minimum of two." << endl;
	cin >> startPop;
	while (startPop <= 2) {
		cout << "Reenter. Make it more than 2." << endl;
		cin >> startPop;
	}

	cout << "Please enter annual birth rate in decimals." << endl;
	cin >> birthRate;

	cout << "Please enter death rate in decimals." << endl;
	cin >> deathRate;

	cout << "Please enter the amount of years you want displayed. Minimum of 1." << endl;
	cin >> numOfYears;
	while (numOfYears <= 1) {
		cout << "Reenter and make it more than 1." << endl;
		cin >> numOfYears;
	}
}

/***********************************************************
					CalculatePopulation

Input: A starting size of population, annual birth rate, and
annual death rate.
Output: Returns projected new size of the population after a year.
Equation given is N = P(1+B)(1-D)
***************************************************************/

double calculatePopulation(double startSize, double birthRate, double deathRate) {
	return startSize * (1 + birthRate) * (1 - deathRate);
}
