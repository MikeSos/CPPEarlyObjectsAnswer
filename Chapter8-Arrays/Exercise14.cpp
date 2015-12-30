// I put the class information and main test function in one file, instead of multiple files


#include <iostream>
#include <string>
using namespace std;


/********************** Class Specification *********************/

class drinkMachine {
private:
	// Money collected by the machine
	double amountCollected; 

	struct Soda {
		string drinkName;
		double drinkPrice;
		int numOfDrinks;

		// Default constructor for Soda Structure
		Soda(string dN = "", double dP = 0, int nOD = 0) {
			drinkName = dN;
			drinkPrice = dP;
			numOfDrinks = nOD;
		}
	};

	// An array of five Soda structures. Appropriate values to be initialized in default constructor.
	Soda machineInventory[5]; 

	// Private member functions.
	double inputMoney();
	bool checkAvailable(int);
	double getChange(int, double);
	void dailyReport();


public:
	drinkMachine();
	~drinkMachine();
	void displayChoices();
	double buyDrink(int);

};


/**************************** Main Test Program ***************************/





int main()  {

	drinkMachine theMachine;
	double myMoney; // Holds the change received after buying amount
	int choice;

	// Go until a person enters 0 and then jumps out of program.

	do {
		theMachine.displayChoices();
		cin >> choice;

		if (choice > 0 && choice < 6) {
			// cin.ignore will flush buffer in case someone enters a 4.5 which will be set to choice as 4,
			// but will leave a .5 in the keyboard buffer, which will be passed to the input money
			// so needs to be flushed in case this happens
			cin.ignore(1000, '\n');
			myMoney = theMachine.buyDrink(choice);

		} else if (choice > 5 || choice < 0) {
			cout << "Please make a valid choice." << endl;
		} else if (choice == 0) {
			cout << "Bye." << endl;
		}
	} while (choice != 0);


	return 0;
}






/********************* Class Implementation ***********************/





/**************************************************************
						default Constructor

Set each structure location in the machineInventory array
 to a specific drink name, price, and amount of drinks.
**************************************************************/

drinkMachine::drinkMachine() {

	machineInventory[0].drinkName = "Cola";
	machineInventory[0].drinkPrice = 1.00;
	machineInventory[0].numOfDrinks = 20;

	machineInventory[1].drinkName = "Root Beer";
	machineInventory[1].drinkPrice = 1.00;
	machineInventory[1].numOfDrinks = 20;

	machineInventory[2].drinkName = "Orange Soda";
	machineInventory[2].drinkPrice = 1.00;
	machineInventory[2].numOfDrinks = 20;

	machineInventory[3].drinkName = "Grape Soda";
	machineInventory[3].drinkPrice = 1.00;
	machineInventory[3].numOfDrinks = 20;

	machineInventory[4].drinkName = "Bottled Water";
	machineInventory[4].drinkPrice = 1.50;
	machineInventory[4].numOfDrinks = 20;

}




/**************************************************************
						Destructor

Calls the dailyreport function when the object is destroyed.
**************************************************************/

drinkMachine::~drinkMachine() {
	dailyReport();
}




/**************************************************************
						dailyReport

Loops through the machineInventory array and displays how many
cans of each type are left and then shows the total amount
of money that was collected.
**************************************************************/

void drinkMachine::dailyReport() {

	cout << "Here is your daily report." << endl;
	cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << "There are " << machineInventory[i].numOfDrinks << " cans of " << machineInventory[i].drinkName << " left." << endl;
	}
	cout << endl;
	cout << "The total amount of dollars collected today was $" << amountCollected << endl;

}




/************************************************************
						displayChoices

Displays a menu with the drink choices and their cost, and what
number to press in order to select a certain type of drink.
*************************************************************/

