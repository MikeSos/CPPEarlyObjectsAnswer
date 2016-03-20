// Chapter 9 Exercise 11 - Ascending Circles

// Just going to put the header and implementation and main file all in the same file for this Exercise
// The circle code of this program is program 8-28 from the book, which the exercise tells you to use
// Except I changed setRadius to getRadius

#include <iostream>
#include <cmath>

class Circle {

private: 
	double radius;
	int centerX, centerY;

public:
	Circle() {
		radius = 1.0;
		centerX = centerY = 0;
	}

	Circle(double r) {
		radius = r;
		centerX = centerY = 0;
	}

	Circle(double r, int x, int y) {
		radius = r;
		centerX = x;
		centerY = y;
	}

	double getRadius() {
		return radius;
	}

	int getXCoord() {
		return centerX;
	}

	int getYCoord(){
		return centerY;
	}

	double findArea() {
		return 3.14 * pow(radius, 2);
	}
};

void bubbleSortIt(Circle [], int);

int main() {

	Circle anArray[8] = {Circle(2.5), Circle(4.0), Circle(1.0), Circle(3.0), Circle(6.0), Circle(3.5), Circle(2.0)};

	std::cout << "Areas of circle objects before bubble sort" << std::endl;
	for (int i = 0; i < 8; i++) {
		std::cout << anArray[i].findArea() << " ";

	}
	std::cout << std::endl;

	bubbleSortIt(anArray, 8);

	std::cout << "Areas of circle objects after bubble sort" << std::endl;
	for (int i = 0; i < 8; i++) {
		std::cout << anArray[i].findArea() << " ";

	}
	std::cout << std::endl;


	return 0;
}


/********************************************************************************
**								bubbleSortIt
**
**Input: An array of Circle objects, and an int for the size of array
**Output: None.
**Description: Goes through the array and sort the Circle object by radius number using a bubble sort.
*********************************************************************************/


void bubbleSortIt(Circle anArray [], int size) {

	Circle temp;
	bool swap;

	do {
		swap = false;
		for (int count = 0; count < (size - 1); count++) {

			if (anArray[count].getRadius() > anArray[count+1].getRadius()) {

				temp = anArray[count];
				anArray[count] = anArray[count+1];
				anArray[count+1] = temp;
				swap = true;
				

			}
		}
	} while (swap);
	
}


