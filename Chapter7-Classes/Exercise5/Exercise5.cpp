// Population implementation file

#include "Exercise5.hpp"

/***********************************************
					Constructor

Intakes the current population, annual number of
births and deaths then uses the set functions
to set them.
************************************************/

Population::Population(double thePop, double birthNum, double deathNum) {
	setCurrentPop(thePop);
	setAnnualBirth(birthNum);
	setAnnualDeath(deathNum);
}


/*************************************************************
					Set Functions

Intakes an amount and sets it to the variable. For population,
if below 2 will set it to default 2. If below 0 for birth and death,
will default to 0.
*************************************************************/



void Population::setCurrentPop(double thePop) {
	if (thePop < 2) {
		currentPop = 2;
	} else {
	currentPop = thePop;
	}
}

void Population::setAnnualBirth(double birthNum) {
	if (birthNum < 0) {
		annualBirth = 0;
	} else {
		annualBirth = birthNum;
	}
}

void Population::setAnnualDeath(double deathNum) {
	if (deathNum < 0) {
		annualDeath = 0;
	} else {
		annualDeath = deathNum;
	}
}



/************************************************
		getBirthRate and getDeathRate

Calculates the birth rate or death rate and then
returns that value.
*************************************************/

double Population::getBirthRate() {
	return annualBirth / currentPop;
}

double Population::getDeathRate() {
	return annualDeath / currentPop;
}