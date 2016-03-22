/* InvBin Implementation File */

#include "InvBin.hpp"


/*************************
		SET FUNCTIONS
*************************/


void InvBin::setDescription(std::string aString) {
	description = aString;
}


void InvBin::setQty(int q) {
	qty = q;
}


/*************************
		GET FUNCTIONS
*************************/

std::string InvBin::getDescription() {
	return description;
}

int InvBin::getQty() {
	return qty;
}

