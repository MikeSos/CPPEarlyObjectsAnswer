#include <iostream>
#include <string>
#include <cctype> // Needed for to upper function
using namespace std;

string upperCaseIt(string s);
bool sameString(string s1, string s2);

int main() {

	string str1, str2;

	cout << "Please enter two names and we will see if they are the same." << endl;
	cin >> str1 >> str2;
	
	sameString(str1, str2);

	return 0;
}


/******************************************
				upperCaseIt

Input: Intakes a string
Output: An all uppercase version of string.
*******************************************/

string upperCaseIt(string s) {
	// Go through each letter of the string and capitalize it. 
	for (int i = 0; i < s.length(); i++) {
		s[i] = toupper(s[i]);
	}

	return s;
}


/******************************************
				sameString

Input: Intakes two strings
Output: True or false depending on if they are
the same string.
*******************************************/

bool sameString(string s1, string s2) {
	if (upperCaseIt(s1) == upperCaseIt(s2)) {
		cout << "They are the same." << endl;
		return true;
	} 
	cout << "They are not the same" << endl;
	return false;
}

