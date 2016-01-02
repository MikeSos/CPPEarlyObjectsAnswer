/* InvBin Specification File */

#ifndef INVBIN_HPP
#define INVBIN_HPP
#include <string>

class InvBin {
private:
	std::string description;
	int qty;

public:
	InvBin(std::string d = "empty", int q = 0) { // Default constructor
		description = d;
		qty = q;
	}
	void setDescription(std::string);
	std::string getDescription();
	void setQty(int);
	int getQty();

};



#endif