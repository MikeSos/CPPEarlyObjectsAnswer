#include <iostream>
using namespace std;

double didStockProfit(double, double, double, double, double);

int main() {

	int numOfSales;
	double amountEarned = 0;
	double numberOfShares, purchasePricePerShare, purchaseComishPaid, salePricePerShare, saleComishPaid;

	// Get num of sales from user.
	cout << "Please enter the amount of stock sales you made. " << endl;
	cin >> numOfSales;

	while (numOfSales != 0) {

		cout << "Plese enter the number of shares you bought: " << endl;
		cin >> numberOfShares;

		cout << "Please enter price per share when you purchased them: " << endl;
		cin >> purchasePricePerShare;

		cout << "Please enter how much purchase comission you paid to stockbroker: " << endl;
		cin >> purchaseComishPaid;

		cout << "Please enter what the price per share was when you sold them: " << endl;
		cin >> salePricePerShare;

		cout << "Please enter amount you paid in sale commission to stockbroker: " << endl;
		cin >> saleComishPaid;

		amountEarned += (didStockProfit(numberOfShares, purchasePricePerShare, purchaseComishPaid, salePricePerShare, saleComishPaid));
		
		// One less sale to enter
		numOfSales -= 1;
	}

	cout << "You made, or loss if a negative number, " << amountEarned << " in dollars." << endl;
	// Will display in scientific notation if profit or loss is in 7 figures. 

	return 0;
}




/*******************************************************************
				didStockProfit

Input: Number of share, purchase price per share, purchase commission paid, 
sale price per share, sale commission paid.
Output: Returns the profit or loss from sale of stock
**********************************************************************/

double didStockProfit(double shares, double purchPrice, double purchComishPaid, double salePrice, double saleComishPaid) {

	// Profit = ((NS * SP) - SC) - ((NS * PP) + PC)

	return ((shares * salePrice) - saleComishPaid) - ((shares * purchPrice) + purchComishPaid);

}