/* Surgery Class Implementation File */

#include "Surgery.hpp"

/********************************************************
					DEFAULT CONSTRUCTOR

Sets the costs of the different types of surgery.
********************************************************/

Surgery::Surgery() {
	brainCost = 5000;
	heartCost = 5000;
	thighCost = 2000;
	footCost = 1000;
	armCost = 1000;
}



/********************************************************
					chargeForSurgery

Intakes a PatientAccount, surgery type, and days spent in
the hospital. Increments the patientCharges based on the
surgery type, also increment days spent in the hospital, which
also increments the patientCharges because days spent *
daily rate.
********************************************************/

void Surgery::chargeForSurgery(PatientAccount &thePatient, double surgeryType, int daysSpent) {
	thePatient.incrementPatientCharges(surgeryType);
	thePatient.incrementDaysSpent(daysSpent);
}


/*****************************
		GET FUNCTIONS
******************************/

double Surgery::getBrain() {
	return brainCost;
}

double Surgery::getHeart() {
	return heartCost;
}

double Surgery::getThigh() {
	return thighCost;
}

double Surgery::getFoot() {
	return footCost;
}

double Surgery::getArm() {
	return armCost;
}