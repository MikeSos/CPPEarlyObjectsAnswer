// Inventory Specification File
// TBH I don't like how this question was written.

#ifndef EXERCISE7_HPP
#define EXERCISE7_HPP

class Inventory {

private:
	int itemNumber, quantity;
	double costPerUnit, totalCost;

public:
	Inventory();
	Inventory(int, int, double);
	void setItemNumber(int);
	void setQuantity(int);
	void setCostPerUnit(double);
	void setTotalCost();
	int getItemNumber();
	int getQuantity();
	double getCostPerUnit();
	double getTotalCost();

};

#endif