// testGrader class Specification and implementation file along with client test program are all in this file
// for simplicity purposes. 


#include <iostream>
#include <vector> // Will be used in the testGrader grade function
#include <string>
using namespace std;

/********************** testGrader specification file *************************/

class testGrader {

private:
	char answers[20];

public:

	void setKey(string);
	string grade(char []);

};




/**************************** Client Program ****************************/




int main() {

	testGrader testIt;

	// Test taker answers char array.
	char testTaker[20];


	testIt.setKey("AAAABBBBCCCCDDDDAAAA");

	char currentAnswer;

	// Will act as a sentinel and as a stopper to prevent unacceptable answers
	int stop;

	do{

		// Ask for an answer for each question. 
		for (int i = 0; i < 20; i++) {

			// Doing i + 1 for visual sake. 1-20 looks better than 0-19. Tests don't start at number 0 : D.
			cout << "Please enter your answer to question " << i + 1 << " . Make sure it is between A-D." << endl;

			// Set stop to 0. Below do/while loop will run until stop is no longer 0
			// Which only happens when an acceptable answer is entered.
			stop = 0;

			do {
				// Will continually loop around until an answer of A, B, C or D is entered.
				cin >> currentAnswer;
				if (currentAnswer == 'A' || currentAnswer == 'B' || currentAnswer == 'C' || currentAnswer == 'D') {
					testTaker[i] = currentAnswer;
					stop = 1;
				} else {
					cout << "Please enter a correct answer of A, B, C, or D.";
				}
			} while (stop == 0);
		}

		// After all 20 answers are collected. The person's score is graded and displayed.
		cout << testIt.grade(testTaker) << endl;
		cout << endl;

		cout << "If you don't want to enter another student's grades. Please enter the number 0, else enter another number to continue entering grades." << endl;
		cin >> stop;
		// Repeats the whole process unless the person enters the number 0.
	} while (stop != 0);



	return 0;
}




/*********** testGrader Implementation File ************/ 



/******************************************************
						setKey

Intake is a string (supposed to be length 20) that is 
the answer key with answers from A-D. Sets those answers
to their appropriate positions in the answers array.
******************************************************/


void testGrader::setKey(string gradeList){
	for (int i = 0; i < gradeList.length(); i++) {
		answers[i] = gradeList[i];
	}
}




/**********************************************************************
							grade

Intakes an array of characters. Goes through 20 positions in the array,
comparing the values in those positions to the positions in the answers array,
keeping tally of how many are correct and which ones were incorrect. Returns
a string that contains a message indicating whether or not the person passed
or failed, the number of right and wrong answers, and a list of the question
numbers for all incorrectly answered questions.
*************************************************************************/

string testGrader::grade(char theArray[]) {
	// Will hold the numbers that were answered incorrectly, number right, and string to return
	vector<int> incorrectNumbers;
	int numberRight = 0;
	string strToReturn = "";

	// Go through array comparing it the answer key. 
	for (int i = 0; i < 20; i ++) {
		// If correct answers
		if (theArray[i] == answers[i]) {
			numberRight += 1;
		} else {
			// Push the incorrect answers onto the vector. Adding one to i so it is 1-20 instead of 0-19.
			// Done for visual appeal
			incorrectNumbers.push_back(i+1);
		}
	}

	// Test to see if applicant passed test. Concatenates appropriate response to depending on if they
	// passed or not.
	if (numberRight >= 15) {
		strToReturn += "The applicant passed the test.";
	} else {
		strToReturn += "The applicant failed the test.";
	}

	// Add number of right answers, and number of wrong answers.

	strToReturn += " They had " + to_string(numberRight) + " correct answers, and " + to_string(20 - numberRight) + " wrong.";

	// Now add which ones they got wrong.
	if (incorrectNumbers.size() != 0) {
		strToReturn += " The questions they got wrong were ";
		for (int t = 0; t < incorrectNumbers.size(); t++) {
			strToReturn += to_string(incorrectNumbers.at(t)) + " ";
		}
	}

	return strToReturn;
	
} 
