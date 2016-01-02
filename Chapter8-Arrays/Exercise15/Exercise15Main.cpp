

#include <iostream>
#include <string>
#include "BinManager.hpp"


bool menu(BinManager &);
void displayReport(BinManager);
int getAndValidateChoice(BinManager);
void addOrRemove(BinManager &, int);


int main() {

	// Two arrays to be used to initialize BinManager
	std::string itemDescrips[9] = {"regular pliers", "n. nose pliers", "screwdriver", "p. head screw driver", "wrench-large", "wrench-small", "drill", "cordless drill", "hand saw"};
	int amount[9] = {25, 5, 25, 6, 7, 18, 51, 16, 12};

	BinManager theBins(9, itemDescrips, amount);

	while(menu(theBins)); // Will continue to run allowing user to add or remove items until they choose to quit, aka it returns false

	return 0;
}


/************************************************************
						menu

Intakes a BinManager object. 
Displays a menu that asks the user to pick a bin number that they
want to choose, if they want a report, or if if they want to quit,  
if quit then displays a report and breaks, else ask them to pick 
if they want to add or remove items (validating their response) and
do that and confirm it, and then repeat the process.
Will return a true or false based on if the person wants to quit the
program.
*************************************************************/
bool menu(BinManager &list) {

	int locationChoice; // Hold their choice number, aka the index location

 	// Ask them to pick a bin, and them display a report of all the items, their location, or their quantity
	std::cout << "Pick one of the bins to add to or remove stuff from, or if you want to quit." << std::endl;
	displayReport(list);

	// Allows the quit option to be the last option on the list
	std::cout << list.getNumBins() << ". " << "Quit" << std::endl;
	locationChoice = getAndValidateChoice(list);

	if (locationChoice == list.getNumBins()) { // Means they want to quit and will break out of the loop
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "Here is your final report after all of your changes." << std::endl;
		displayReport(list);
		return false; 
	}

	addOrRemove(list, locationChoice);



	return true; // Will start the process over again.


}

// Display a menu function
// Get and validate the user's choice
// Carry out necessary activities to handle that choice. AKa adding items to a bins, or removing items from a bin,
// and displaying a report of all bins

/************************************************************
						displayReport

Intakes a list of bins and displays a report of the index of 
where each item is, what type of item it is, and how many there are of that type. 
*************************************************************/

void displayReport(BinManager list) {
	// Go through each position in the array and print out the description and quantity in the object.
	for (int i = 1; i < list.getNumBins(); i++) {
		std::cout << i << ". " << list.getDescription(i) << " " << list.getQuantity(i) << std::endl;
	}
}


/************************************************************
					getAndValidateChoice

Intakes a binManager object. Asks the user to pick a choice,
the allowable numbers will be from 1 to the size of the binManager
objects numBins, will continue to ask until a valid number is entered.
Then will return that number.
*************************************************************/

int getAndValidateChoice(BinManager list) {
	int theirChoice;
	do {
		std::cout << "Pick an item by picking the number on the left, its index." << std::endl;
		std::cin >> theirChoice;
		std::cin.ignore(100, '\n'); // Needed to clear buffer in case someone enters a decimal which would cause issues

		if (theirChoice < 1 || theirChoice > list.getNumBins()) {
			std::cout << "Please enter a valid number from the list." << std::endl;
		}
	} while (theirChoice < 1 || theirChoice > list.getNumBins());

	return theirChoice;
}

/************************************************************
					addOrRemove

Intakes a list by reference.
Asks the user if they want to add or remove an object, making sure
they enter a valid number. Then gets a quantity amount for many units to add or remove, 
then will do it, and will let user know if it was successful or not,
telling them why it wasn't successful if it didn't happen.
*************************************************************/

void addOrRemove(BinManager &aList, int loc) {
	int addRemove; // Hold their choice
	int quantity; // Hold the amount they want to add or remove
	bool result;

	std::cout << "Press 1 if you want to add items to choice you just made, or 0 to remove items." << std::endl;
	do {
		std::cin >> addRemove;
		std::cin.ignore(100, '\n'); // Prevent issues with decimals

		if (addRemove > 1 || addRemove < 0 ) {
			std::cout << "Please enter a 1 to add items, or a 0 to remove items." << std::endl;
		}
	} while (addRemove > 1 || addRemove < 0);

	// Get how much they want to add or remove.
	std::cout << "Please enter the amount you wish to add or remove. Making sure it is positive." << std::endl;
	std::cin >> quantity;
	std::cin.ignore(100, '\n'); // Prevent issues with decimal.


	if (addRemove == 1) {
		result = aList.addParts(loc, quantity); // The two functions account for validating the quantity returns true or false if it was successful
	} else if (addRemove == 0) {
		result = aList.removeParts(loc, quantity);
	}

	if (result == true) {
		std::cout << "The procedure was a success." << std::endl;
	}
	
}




