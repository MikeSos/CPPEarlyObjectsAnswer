/** Pharmacy Class Implementation File */

#include "Pharmacy.hpp"




/********************************************************
					DEFAULT CONSTRUCTOR

Sets the costs of the different types of medications.
********************************************************/

Pharmacy::Pharmacy() {
	painMeds = 20;
	heartMeds = 20;
	HGH = 15;
	lovePotion = 1000;
	footCream = 5;
}




/********************************************************
					chargeForDrugs

Intakes a PatientAccount and drugType. Increments the patientCharges
based on the drug type.
********************************************************/


void Pharmacy::chargeForDrugs(PatientAccount &thePatient, double drugType) {
	thePatient.incrementPatientCharges(drugType);
}



/**************************
		GET FUNCTIONS
**************************/

double Pharmacy::getPainMeds() {
	return painMeds;
}

double Pharmacy::getHeartMeds() {
	return heartMeds;
}

double Pharmacy::getHGH() {
	return HGH;
}

double Pharmacy::getLovePotion() {
	return lovePotion;
}

double Pharmacy::getFootCream() {
	return footCream;
}
