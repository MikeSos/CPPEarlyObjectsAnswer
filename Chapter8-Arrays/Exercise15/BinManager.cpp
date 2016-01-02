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

int BinManager::getQuantity(int index) {
	return bin[index].getQty();
}

int BinManager::getNumBins() {
	return numBins;
}


/************************************************************
						addParts

Intakes the index where the specified item is located, and 
how many items you want to be added to that stock. Checks that
the quantity is 1 or above and that the the index is zero or above,
if not it returns false, else it adds the items to the bin's quantity
and returns true.
*************************************************************/

bool BinManager::addParts(int binIndex, int q) {
	if (q < 1 || binIndex < 0) {
		std::cout << "The number has to be over 1." << std::endl;
		return false;
	} else {
		bin[binIndex].setQty(bin[binIndex].getQty() + q);
		return true;
	}
}


/************************************************************
						removeParts

Intakes the index where the specified item is located, and 
how many items you want to remove from that stock. Checks that
the quantity is 1 or above and that the the index is zero or above
(returns false if not), then checks that the amount person wants 
to remove is less than how many items are already in quantity
(returns false it is more), else it will subtract amount wanting
to remove from the current quantity and then return true.
*************************************************************/

bool BinManager::removeParts(int binIndex, int q) {
	if (q < 1 || binIndex < 0) {
		std::cout << "The number has to be over 1." << std::endl;
		return false;
	} else if (bin[binIndex].getQty() < q) {
		std::cout << "You can't withdraw more parts than there are in holding." << std::endl;
		return false;
	} else {
		bin[binIndex].setQty(bin[binIndex].getQty() - q); 
		return true;
	}
}
