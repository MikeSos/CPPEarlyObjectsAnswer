/* Bin Manager implementation file */

#include "BinManager.hpp"
#include <iostream>
#include <string>



/************************************************************
					OVERLOAD CONSTRUCTOR

My way of doing it is slightly different than the books.
Intakes size of the strings and quantity arrays, sets this size
to the numBins in use(since they will soon be in use), 
goes through each array starting at 0 and enters in a new
 description and quantity at each position. 
*************************************************************/

BinManager::BinManager(int size, std::string d[], int q[]) {
	
	// Adding 1 to numBins and starting the for loop at 1 instead of 0
	// to account for the fact that the book wants the bin index to be
	// from 1 to 9. So bin[0] will be left empty. Have i - 1 for the
	// positions of the parallel arrays when adding their values to the bin array
	// to account for the fact that they start at 0, so i needs to be incremented down 1 to account for that.
	numBins = size + 1;
	for (int i = 1; i < numBins; i++) {
		bin[i].setDescription(d[i-1]);
		bin[i].setQty(q[i-1]);
	}
}


/*************************
		GET FUNCTIONS
*************************/


std::string BinManager::getDescription(int index) {
	return bin[index].getDescription();
}

int BinManager::getQuantity(std::string itemDescription) {
	return bin[linearSearch(itemDescription, numBins)].getQty();
}

int BinManager::getNumBins() {
	return numBins;
}


/************************************************************
						addParts

Intakes a string for a possible location in the array, and 
how many items you want to be added to that stock. Adds the quanity
to pre-existing quantity. 
*************************************************************/

bool BinManager::addParts(std::string itemDescription, int q) {
	if (q < 1 || linearSearch(itemDescription, numBins) < 0) {
		std::cout << "The number has to be over 1 or there is no bin with that description." << std::endl;
		return false;
	} else {
		bin[linearSearch(itemDescription, numBins)].setQty(bin[linearSearch(itemDescription, numBins)].getQty() + q);
		return true;
	}
}


/************************************************************
						removeParts

Intakes a string that is a possible locaiton in the InvBin array,
and an int for quantity to be removed. If the amount of quantity
can be removed then it will be removed.
*************************************************************/

bool BinManager::removeParts(std::string itemDescription, int q) {
	if (q < 1 || linearSearch(itemDescription, numBins) < 0) {
		std::cout << "The number has to be over 1." << std::endl;
		return false;
	} else if (bin[linearSearch(itemDescription, numBins)].getQty() < q) {
		std::cout << "You can't withdraw more parts than there are in holding." << std::endl;
		return false;
	} else {
		bin[linearSearch(itemDescription, numBins)].setQty(bin[linearSearch(itemDescription, numBins)].getQty() - q); 
		return true;
	}
}



/************************************************************
						linearSearch

Does a linear search on the InvBin array based on the string
input and returns the int of its position.
*************************************************************/


int BinManager::linearSearch(std::string itemDescription, int size) {

	int index = 0;
	int position = -1;
	bool found = false;

	while (index < size && !found) {

		if (bin[index].getDescription() == itemDescription) {

			found = true;
			position = index;
		}
		index++;
	}
	return position;
}
