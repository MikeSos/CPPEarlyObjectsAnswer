#include <iostream>
#include <cmath> // For the pow function
using namespace std;

double presentValue(double, double, double);


int main() {

	// You want 10,000 with an interest rate of 1% and 10 years
	// You need to put in
	cout << presentValue(10000, .01, 10) << endl;


	return 0;
}


/***************************************************************
				presentValue

Input: Future value you want it to be, Annual interest rate, and 
number of years it will be held.
Output: Present value, aka what you would need to put in to hit 
the future value.
****************************************************************/

double presentValue(double futureValue, double annualIR, double numYears) {
	// Equation in book
	return futureValue / (pow((1 + annualIR), numYears));
}