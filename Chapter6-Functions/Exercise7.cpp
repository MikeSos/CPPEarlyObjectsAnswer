#include <iostream>
using namespace std;

void getScore(int &);
int findLowest(int, int, int, int ,int);
void calcAverage(int, int, int, int, int);

int main() {

	int score1, score2, score3, score4, score5;

	getScore(score1);
	getScore(score2);
	getScore(score3);
	getScore(score4);
	getScore(score5);

	calcAverage(score1, score2, score3, score4, score5);

	return 0;
}


/************************************************
				getScore

Input: A reference variable to store user input.
Task: Ask user for a test score, store it in,
reference variable, checking that it is in between
0 and 100
**************************************************/

void getScore(int &score) {
	// Get score from person, making sure that it is between 0 and 100. If not, ask again.
	do {
		cout << "Please enter the test score. Making sure it is between 0 and 100." << endl;
		cin >> score;
	} while (score < 0 || score > 100);
}



/*************************************************
				findLowest

Input: The five test scores.
Output: Returns lowest of five test scores. 
****************************************************/

int findLowest(int score1, int score2, int score3, int score4, int score5) {

	// Test If the score is lower or equal to all the rest, return it
	if (score1 <= score2 && score1 <= score3 && score1 <= score4 && score1 <= score5) 
		return score1;

	if (score2 <= score1 && score2 <= score3 && score2 <= score4 && score2 <= score5)
		return score2;

	if (score3 <= score1 && score3 <= score2 && score3 <= score4 && score3 <= score5)
		return score3;

	if (score4 <= score1 && score4 <= score2 && score4 <= score3 && score3 <= score5)
		return score4;

	// If any of the others weren't triggered and returned than that means score 5 is the lowest score.
	return score5;
}

/*************************************************
				calcAverage

Input: Five scores.
Output: Displays average of four highest scores.
****************************************************/

void calcAverage(int score1, int score2, int score3, int score4, int score5) {

	cout << ((score1 + score2 + score3 + score4 + score5) - findLowest(score1, score2, score3, score4, score5)) / 4 << endl;

}


