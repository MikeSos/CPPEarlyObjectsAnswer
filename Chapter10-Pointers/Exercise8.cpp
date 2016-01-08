
// Look at section 10.14 to start to understand how time system works

#include <iostream>
#include <string>
#include <ctime>
using namespace std;


string getMonth(int);
void printDays(int , int);

int main() {


	int month, year;

	cout << "Enter 0 for the month and year whenever you wish to stop." << endl;

	do {

		cout << "Please enter the month ( 1 to 12) and then the year. An invalid number for month will show nothing." << endl;
		cin >> month;
		cin >> year;
		printDays(month, year);

		
	} while (month != 0 && year != 0);

	time_t t = time(NULL);
	tm* timePtr = localtime(&t);

	string monthName;
	// Get string version of month, based on the numbered output from timePtr -> tm_mon
	monthName = getMonth(timePtr->tm_mon);

	cout << "The current month, " << monthName << " " << timePtr->tm_year + 1900 << " has ";
	 printDays(timePtr->tm_mon, timePtr->tm_year + 1900);
	 cout << endl;

	return 0;
}


/*********************************
			printDays

Intakes a number needs to be (1 to 12) for the 
month, and a year. Prints out how many
days there are in that month, checking
for a leap year for February.
**********************************/

void printDays(int mon , int yr) {
	// Account for the fact that timePtr->tm_mon starts 0 for January.
	mon += 1;

	if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12) {
			cout << "31 days" << endl;
		}

		if (mon == 4 || mon == 6 || mon == 9 || mon == 11) {
			cout << "30 days" << endl;
		}

		if (mon == 2) {
			if ((yr % 100 == 0) && (yr % 400 == 0)) {
				cout << "29 days" << endl;
			} else if ((yr % 100 != 0) && (yr % 4 == 0)) {
				cout << "29 days" << endl;
			} else {
				cout << "28 days" << endl;
			}
		}
}



/*******************************
			getMonth

returns the string version of a 
month based on a number from 0 to 11
that is entered.
********************************/

string getMonth(int aNum){
	string holder;
	switch(aNum) {
		case 0:
			holder = "January";
			break;
		case 1:
			holder = "February";
			break;
		case 2:
			holder = "March";
			break;
		case 3:
			holder = "April";
			break;
		case 4:
			holder = "May";
			break;
		case 5:
			holder = "June";
			break;
		case 6:
			holder ="July";
			break;
		case 7:
			holder = "August";
			break;
		case 8:
			holder = "September";
			break;
		case 9:
			holder = "October";
			break;
		case 10:
			holder = "November";
			break;
		case 11:
			holder = "December";
			break;
		default:
			holder = "Impossible";
	}

	return holder;

}



