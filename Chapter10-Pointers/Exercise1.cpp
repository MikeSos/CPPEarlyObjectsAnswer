#include <iostream>
#include <string>
using namespace std;


void sort(double *, int);
void showAverage(double * , int);

int main() {

	// Initialize a pointer to dynamically allocate an array
	double *testScores;
	int numOfTests; // Will hold size of array.


	// Get size of array
	cout << "Please enter how many test scores you would like to enter." << endl;
	cin >> numOfTests;

	// Dynamically allocate an array to hold the number of tests the user requested
	testScores = new double[numOfTests];

	// Get the test scores from user, making sure they are positive numbers. 
	cout << "Please enter the test scores." << endl;
	for (int i = 0; i < numOfTests; i++) {
		cin >> *(testScores + i);

		while (*(testScores + i) < 0) {
			cout << "Please enter a number above 0." << endl;
			cin >> *(testScores + i);
		}
	}


	sort(testScores, numOfTests);
	// Print out the contents of the array in ascending order
	cout << "Here is the array in asecnding order." << endl;
	cout << endl;
	for (int i = 0; i < numOfTests; i++) {
		cout << *(testScores + i) << endl;
	}

	showAverage(testScores, numOfTests);

	// Free dynamically allocated array
	delete [] testScores;
	testScores = 0;


	return 0;
}


/********************************************************
						sort

This function performs in ascending-order bubble sort. Intakes
a pointer to an array and the size of the array. 
For an in depth description of this sort go to page 607 in the book.
********************************************************/

void sort(double *theArray, int size) {

	double temp;
	bool swap;

	// Go through the array one element at a time, testing to see if it greater than the element to its right
	// If it is swap their positions, and then set swap to true so that the while loop runs again and tests the element
	// against the next element in line
	do {
		swap = false;
		for (int count = 0; count < (size - 1); count++) { // Can also do *(theArray + count) instead of theArray[count]
			if (theArray[count] > theArray[count+1]) {
				temp = (theArray[count]);
				theArray[count] = theArray[count + 1];
				theArray[count+1] = temp;
				swap = true;
			}
		}
	} while (swap);
}


/*******************************************************
					showAverage

Intake is a pointer to an array and the size of the array.
Displays the average of the values in the array.
*******************************************************/

void showAverage(double *theArray, int size) {

	double total;
	// Go through array and add to total.
	for (int i = 0; i < size; i++) {
		total += *(theArray + i);
	}
	// Output the average.
	cout << "The average of the test scores is " << total / size << " ." << endl;

}






