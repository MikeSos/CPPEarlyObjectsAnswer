/* Pharmacy Class Specification FIle */

#ifndef PHARMACY_HPP
#define PHARMACY_HPP

#include "PatientAccount.hpp"

class Pharmacy {

private:
	double painMeds;
	double heartMeds;
	double HGH;
	double lovePotion;
	double footCream;

public:
	Pharmacy();
	void chargeForDrugs(PatientAccount &, double);
	double getPainMeds();
	double getHeartMeds();
	double getHGH();
	double getLovePotion();
	double getFootCream();

};

#endif