// Included the class specification and implementation file for CharConverter along with the main test all in this file.


#include <iostream>
#include <cctype>
#include <string>
using namespace std;


/*********** CharConverter Class Specification ************/

class CharConverter {

private:
	string theString;

public:
	CharConverter();
	void setString();
	string getString();
	string uppercase();
	string properWords();
};


/********** Test the Class *************/



int main() {

	CharConverter testStr;

	do {
		testStr.setString();
		cout << testStr.uppercase() << endl;
		cout << testStr.properWords() << endl;
		cout << endl;
		if (testStr.getString() != "0") {
			cout << "If you don't want to try another string please enter the number zero next time the prompt is entered." << endl;
		}
	} while (testStr.getString() != "0");

	return 0;
}






/*********** CharConverter Class Implementation ************/

/**********************************
		Default Constructor

Sets data member theString to empty.
**********************************/


CharConverter::CharConverter() {
	theString = "";
}


/*****************************************
				setString

Asks for user to enter a string, receives 
inputs and sets it to theString.
*****************************************/

void CharConverter::setString() {

	string theInput;
	cout << "Plese enter a string." << endl; 
	getline(cin, theInput);

	theString = theInput;
}

/****** getString ********/


string CharConverter::getString() {
	return theString;
}



/*******************************************************
						uppercase

Returns a new string that is an all caps version of the
string that is held in theString. 
********************************************************/

string CharConverter::uppercase() {


	string strToReturn;
	// Goes through the inputted string character by character
	for (int i = 0; i < theString.length(); i++) {

		// Tests that the current position isn't already upper case and that it is a letter.
		if (!isupper(theString[i]) && isalpha(theString[i])) {
			// If so it concatenates an upper case version of that letter
			strToReturn += toupper(theString[i]);
		} else {
			// if not concatenates what is there already without changing anything
			strToReturn += theString[i];
		}
	}

	return strToReturn;
}



/*******************************************************************
						properWords

Returns a new string, based off of the string held in theString,
that has all of the first letters of words in the string capitalized.
**********************************************************************/


string CharConverter::properWords() {

	string strToReturn; 

	// Goes through each position in the string.
	for (int i = 0; i < theString.length(); i++) {

		// Tests for if it is the first position, that it is a character and that it is not already capitalized.
		// Only happens if a letter is at the first position
		if (i == 0 && isalpha(theString[i]) && !isupper(theString[i])) {

			// If so it concatenates the upper case letter to the string
			strToReturn += toupper(theString[i]);

			// Add 1 to i because if above sequence happens then it essentially means a loop iteration has happened
			// so if i isn't incremented the same letter will be concatenated again down below
			i++;
		}

		// Tests to see if the character before the current position is a space.
		if (isspace(theString[i-1])) {

			// If so, it tests whether it is a character and that it isn't already uppercase
			if (isalpha(theString[i]) && !isupper(theString[i])) {

				// If so, add a uppercase version of letter to the string to return
				strToReturn += toupper(theString[i]);

			} else { // adds what is already there
				strToReturn += theString[i];
			}
		} else { // If it isn't a space before the current position then will concatenate whatever is already there.
			strToReturn += theString[i];
		}
	}

	return strToReturn;

}
