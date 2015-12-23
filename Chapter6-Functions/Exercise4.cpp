#include <iostream>
using namespace std;

double kineticEnergy(double, double);

int main() {

	// Variables to hold user's input
	double mass, velocity;

	// Ask user for mass and velocity and place the input into the variables
	cout << "Please enter the mass (in kilograms) and velocity (in meters per second): " << endl;
	cin >> mass >> velocity;

	cout << "Here is the kinetic energy: " << kineticEnergy(mass, velocity) << endl;


	return 0;
}





/**************************************
			kineticEnergy

Input: An object's mass and velocity
Output: Return amount of kinetic energy
***************************************/

double kineticEnergy(double mass, double velocity) {
	return (mass * (velocity * velocity)) / 2;
}