// Keep track of how many pounds of food each of its three monkeys eats each day during a typical week
// Stores information in a two dimensional 3 x 7 array
// Have user input data for each monkey
// Create a report that includes average amount of food eaten per day by the whole family of monkeys
// least amount of food eaten during the monkey by any one monkey
// greatest amount of food eaten during the week by any one monkey

#include <iostream>
#include <string>
using namespace std;

const int DAYS = 7;
const int MONKEYS = 3;


void theReport(int [][DAYS], int);

int main() {


int theMonkeys[MONKEYS][DAYS];


// Get the amount of food eaten each day by each monkey
for (int i = 0; i < MONKEYS; i++) {
	cout << "Please enter the amount of food in lbs eaten by monkey " << i + 1 << endl; // Adding one because I prefer
	for (int j = 0; j < DAYS; j++) {													//  it says Monkey 1 than monkey 0
		cout << "Please enter the amount for Day " << j + 1<< endl; // Same thing as above comment but for the days.
		cin >> theMonkeys[i][j];
	}
}

theReport(theMonkeys, MONKEYS);
return 0;

}

/****************************************************
					theReport

Intakes a 2d array and its row size. Displays a report
that tells us the highest amount eaten by all the monkeys 
during the week and the lowest amount, along with how
much the average of much the family ate during the week.
****************************************************/

void theReport(int theArray[][DAYS], int monkeyAmount) {



	// Holder variables. First one will hold the average amount eaten each day. 
	int averageAmountEaten[DAYS] = {0, 0, 0, 0, 0, 0, 0};

	int least = 10000;
	int highest = 0;
	int totalEaten = 0;

	for (int i = 0; i < monkeyAmount; i++) {
		for (int j = 0; j < DAYS; j++ ) {

			if (theArray[i][j] < least) {
				least = theArray[i][j];
			}

			if (theArray[i][j] > highest) {
				highest = theArray[i][j];
			}
			// Add the amount of food that monkey ate during that day to the total for how much the whole family ate that day.
			averageAmountEaten[j] += theArray[i][j];
		}
	}

	cout << "The least amount of food eaten during the week by any monkey was " << least << " pounds." << endl;
	cout << "The highest amount of food eaten during the week by any monkey was " << highest << " pounds." << endl;
	
	for (int i = 0; i < DAYS; i++) {
		// So it doesn't say day 0. I add one to i below. 
		cout << "The average amount eaten by the whole family on day " << i + 1 << " was " << averageAmountEaten[i] / 3 << " lbs." << endl;
	}


}




