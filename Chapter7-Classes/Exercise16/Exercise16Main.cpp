#include <iostream>
#include <string>
#include "PatientAccount.hpp"
#include "Surgery.hpp"
#include "Pharmacy.hpp"
using namespace std;



void orderSurgery(PatientAccount &);
void orderDrugs(PatientAccount &);

int main() {

	PatientAccount thePatient;

	 orderSurgery(thePatient);
	 orderDrugs(thePatient);

	 cout << "Good luck with your recovery. You spent " << thePatient.getDaysSpent() << " days in the hospital." << endl;
	 cout << "Your total chargers were $" << thePatient.getPatientCharges() << endl;

	return 0;
}


/******************************************************
					orderSurgery

Intakes a PatientAccount object and then asks the user
to select a type of surgery they want. Based off that choice,
the function uses the Surgery Class to update the PatientAccount's
total charges.
******************************************************/

void orderSurgery(PatientAccount &aPatient) {

	int choice;
	Surgery theHospital;

	cout << "Please select the type of surgery the patient is to have." << endl;
	do {
		cout << "Press 1 to have brain surgery, which will take ten days in the hospital to recover." << endl;
		cout << "Press 2 to have heart surgery, which will take eight days in the hospital to recover." << endl;
		cout << "Press 3 to have thigh surgery, which will take six days in the hospital to recover." << endl;
		cout << "Press 4 to have foot surgery, which will take one day in the hospital to recover." << endl;
		cout << "Press 5 to have arm surgery, which will take one day in the hospital to recover." << endl;
		cin >> choice;
		if (choice <= 0 || choice >= 6) {
			cout << "Please enter a number between 1 and 5.";
		}

	} while (choice <= 0 || choice >= 6);

	if (choice == 1) {
		theHospital.chargeForSurgery(aPatient, theHospital.getBrain(),  10);
	} else if (choice == 2) {
		theHospital.chargeForSurgery(aPatient, theHospital.getHeart(), 8);
	} else if (choice == 3) {
		theHospital.chargeForSurgery(aPatient, theHospital.getThigh(), 6);
	} else if (choice == 4) {
		theHospital.chargeForSurgery(aPatient, theHospital.getFoot(), 1);
	} else if (choice == 5) {
		theHospital.chargeForSurgery(aPatient, theHospital.getArm(), 1);
	}
}



/******************************************************
					orderDrugs

Intakes a PatientAccount object and then asks the user
to select a type of drug they want. Based off that choice,
the function uses the Pharmacy Class to update the PatientAccount's
total charges.
******************************************************/

void orderDrugs(PatientAccount &aPatient) {

	Pharmacy drugStore;
	 int drugChoice;

	cout << "Please select the type of medication the patient is to have." << endl;
	do {
		cout << "Press 1 to get pain meds." << endl;
		cout << "Press 2 to get heart meds." << endl;
		cout << "Press 3 to get HGH." << endl;
		cout << "Press 4 to get a love potion." << endl;
		cout << "Press 5 to get foot cream." << endl;
		cin >> drugChoice;
		if (drugChoice <= 0 || drugChoice >= 6) {
			cout << "Please enter a number between 1 and 5.";
		}

	} while (drugChoice <= 0 || drugChoice >= 6);

	if (drugChoice == 1) {
		drugStore.chargeForDrugs(aPatient, drugStore.getPainMeds());
	} else if (drugChoice == 2) {
		drugStore.chargeForDrugs(aPatient, drugStore.getHeartMeds());
	} else if (drugChoice == 3) {
		drugStore.chargeForDrugs(aPatient, drugStore.getHGH());
	} else if (drugChoice == 4) {
		drugStore.chargeForDrugs(aPatient, drugStore.getLovePotion());
	} else if (drugChoice == 5) {
		drugStore.chargeForDrugs(aPatient, drugStore.getFootCream());
	}

}

