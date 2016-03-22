

#include <iostream>
#include <string>
#include "BinManager.hpp"


bool menu(BinManager &);
void displayReport(BinManager);
std::string getAndValidateChoice(BinManager);
void addOrRemove(BinManager &, std::string);


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
Displays a report of the bins, requests a users input for a string,
and then if that string is in the list, it will add or remove the quantity
and return true else will tell them their choice is invalid and return false.
*************************************************************/
bool menu(BinManager &list) {

	std::string locationChoice; // Hold their choice location

 	// Ask them to pick a bin, and them display a report of all the items, their location, or their quantity
	std::cout << "Pick one of the bins to add to or remove stuff from, or if you want to quit." << std::endl;
	displayReport(list);

	// Allows the quit option to be the last option on the list
	std::cout << list.getNumBins() << ". " << "Quit" << std::endl;
	locationChoice = getAndValidateChoice(list);

	if (list.linearSearch(locationChoice, list.getNumBins()) == -1) { 
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "That choice isn't in the bin. So Here is your final report after all of your changes." << std::endl;
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
	for (int i = 0; i < list.getNumBins(); i++) {
		std::cout << i << ". " << list.getDescription(i) << " " << list.getQuantity(list.getDescription(i)) << std::endl;
	}
}


/************************************************************
					getAndValidateChoice

Intakes a binManager object. Asks user for a string that will end
up being used to search through the binManager array.
*************************************************************/

std::string getAndValidateChoice(BinManager list) {
	std::string theirChoice;

	std::cout << "Enter a string for what bin you want to add to." << std::endl;
	std::getline(std::cin, theirChoice);


	return theirChoice;
}

/************************************************************
					addOrRemove

Intakes a list by reference and an item description for where to add or remove.
Asks the user if they want to add or remove an object, making sure
they enter a valid number. Then gets a quantity amount for many units to add or remove, 
then will do it, and will let user know if it was successful or not,
telling them why it wasn't successful if it didn't happen.
*************************************************************/

void addOrRemove(BinManager &aList, std::string itemDescription) {
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
		result = aList.addParts(itemDescription, quantity); // The two functions account for validating the quantity returns true or false if it was successful
	} else if (addRemove == 0) {
		result = aList.removeParts(itemDescription, quantity);
	}

	if (result == true) {
		std::cout << "The procedure was a success." << std::endl;
	}
	
}




