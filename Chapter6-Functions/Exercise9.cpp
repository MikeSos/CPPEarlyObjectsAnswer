#include <iostream>
using namespace std;

bool isPrime(int);

int main() {


	// Display which numbers from 0 to 99 are prime or not.
	for (int i = 0; i < 100; i++ ) {
		if (isPrime(i) == false) {
			cout << i << " is not prime." << endl;
		} else {
			cout << i << " is prime." << endl;
		}
	}


}



/*****************************************
				isPrime

Input: An int.
Output: True if prime, false if not
******************************************/


bool isPrime(int num) {

	// Anything below 1 is not a prime, so if num is below 1. Just return false.
	if (num <= 1) {
		return false;
	}

	// Goes through every number, starting at 2 to the num and makes sure that no number in between is
	// evenly divisble. If so it is not prime, and since it is an int, we don't have to test if divisible by 1.
	for (int i = 2; i < num; i++) {
		if (num % i == 0)
			return false;
	}
	return true;
}

