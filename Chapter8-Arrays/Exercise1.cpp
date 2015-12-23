#include <iostream>
using namespace std;

void getUserAmount(int &);
void enterTestScores(int [], int);
int countPerfect(int [], int);

int main() {

	const int ARRAY_SIZE = 20;
	int testScore[ARRAY_SIZE];
	int userAmountToEnter;

	getUserAmount(userAmountToEnter);
	enterTestScores(testScore, userAmountToEnter);
	cout << countPerfect(testScore, userAmountToEnter) << endl;



	return 0;
}

/*******************************************
				getUserAmount

Intakes a reference variable. Asks user to
enter a number between 1 and 20, and does so
until they correctly do so. Sets that number
to the reference variable.
********************************************/

void getUserAmount(int &userEntryVar) {

	// Get a user amount to enter in array. Make sure it is between 20.
	do {
		cout << "Please enter a number from 1 to 20 for how many test scores you want to enter: " << endl;
		cin >> userEntryVar;

	} while (userEntryVar < 0 || userEntryVar > 20);

}




/****************************************************
				enterTestScores

Intakes an array and how many scores the
user wants entered. Asks user for scores between 0 and 100,
verifying they are and sets them to the appropriately
value.
*****************************************************/


void enterTestScores(int theArray[], int userAmount) {

	int currentScore;
	
	for (int i = 0; i < userAmount; i++) {

		do {
			cout << "Please enter a score between 0 and 100:" << endl;
			cin >> currentScore;
			if (currentScore < 0 || currentScore > 100) {
				cout << "Enter a score between 0 and 100 DAMNIT!!!";
			} 
		} while (currentScore < 0 || currentScore > 100);

		theArray[i] = currentScore;
	}

}



/*********************************************
					countPerfect

Intakes an array and the amount of scores entered.
Keeps a total of how many 100s and then returns
that amount.
************************************************/

int countPerfect(int theArray[], int userAmount) {
	int total = 0;
	for (int i = 0; i < userAmount; i++) {
		if (theArray[i] == 100) {
			total += 1;
		}
	}
	return total;
}




