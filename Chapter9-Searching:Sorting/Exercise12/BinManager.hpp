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
	int getQuantity(std::string);
	int getNumBins();
	bool addParts(std::string, int);
	bool removeParts(std::string, int);
	int linearSearch(std::string, int);
};

#endif
