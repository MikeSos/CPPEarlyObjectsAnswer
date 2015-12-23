
#include <iostream>
#include "Exercise6.hpp"
using namespace std;

int main() {

	double billInput, desiredTip;

	Tips one(.01);
	for (int i = 0; i < 4; i++) {
		cout << "Please enter the amount of the bill and the desired tip rate you would like to do. " << endl;
		cin >> billInput >> desiredTip;

		cout << "Your tip amount should be " << one.computeTip(billInput, desiredTip) << endl;
	}


	return 0;
}
