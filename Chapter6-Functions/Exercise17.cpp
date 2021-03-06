// You need to create a file HospitalCharges.txt and have it in the same directory so it can open the file.


#include <iostream>
#include <fstream>
using namespace std;

void validation(double &);
void getInPatient(double &, double &, double &, double &);
void getOutPatient(double &, double &);
double totalCharges(double, double, double, double);
double totalCharges(double, double);

int main() {

	ofstream outputFile; // File stream object


	// Variables to collect information
	double patientStatus, daysSpent, dailyRate, hospCharges, medCharges;

	cout << "Were you an in-patient or out-patient? Please enter 0 for in-patient and any other number for outpatient.";
	cin >> patientStatus;



	if (patientStatus == 0 ) {
		getInPatient(daysSpent, dailyRate, hospCharges, medCharges);
		outputFile.open("HospitalCharges.txt");
		outputFile << "Your days spent in the hospital are " << daysSpent << endl;
		outputFile << "Your daily rate for staying is " << dailyRate << " dollars." << endl;
		outputFile << "Your hospital service charges are " << hospCharges << " dollars." << endl;
		outputFile << "Your medication charges are " << medCharges << " dollars." << endl;
		outputFile << "Total charges are " << totalCharges(daysSpent, dailyRate, hospCharges, medCharges) << endl;
	} else {
		getOutPatient(hospCharges, medCharges);
		outputFile.open("HospitalCharges.txt");
		outputFile << "Your hospital service charges are " << hospCharges << " dollars." << endl;
		outputFile << "Your medication charges are " << medCharges << " dollars." << endl;
		outputFile << "Total charges are " << totalCharges(hospCharges, medCharges) << " dollars." << endl;
	}

	outputFile.close();

	return 0;

}

/**********************************************
					validation

Input: A reference number.
Task: If it is less than zero, asks them to re-enter
the number.
**************************************************/

void validation(double &testNum) {
	while (testNum < 0) {
		cout << "Please re-enter a valid number that is above zero.";
		cin >> testNum;
	}
}



/**********************************************
					getInPatient

Input: Reference variables for the values that have
to be calculated for an inpatient stay.
Task: Collect information from the user.
**************************************************/

void getInPatient(double &daysSpent, double &dailyRate, double &hospCharges, double &medCharges) {
	cout << "Please enter the number of days spent in the hospital.";
	cin >> daysSpent;
	validation(daysSpent);

	cout << "Please enter the daily rate for staying in the hospital.";
	cin >> dailyRate;
	validation(dailyRate);

	cout << "Please enter the charges for hospital services.";
	cin >> hospCharges;
	validation(hospCharges);

	cout << "Please enter the medication charges.";
	cin >> medCharges;
	validation(medCharges);
}



/**********************************************
					getOutPatient

Input: Reference variables for the values that have
to be calculated for an outpatient visit.
Task: Collect information from the user.
**************************************************/

void getOutPatient(double &hospCharges, double &medCharges) {

	cout << "Please enter the charges for hospital services.";
	cin >> hospCharges;
	validation(hospCharges);

	cout << "Please enter the medication charges.";
	cin >> medCharges;
	validation(medCharges);

}



/**********************************************
					totalCharges

Input: Variables make up the costs that will be 
totaled up and returned.
**************************************************/


double totalCharges(double daysSpent, double dailyRate, double hospCharges, double medCharges) {
	return ((daysSpent * dailyRate) + hospCharges + medCharges);
}

double totalCharges(double hospCharges, double medCharges) {
	return (hospCharges + medCharges);
}

