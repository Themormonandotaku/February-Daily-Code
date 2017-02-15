#include <iostream>
using namespace std;
int main() {
	int Ruby;
	int Jaune;
	int Weiss;
	int Yang;
	int Qrow;
	int Blake;
	int Ren;
	cout << "Which Ruby character are you? Spoilers may be included." << endl << endl << endl;
	//First question
	cout << "Do you consider yourself to be a leader, a soldier, a team player, or do you prefer to fight by yourself? l for leader, s for soldier, t for team play, and a for alone." << endl;
	cin >> input;
	if (input == 'l')
		Jaune == Jaune + 2
	else if (input == 's')
		Ren == Ren + 1
	else if (input == 't')
		Yang == Yang + 2
	else if (input == 'a')
		Qrow == Qrow + 3
	else
		cout << "Try again." << endl;
		//Second question
	cout << "Which of these do you prefer: Sweets, seafood, pancakes, or something fancy? c for sweets, s for seafood, p for pancakes, and f for fancy" << endl;
	cin >> input;
	if (input == 'c')
		Ruby == Ruby + 2
	else if (input == 's')
		Blake == Blake + 2
	else if (input == 'p')
		Ren == Ren + 2
	else if (input == 'f')
		Weiss == Weiss + 1
	else
		cout << "Try again." << endl;
	//Third question
	cout << "Would you rather: Have your name be after a color, name be after an animal, change your name later on in life, or have a normal name? c for color, a for animal, y for your own name and n for normal." << endl;
	cin >> input;
	if (input == 'c')
		Ruby == Ruby + 1
	else if (input == 'a')
		Qrow == Qrow + 1
	else if (input == 'y')
		Qrow == Qrow + 2
	else if (input == 'n')
		Jaune == Jaune + 2
	else
		cout << "Try again." << endl;
	//Third question
}