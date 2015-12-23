#include <iostream>
using namespace std;

void getJudgeData(double &);
double findLowest(double, double, double, double, double);  // I made these double instead of int because
double findHighest(double, double, double, double, double);  // it said fractional scores are allowed
double calcScore(double, double, double, double, double);


int main() {

	double jScore1, jScore2, jScore3, jScore4, jScore5, finalScore;

	getJudgeData(jScore1);
	getJudgeData(jScore2);
	getJudgeData(jScore3);
	getJudgeData(jScore4);
	getJudgeData(jScore5);

	finalScore = calcScore(jScore1, jScore2, jScore3, jScore4, jScore5);

	cout << "The final score is " << finalScore << endl;

	return 0;
}




/************************************************
				getJudgeData

Input: A reference variable to store user input.
Task: Ask user for a score, store it in
reference variable, checking that it is in between
0 and 10.
**************************************************/

void getJudgeData(double &score) {
	// Get score from person, making sure that it is from 0 to 10. If not, ask again.
	do {
		cout << "Please enter the contestant's score. Making sure it is between 0 and 10." << endl;
		cin >> score;
	} while (score <= 0 || score >= 10);

}



/*************************************************
				findLowest

Input: The five contestant scores.
Output: Returns lowest of five contestant scores. 
****************************************************/

double findLowest(double score1, double score2, double score3, double score4, double score5) {

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
				findHighest

Input: The five test scores.
Output: Returns highest of five test scores. 
****************************************************/

double findHighest(double score1, double score2, double score3, double score4, double score5) {

	// Test If the score is higher or equal to all the rest, return it
	if (score1 >= score2 && score1 >= score3 && score1 >= score4 && score1 >= score5) 
		return score1;

	if (score2 >= score1 && score2 >= score3 && score2 >= score4 && score2 >= score5)
		return score2;

	if (score3 >= score1 && score3 >= score2 && score3 >= score4 && score3 >= score5)
		return score3;

	if (score4 >= score1 && score4 >= score2 && score4 >= score3 && score3 >= score5)
		return score4;

	// If any of the others weren't triggered and returned than that means score 5 is the highest score.
	return score5;
}



/*************************************************
				calcScore

Input: Five scores.
Output: Displays average of three middle scores.
****************************************************/

double calcScore(double score1, double score2, double score3, double score4, double score5) {

	// Going to break this down so it isn't one very very long line
	double subtractionAmount = findLowest(score1, score2, score3, score4, score5) + findHighest(score1, score2, score3, score4, score5);

	return ((score1 + score2 + score3 + score4 + score5) - subtractionAmount) / 3;

}