void drinkMachine::displayChoices() {
	cout << "Welcome to the drink machine." << endl;
	cout << endl;
	cout << "Here are your drink choices. " << endl;
	cout << "Press the number 1 for Cola. Its cost is $1.00" << endl;
	cout << "Press the number 2 for Root Beer. Its cost is $1.00" << endl;
	cout << "Press the number 3 for Orange soda. Its cost is $1.00" << endl;
	cout << "Press the number 4 for Grape soda. Its cost is $1.00" << endl;
	cout << "Press the number 5 for bottled water. Its cost is $1.50" << endl;
	cout << "Press the number 0 if you wish to quit and don't want any soda." << endl;
}





/**************************************************************
						buyDrink

Intakes choice that the person chose. Collects the person's
money, checks to make sure that they want to make purchase, 
that the soda isn't sold out, and if not, sells them beverage
and returns their change.
**************************************************************/


double drinkMachine::buyDrink(int choice) {

	double theirMoney, theirChange;

	// Use inputMoney() to collect their money and store it in theirMoney
	theirMoney = inputMoney();

	// If they had entered 0 dollars, means they don't want to continue with purchase, so tell them to leave.
	if (theirMoney == 0 ) {
		cout << "Get out of here if you don't want anything!" << endl;
		return 0;
	}

	// Check that the soda they want is in stock, if not return all input money.
	if (checkAvailable(choice) == false) {
		cout << "Sold out. Here is your $" << theirMoney << " back." << endl;
		return theirMoney;
	}

	// Depending on their choice, get the appropriate amount of change, or their original amount of money if they
	// didn't enter enough money
	theirChange = getChange(choice, theirMoney);

	// Check to see if they entered enough money.
	if (theirChange == theirMoney) { 
		cout << "You didn't enter enough money to cover your choice." << endl;
		cout << "Here is your money back, equaling " << theirChange << endl;
		return theirChange;

	// Check to see if their change was 0. 
	} else if (theirChange == 0) {
		cout << "Here is your beverage." << endl;
		cout << "You have no change." << endl;
		return 0;
	} else {
		cout << "Here is your beverage." << endl;
		cout << "And here is your change of " << theirChange << endl;
		return theirChange;
	}
}





/**************************************************************
						inputMoney

Asks and receives money from the user, or a request to stop the
purchase and then returns that. 
**************************************************************/


double drinkMachine::inputMoney() {

	double holdMoney;

	cout << "Please enter your money to buy drink." << endl;

	// Will go until a person enters a valid amount of 0 or above. 0 means they want to end the purchase.
	do {
	cin >> holdMoney;

	if (holdMoney < 0) {
		cout << "Please input a valid amount above 0 or enter 0 if you wish to stop the purchase.";
	}
	} while (holdMoney < 0);

	return holdMoney;

}




/**************************************************************
						checkAvailable

Intakes the number that is the choice the person selected, 
uses that to check if their are still that type of soda available,
and returns true if there is, and false if not.
**************************************************************/


bool drinkMachine::checkAvailable(int choice) {

	// Minus one because an array starts at 0 but the choices start at 1.
	if (machineInventory[choice - 1].numOfDrinks > 0) {
		return true;
	} else {
		return false;
	}
}




/**************************************************************
						getChange

Intakes the choice number that the person entered, and the amount
of money they inputted from inputMoney. Collects the amount for
the item and returns the change.
**************************************************************/

double drinkMachine::getChange(int choice, double theirMoney) {

	// Checks to make sure they have enough money to cover the drink price
	// choices start at 1 and not 0 like the array does, so choice - 1 is correct position of item
	if (theirMoney >= machineInventory[choice-1].drinkPrice) {

		// Decrease quantity, accounting for the fact that choices starts at 1 instead of 0
		machineInventory[choice-1].numOfDrinks -= 1;

		// Add the cost of drink to the amount collected
		amountCollected += machineInventory[choice-1].drinkPrice;

		// return their money minus the cost of item
		return theirMoney - machineInventory[choice-1].drinkPrice;

	} 

	// If this returns, means they didn't enter enough money
	return theirMoney;

}

