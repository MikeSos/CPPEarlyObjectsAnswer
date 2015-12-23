
#include <iostream>
#include "Exercise5.cpp"
using namespace std;

int main() {

	Population test(100000, 8000, 6000);
	cout << "Birth rate is " << test.getBirthRate() << endl;
	cout << "Death rate is " << test.getDeathRate() << endl;

	return 0;
}
