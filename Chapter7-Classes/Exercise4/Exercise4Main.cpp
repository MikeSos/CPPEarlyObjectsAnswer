#include "Exercise4.cpp"
#include <iostream>
using namespace std;

int main() {

	Car hello(2006, "Hyundai");
	cout << hello.getYear() << endl;
	cout << hello.getSpeed() << endl;
	cout << hello.getMake() << endl;

	cout << "Let's call the speed five times." << endl;
	for (int i = 0; i < 5; i++) {
		hello.accelerate();
		cout << hello.getSpeed() << endl;
	}

	cout << "Let's call the brake five times." << endl;
	for (int i = 0; i < 5; i++) {
		hello.brake();
		cout << hello.getSpeed() << endl;
	}

	return 0;
}

