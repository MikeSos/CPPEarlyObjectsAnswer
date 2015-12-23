// Class Specification File

#ifndef EXERCISE4_HPP
#define EXERCISE4_HPP

#include <string>
using namespace std;

class Car {
private:
	int year, speed;
	string make;
public:
	Car(int, string);
	int getYear();
	int getSpeed();
	string getMake();
	void accelerate();
	void brake();
};

#endif