#include <iostream>
using namespace std;

double fallingDistance(double);

int main() {

	for (int i = 1; i < 11; i++)
		cout << fallingDistance(i) << endl;


	return 0;
}




/**************************************
			fallingDistance

Input: An object's falling time
Output: Distance in meters the object has
fallen.
***************************************/

double fallingDistance(double time) {
	return ((9.8)*(time * time)) / 2;
}

