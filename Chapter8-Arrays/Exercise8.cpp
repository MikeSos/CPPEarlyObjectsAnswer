// I packed the object implementation and specification along with the main test into the
// same file for convenience sake, since it is a small program.


#include <iostream>
#include <string>
using namespace std;

/********************** Product class Specification ************************/

class Product {
	private:
		string productName;
		int quantity;

	public:
		Product(string);
		void setQuantity();
		int getQuantity();
		string getProductName();

};



// theReport function prototype
void theReport(Product [], int );

int main() {

	const int SIZE = 5;

	Product salsas[SIZE] = {Product("mild"), Product("medium"), Product("sweet"), Product("hot"), Product("zesty")};

	cout << "Please enter the amount of jars sold for each type of salsa in the past month." << endl;
	// Goes one by one saying the type and entering into its parallel position in jars sold.
	for (int i = 0; i < SIZE; i++) {
		salsas[i].setQuantity();
	}

	theReport(salsas, SIZE);

	return 0;
}


/**************************************************
					theReport

Intakes an array of Product and its size. Displays
the name of the jar with the highest amount sold and
how much was sold, and does the same for the lowest.
Also displays how much in total were sold.
****************************************************/

void theReport(Product theArray [], int size) {

	int totalSales = 0;

	// Variables to hold the highest and lowest amounts in order to keep track.
	// Strings will hold the names.

	int theHighest = 0;
	int theLowest = 1000000;
	string highest = "";
	string lowest = "";

	for (int i = 0; i < size; i++) {
		// Display sales for the jars.
		cout << "The sales for " << theArray[i].getProductName() << " flavor was " << theArray[i].getQuantity() << " jars." << endl;

		// Add jars to total sales.
		totalSales += theArray[i].getQuantity();

		// Compare it to highest and then lowest.

		if (theArray[i].getQuantity() > theHighest) {
			theHighest = theArray[i].getQuantity();
			highest = theArray[i].getProductName();
		}

		if (theArray[i].getQuantity() < theLowest) {
			theLowest = theArray[i].getQuantity();
			lowest = theArray[i].getProductName();
		}

	}

	cout << "The highest selling product was " << highest << " flavor." << endl;
	cout << "The lowest selling product was " << lowest << " flavor." << endl;
	cout << "Total sales were " << totalSales << endl;


}


/********************** Product class Implementation ************************/



/**********************************
		Default Constructor

Intakes a string and sets it to
the productName and quantity to 0.
**********************************/


Product::Product(string theName) {
	productName = theName;
	quantity = 0;
}


/*************************************
			setQuantity

Asks the user to enter an amount for the
sales of the product and sets it to 
quantity.
**************************************/

void Product::setQuantity() {

	cout << "Please enter the amount of sales of " << getProductName() << " jars." << endl;
	cin >> quantity;

}


/******************************
		get Functions
*******************************/

int Product::getQuantity() {
	return quantity;
}

string Product::getProductName() {
	return productName;
}


