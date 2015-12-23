#include "Exercise4.hpp"

// Car Implementation File

/***********************************************
				Constructor

Intakes the year and the make of the car and sets
the data members for them and  sets speed to 5.
************************************************/

Car::Car(int theYear, string theMake) {
	// Would normally use a set function to set year and make
	year = theYear;
	make = theMake;
	speed = 0;
}

/************************
		get Functions
*************************/

int Car::getYear() {
	return year;
}

int Car::getSpeed() {
	return speed;
}

string Car::getMake() {
	return make;
}

/**********************************************
			Accelerate & Brake

Accelerate adds 5 to speed. Brake substracts 5.
************************************************/


void Car::accelerate() {
	speed += 5;
}

void Car::brake() {
	speed -= 5;
}

