// Similar to Challenge 9 and 8. Put the object specification and implementation file in same folder
// This focuses on the client program. Some changes were made to the Stats class to fit what
// the problem asks for. Instead of rainfall, they want runner times and runner names, so used a parallel array
// inside of the stats class to achieve this, and created two new functions inside of the Stats class.

/***************************** Stats Specification *******************************/
#include <iostream>
#include <string>
using namespace std;

class Stats {
private:
	string runnerArray[30];
	double theArray[30];
	int currentPosition;

public:
	Stats();
	bool storeValue(double, string);
	double getTotal();
	double getAverage();
	double getFastest();     
	double getSlowest();
	string getSlowestName();
	string getFastestName();

};


/*************************************** MAIN and Function Prototypes ************************************/



void getData(Stats &);
void createReport(Stats);

int main() {




	Stats theTimes;
	double storeTime;
	string storeName;

	for (int i = 0; i < 5; i++) {
		getData(theTimes);
	}

	createReport(theTimes);

	return 0;
}


/*********************************************************
				getData

Pass in a Stats object by reference so that value passed in
will be changed when storeValue is ran. Asks for a runner's
name and runner's time, gets them both and then stores it in
the Stats object.
**********************************************************/

void getData(Stats &theTimes) {

	string runnerName;
	double runnerTime;

	cout << "Please enter the first name of the runner." << endl;
	cin >> runnerName;

	cout << "Please enter that runner's time." << endl;
	cin >> runnerTime;

	theTimes.storeValue(runnerTime, runnerName);

}



/*********************************************************
					createReport

Intakes a stats object and displays a report with the average
of the runners' times who are stored in the Stats Objects.
Also displays the name of the slowest runner and their time,
and the name of the fastest runner and their time.
**********************************************************/

void createReport(Stats theTimes) {

	cout << "Here is a report of the track team." << endl;
	cout << endl;
	cout << "The average 100 yard-dash time: " << theTimes.getAverage() << endl;
	cout << "The slowest runner was " << theTimes.getSlowestName() << " with a time of " << theTimes.getSlowest() << " seconds." << endl;
	cout << "The fastest runner was " << theTimes.getFastestName() << " with a time of " << theTimes.getFastest() << " seconds." << endl;

}





/********************************************* Stats Implementation File ****************************************/



/****************************************
			Default Constructor

Sets currentPosition counter to 0 when
the object is created.
****************************************/


Stats::Stats() {
	currentPosition = 0;
}




/****************************************
			storeValue

Intakes a double and a string and
 stores it in the correct array,
if the array isn't already full. Returns true
if done successfully, and false if it is full.
****************************************/


bool Stats::storeValue(double entry, string name) {

	// Checks to see if it is full.
	if (currentPosition < 30) {
		theArray[currentPosition] = entry;
		runnerArray[currentPosition] = name;
		// Increment currentPosition 1 to account for new addition to array
		currentPosition += 1;
		return true;
	}

	return false;
}



/****************************************
			getTotal

Returns total amount of rainfall that is
held in the array.
****************************************/

double Stats::getTotal() {

	double totalAmount = 0;

	// Go through array positions for which there are values and add them to the total
	for (int i = 0; i < currentPosition; i++)
		totalAmount += theArray[i];

	return totalAmount;
}



/****************************************
			getAverage

Returns average amount of rainfall.
****************************************/

double Stats::getAverage() {

	return getTotal() / currentPosition;
}



/****************************************
		getFastestName & getFastest

Returns the fastest runner's time. Returns
fastest runner's name.
****************************************/

string Stats::getFastestName() {

	// Note that lowest, aka lowest time, means fastest time for running
	double holdLowest = 10000;
	string nameOfLowest = "";
	
	for( int i = 0; i < currentPosition; i++) {
		if (theArray[i] < holdLowest) {
			holdLowest = theArray[i];
			nameOfLowest = runnerArray[i];
		}
	}

	return nameOfLowest;
}



double Stats::getFastest() {

	// Note that lowest, aka lowest time, means fastest time for running

	// Will holdLowest. Set to 10000 because all times will be below this amount
	// so it is just a starting placeholder value
	double holdLowest = 10000;

	// Goes through array. If less than current lowest, will make it new lowest.
	for( int i = 0; i < currentPosition; i++) {
		if (theArray[i] < holdLowest) {
			holdLowest = theArray[i];
		}
	}

	return holdLowest;
}



/****************************************
		getSlowestName & getSlowest

Returns the slowest runner's time. Returns slowest
runner's name. 
****************************************/

string Stats::getSlowestName() {

	// Highest time means the slowest time for running.
	double holdHighest = 0;
	string nameOfHighest = "";

	// Goes through array. If current position's amount more than current highest, it becomes new highest
	for( int i = 0; i < currentPosition; i++) {
		if (theArray[i] > holdHighest) {
			holdHighest = theArray[i];
			nameOfHighest = runnerArray[i];
		}
	}

	return nameOfHighest;
}

double Stats::getSlowest() {

	// Highest time means the slowest time for running.

	// Will hold highest. Set to 0 because all rainfall will be above or equal to this ammount.
	// so it is just a starting placeholder value
	double holdHighest = 0;

	// Goes through array. If current position's amount more than current highest, it becomes new highest
	for( int i = 0; i < currentPosition; i++) {
		if (theArray[i] > holdHighest) {
			holdHighest = theArray[i];
		}
	}

	return holdHighest;
}

