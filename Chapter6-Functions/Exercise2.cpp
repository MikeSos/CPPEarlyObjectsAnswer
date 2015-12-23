#include <iostream>
using namespace std;


double celsius(double);

int main() {
	
	for (int i = 0; i < 21; i++) {
		cout << "Temp in farenheight: " << i << endl;
		cout << "Temp in celsius: " << celsius(i) << endl;
	}


	return 0;
}


/**************************************
			celsius

Input: A farenheit temperature
Output: Return temp converted to celsius
***************************************/

double celsius(double faren) {
	return (5 * (faren - 32)) / 9;
}