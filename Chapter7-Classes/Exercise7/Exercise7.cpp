// Inventory Implementation file
// TBH I don't like how this question was written.

#include "Exercise7.hpp"


/********************************************************
					Default Constructor

Initialize all data members to 0.
*********************************************************/

Inventory::Inventory() {
	itemNumber = 0;
	quantity = 0;
	costPerUnit = 0;
	totalCost = 0;
}


/********************************************************
					Overload Constructor

Intakes item number, quantity, and the cost per unit. 
Sets variables with the set functions, and also sets
total cost with the setTotalCost function.
*********************************************************/

Inventory::Inventory(int itemNum, int quantityy, double costPU) {
	setItemNumber(itemNum);
	setQuantity(quantityy);
	setCostPerUnit(costPU);
	setTotalCost();
}

/*********************************
			Set Functions
*********************************/


void Inventory::setItemNumber(int itemNum) {
	itemNumber = itemNum;
}

void Inventory::setQuantity(int quantityy) {
	quantity = quantityy;
}

void Inventory::setCostPerUnit(double costPU) {
	costPerUnit = costPU;
}

// This will set total cost by multiplying costPerUnit and Quantity

void Inventory::setTotalCost(){
	totalCost = costPerUnit * quantity;
}



/***********************************
			Get Functions	
************************************/


int Inventory::getItemNumber() {
	return itemNumber;
}

int Inventory::getQuantity() {
	return quantity;
}

double Inventory::getCostPerUnit() {
	return costPerUnit;
}

double Inventory::getTotalCost() {
	return totalCost;
}


