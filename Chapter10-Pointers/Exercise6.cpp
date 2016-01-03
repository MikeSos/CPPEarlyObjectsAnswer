
// Problem assumes that the array is already sorted.

// Using an array of doubles and returning double so decimals can be used.

/**********************************************************
						getMedian

Intakes a pointer to an array of doubles and an int for the size
of the array. Finds and returns the median.
**********************************************************/

double getMedian(double *anArray, int size) {

	// If it is odd 
	if (size % 2 != 0) {
		// Median position will be equidistant from both ends, so (size - 1) / 2 is the location
		return *(anArray + ((size - 1) / 2 ));
	}

	// For even. This will target the two locations in the middle, add them together and then divide by 2
	return (*(anArray + (size/2)) + *(anArray + ((size / 2)-1))) / 2;
}