/* Surgery Class Specification File */

#ifndef SURGERY_HPP
#define SURGERY_HPP

#include "PatientAccount.hpp"

class Surgery {

private:
	double brainCost;
	double heartCost;
	double thighCost;
	double footCost;
	double armCost;

public:
	Surgery();
	void chargeForSurgery(PatientAccount &, double, int);
	double getBrain();
	double getHeart();
	double getThigh();
	double getFoot();
	double getArm();

};

#endif
