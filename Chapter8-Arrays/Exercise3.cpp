// 5 Different types  of salsa: mild, medium, sweet, hot and zesty
// Use two parallell five-element arrays.
// One an array of strings that holds five salsa names and 
// an array of ints that holds number of jars sold in the past month for each
// Salsa names stored in an initialization list
// Program should prompt user to enter number of jars sold for each types
// Salsa should then produce a report that displays sales for each salsa type,
// total sales, and the names of the highest and lowest selling products

#include <iostream>
#include <string>
using namespace std;



void theReport(string [], int [], int);


int main() {

	const int SIZE = 5;

	string salsaTypes[SIZE] = {"mild", "medium", "sweet", "hot", "zesty"};
	int jarsSold[SIZE];

	cout << "Please enter the amount of jars sold for each type of salsa in the past month." << endl;
	// Goes one by one saying the type and entering into its parallel position in jars sold.
	for (int i = 0; i < SIZE; i++) {
		cout << "Please enter the amount for " << salsaTypes[i] << " flavor." << endl;
		cin >> jarsSold[i];
	}

	theReport(salsaTypes, jarsSold, SIZE);

}




/*************************************************************
						theReport

Intakes two parallel arrays and their size. Displays a report that
displays sales for each salsa type, total sales, and the names of
the highest selling and lowest selling products.
*************************************************************/

void theReport(string theTypes [], int sales [], int size) {

	int totalSales = 0;

	// Variables to hold the highest and lowest amounts in order to keep track.
	// Strings will hold the names.

	int theHighest = 0;
	int theLowest = 1000000;
	string highest = "";
	string lowest = "";

	for (int i = 0; i < size; i++) {
		// Display sales for the jars.
		cout << "The sales for " << theTypes[i] << " flavor was " << sales[i] << " jars." << endl;

		// Add jars to total sales.
		totalSales += sales[i];

		// Compare it to highest and then lowest.

		if (sales[i] > theHighest) {
			theHighest = sales[i];
			highest = theTypes[i];
		}

		if (sales[i] < theLowest) {
			theLowest = sales[i];
			lowest = theTypes[i];
		}

	}

	cout << "The highest selling product was " << highest << " flavor." << endl;
	cout << "The lowest selling product was " << lowest << " flavor." << endl;
	cout << "Total sales were " << totalSales << endl;


}



