// Stats Implementation File

#include "Exercise9.hpp"

/****************************************
			Default Constructor

Sets the currentPosition counter to 0 when
the object is created.
****************************************/

Stats::Stats() {
	currentPosition = 0;
}




/****************************************
			storeValue

Intakes a double and stores it in the array
if the array isn't already full. Returns true
if done successfully, and false if it is full.
****************************************/


bool Stats::storeValue(double entry) {

	// Checks to see if it is full.
	if (currentPosition < 30) {
		theArray[currentPosition] = entry;

		// Increment currentPosition 1 to account for new addition to array
		currentPosition += 1;
		return true;
	}

	return false;
}


/****************************************
			getTotal

Returns total amount of rainfall that is
held in the array.
****************************************/

double Stats::getTotal() {

	double totalAmount = 0;

	// Go through array positions for which there are values and add them to the total
	for (int i = 0; i < currentPosition; i++)
		totalAmount += theArray[i];

	return totalAmount;
}



/****************************************
			getAverage

Returns average amount of rainfall.
****************************************/

double Stats::getAverage() {

	return getTotal() / currentPosition;
}



/****************************************
			getLowest

Returns the lowest amount of rainfall that
happened. 
****************************************/


double Stats::getLowest() {

	// Will holdLowest. Set to 10000 because all rainfall will be below this amount
	// so it is just a starting placeholder value
	double holdLowest = 10000;

	// Goes through array. If less than current lowest, will make it new lowest.
	for( int i = 0; i < currentPosition; i++) {
		if (theArray[i] < holdLowest) {
			holdLowest = theArray[i];
		}
	}

	return holdLowest;
}



/****************************************
			getHighest

Returns the lowest amount of rainfall that
happened. 
****************************************/


double Stats::getHighest() {

	// Will hold highest. Set to 0 because all rainfall will be above or equal to this ammount.
	// so it is just a starting placeholder value
	double holdHighest = 0;

	// Goes through array. If current position's amount more than current highest, it becomes new highest
	for( int i = 0; i < currentPosition; i++) {
		if (theArray[i] > holdHighest) {
			holdHighest = theArray[i];
		}
	}

	return holdHighest;
}

