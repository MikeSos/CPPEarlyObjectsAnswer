 

#include <iostream>
#include "Exercise9.cpp"
#include <string>
using namespace std;


int main() {

	Stats testIt;
	double storeIt;

	for (int i = 0; i < 30; i++) {
		cout << " Please enter a number." << endl;
		cin >> storeIt;
		testIt.storeValue(storeIt);
	}

	cout << "The total " << testIt.getTotal() << endl;
	cout << "The average " << testIt.getAverage() << endl;
	cout << "The lowest was " << testIt.getLowest() << endl;
	cout << "The highest was " << testIt.getHighest() << endl;
	return 0;
}
