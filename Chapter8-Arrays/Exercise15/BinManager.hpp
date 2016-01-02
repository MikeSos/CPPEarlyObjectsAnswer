/* BinManager Specification file*/

#ifndef BINMANAGER_HPP
#define BINMANAGER_HPP

#include "InvBin.hpp"
#include <string>



class BinManager {

private:
	InvBin bin[30];
	int numBins;

public:
	BinManager() {  // Default Constructor
		numBins = 0;
	}
	BinManager(int, std::string [], int []);
	std::string getDescription(int);
	int getQuantity(int);
	int getNumBins();
	bool addParts(int, int);
	bool removeParts(int, int);
};

#endif
