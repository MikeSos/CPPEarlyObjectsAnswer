/* Patient Account Class Implementation File */

#include "PatientAccount.hpp"


/********************************************************
					DEFAULT CONSTRUCTOR

Set patientCharges and daysSpent to 0;
********************************************************/

PatientAccount::PatientAccount() {
	setPatientCharges(0);
	setDaysSpent(0);
}



/********************************************************
					SET FUNCTIONS
********************************************************/

void PatientAccount::setPatientCharges(double pc) {
	patientCharges = pc;
}

void PatientAccount::setDaysSpent(int days) {
	daysSpent = days;
}


/********************************************************
					GET FUNCTIONS
********************************************************/

double PatientAccount::getPatientCharges() {
	return patientCharges;
}

int PatientAccount::getDaysSpent() {
	return daysSpent;
}




/********************************************************
				INCREMENT FUNCTIONS
********************************************************/


void PatientAccount::incrementPatientCharges(double amount) {
	patientCharges += amount;
}

/****************************
This will also add to 
patientCharges based on the
amount of days spent in hospital
times the dailyRate.
****************************/

void PatientAccount::incrementDaysSpent(int days) {
	daysSpent = days;
	patientCharges += dailyRate * days; 
}