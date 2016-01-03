#include <iostream>
#include <string>
using namespace std;

// Structure that holds the name and test score of a student
struct testScore {
		string name;
		double score; 
	};


void sort(testScore *, int);
void showAverage(testScore * , int);

int main() {

	// Initialize a pointer to dynamically allocate an array of structure
	testScore *theScores;
	int numOfTests; // Will hold size of array.


	// Get size of array
	cout << "Please enter how many test scores you would like to enter." << endl;
	cin >> numOfTests;

	// Dynamically allocate an array to hold the number of tests the user requested
	theScores = new testScore[numOfTests];

	// Get the name of the person and their test scores from user, making sure test score is a positive number. 
	for (int i = 0; i < numOfTests; i++) {
		cout << "Please enter a name for the person." << endl;
		cin >> (*(theScores + i)).name;

		cout << "Please enter their test score." << endl;
		cin >> (*(theScores + i)).score;

		while ((*(theScores + i)).score < 0) {
			cout << "Please enter a number above 0." << endl;
			cin >> (*(theScores + i)).score;
		}
	}


	sort(theScores, numOfTests);
	// Print out the contents of the array in ascending order
	cout << "Here is the array in asecnding order." << endl;
	cout << endl;
	for (int i = 0; i < numOfTests; i++) {
		cout << (*(theScores+i)).name << " got a " << (*(theScores + i)).score << " on the test." << endl;
	}

	showAverage(theScores, numOfTests);

	// Free dynamically allocated array
	delete [] theScores;
	theScores = 0;


	return 0;
}


/********************************************************
						sort

This function performs in ascending-order bubble sort. Intakes
a pointer to an array holding structures and the size of the array. 
For an in depth description of this sort go to page 607 in the book.
********************************************************/

void sort(testScore *theArray, int size) {

	testScore temp;
	bool swap;

	// Go through the array one element at a time, testing to see if that structures score is greater than the element to its right
	// If it is swap the structures position, and then set swap to true so that the while loop runs again and tests the element
	// against the next element in line
	do {
		swap = false;
		for (int count = 0; count < (size - 1); count++) { 
			if ((*(theArray + count)).score > (*(theArray+count+1)).score) {
				temp = *(theArray+count);
				*(theArray+count)= *(theArray+count + 1);
				*(theArray+count+1)= temp;
				swap = true;
			}
		}
	} while (swap);
}


/*******************************************************
					showAverage

Intake is a pointer to an array of structures and the size of the array.
Displays the average of the values in the array.
*******************************************************/

void showAverage(testScore *theArray, int size) {

	double total;
	// Go through array and add to total.
	for (int i = 0; i < size; i++) {
		total += (*(theArray + i)).score;
	}
	// Output the average.
	cout << "The average of the test scores is " << total / size << " ." << endl;

}







