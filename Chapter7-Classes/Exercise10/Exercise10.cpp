#include <iostream>
#include <string>
using namespace std;


struct CorpData {
	string divisionName;
	double firstQSales, secondQSales, thirdQSales, fourthQSales;

	CorpData(string name, double firstQ, double secondQ, double thirdQ, double fourthQ) {
		divisionName = name;
		firstQSales = firstQ;
		secondQSales = secondQ;
		thirdQSales = thirdQ;
		fourthQSales = fourthQ;
	}

};

// Function prototype.

void computeNumbers(const CorpData &);




int main() {

	CorpData East("East", 10, 20, 30, 40);
	CorpData West("West", 100, 200, 300, 400);
	CorpData North("North", 5000, 4240, 40240, 402402);
	CorpData South("South", 0, 3204, 40240, 40240);

	computeNumbers(East);
	computeNumbers(West);
	computeNumbers(North);
	computeNumbers(South);

	return 0;
}

/*******************************************************
					computeNumbers

Intakes a CorpData structure. Computes that structures
annual sales and quarterly average and then displays
it to the screen along with the division name.
********************************************************/

void computeNumbers(const CorpData &item) {
	cout << "The numbers for " << item.divisionName << " are in." << endl;
	cout << "There annual sales are " << item.firstQSales + item.secondQSales + item.thirdQSales + item.fourthQSales << " dollars." << endl;
	cout << "There quarterly average is " << (item.firstQSales + item.secondQSales + item.thirdQSales + item.fourthQSales) / 4 << " dollars." << endl;
}