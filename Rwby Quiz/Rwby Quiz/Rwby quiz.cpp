#include <iostream>
using namespace std;
int main() {
	int Ruby = 0;
	int Jaune = 0;
	int Weiss =0;
	int Yang =0;
	int Qrow =0;
	int Blake =0;
	int Ren =0;
	char input;
	cout << "Which Ruby character are you?" << endl << endl << endl;

	//First question
	cout << "Do you consider yourself to be a leader, a soldier, a team player, or do you prefer to fight by yourself? l for leader, s for soldier, t for team play, and a for alone." << endl;
	cin >> input;
	if (input == 'l')
		Jaune == Jaune + 2;
	else if (input == 's')
		Ren == Ren + 1;
	else if (input == 't')
		Yang == Yang + 2;
	else if (input == 'a')
		Qrow == Qrow + 3;
	else
		cout << "Try again." << endl;

		//Second question
	cout << "Which of these do you prefer: Sweets, seafood, pancakes, or something fancy? c for sweets, s for seafood, p for pancakes, and f for fancy" << endl;
	cin >> input;
	if (input == 'c')
		Ruby == Ruby + 2;
	else if (input == 's')
		Blake == Blake + 2;
	else if (input == 'p')
		Ren == Ren + 2;
	else if (input == 'f')
		Weiss == Weiss + 1;
	else
		cout << "Try again." << endl;

	//Third question
	cout << "Would you rather: Have your name be after a color, name be after an animal, change your name later on in life, or have a normal name? c for color, a for animal, y for your own name and n for normal." << endl;
	cin >> input;
	if (input == 'c')
		Ruby == Ruby + 1;
	else if (input == 'a')
		Qrow == Qrow + 1;
	else if (input == 'y')
		Qrow == Qrow + 2;
	else if (input == 'n')
		Jaune == Jaune + 2;
	else
		cout << "Try again." << endl;

	//Fourth question
	cout << "Out of these, what would describe you as a hunter? A thrillseeker, something you do with your heart instead of your strength, a duty you must do for the people, or something you happen to do. t for thrillseeker, h for heart, d for duty, or n for none of the above." << endl;
	cin >> input;
	if (input == 't')
		Yang == Yang + 2;
	else if (input == 'h')
		Jaune == Jaune + 1;
	else if (input == 'd')
		Weiss == Weiss + 2;
	else if (input == 'n')
		Ren == Ren + 2;
	else
		cout << "Try again." << endl;

	//Fifth question
	cout << "Which of these personalities would describe you best: Quiet, standoffish, sociable, or shy? q for queit, a for being standoffis, s for sociable, and w for shy." << endl;
	cin >> input;
	if (input == 'q')
		Ren == Ren + 2;
	else if (input == 'a')
		Blake == Blake + 2;
	else if (input == 's')
		Yang == Yang + 1;
	else if (input == 'w')
		Jaune == Jaune + 1;
	else
		cout << "Try again." << endl;

	//Sixth question
	cout << "Out of these, what do you think should be necessary for being a leader: Sterness, always focused and undaunted; Personality, being quirky and easy to talk to; Kind, putting others before themselves; Or perhaps someone who's unqualified, but has infinite potential to grow. s for stern, p for personality, k for kind, and q for potential." << endl;
	cin >> input;
	if (input == 's')
		Weiss == Weiss + 2;
	else if (input == 'p')
		Yang == Yang + 2;
	else if (input == 'k')
		Blake == Blake + 2;
	else if (input == 'q')
		Jaune == Jaune + 2;
	else
		cout << "Try again." << endl;

	//Seventh question
	cout << "What do you think matters most in a fight: Your speed, power, skill, or all of the above? s for speed, p for power, k for skill, and a for all of the above." << endl;
	cin >> input;
	if (input == 's')
		Ren == Ren + 1;
	else if (input == 'p')
		Yang == Yang + 1;
	else if (input == 'k')
		Weiss == Weiss + 1;
	else if (input == 'a')
		Qrow == Qrow + 1;
	else
		cout << "Try again." << endl;

	//Eighth question
	cout << "How do you fight? Be a one man army and charge in alone; Be a soldier and follow orders; Work as a team and form a strategy; Or be a badass and fight awesomely? o for one man army, s for soldier, t for teamwork, or b for be a badass." << endl;
	cin >> input;
	if (input == 'o')
		Yang == Yang + 1;
	else if (input == 's')
		Ren == Ren + 1;
	else if (input == 't')
		Jaune == Jaune + 1;
	else if (input == 'b')
		Qrow == Qrow + 1;
	else
		cout << "Try again." << endl;

	//Ninth question
	cout << "Which of these weapons would you want: A buster blade sized sword; A scythe; A katana; Or a regular sword? b for buster blade, s for scythe, k for katana, and n for normal sword." << endl;
	cin >> input;
	if (input == 'b')
		Qrow == Qrow + 1;
	else if (input == 's')
		Ruby == Ruby + 1;
	else if (input == 'k')
		Blake == Blake + 1;
	else if (input == 'n')
		Jaune == Jaune + 1;
	else
		cout << "Try again." << endl;

	//Tenth question
	cout << "What do you think about school? Do you feel like it's something not for you; Rewarding but boring; hard; or something you should take seriously? e for not for you, s for good but hard, h for just hard, and a for you should take school seriously." << endl;
	cin >> input;
	if (input == 'e')
		Yang == Yang + 1;
	else if (input == 's')
		Ruby == Ruby + 1;
	else if (input == 'h')
		Jaune == Jaune + 1;
	else if (input == 'a')
		Ren == Ren + 2;
	else
		cout << "Try again." << endl;

	//Last question
	cout << "Did you like this quiz? y for yes, and n for no." << endl;
	cin >> input;
	if (input == 'Y')
		Jaune == Jaune + 1;
	else if (input == 'N')
		Weiss == Weiss + 1;
	else
		cout << "Try again." << endl;

	if ((Ruby < Weiss) && (Ruby < Blake) && (Ruby < Yang) && (Ruby < Jaune) && (Ruby < Qrow) && (Ruby < Ren))
		cout << "You're Ruby! Basically she's little red riding hood." << endl;
	else if ((Weiss < Ruby) && (Weiss < Yang) && (Weiss < Blake) && (Weiss < Jaune) && (Weiss < Qrow) && (Weiss < Ren))
		cout << "You're Weiss! Basically the tsundere of the show." << endl;
	else if ((Blake < Ruby) && (Blake < Yang) && (Blake < Weiss) && (Blake < Ren) && (Blake < Jaune) && (Blake < Qrow))
		cout << "You're Blake! Basically the serious one in the show." << endl;
	else if ((Yang < Ruby) && (Yang < Weiss) && (Yang < Blake) && (Yang < Jaune) && (Yang < Ren) && (Yang < Qrow))
		cout << "You're Yang! Basically the immature one with not much character development." << endl;
	else if ((Qrow < Ruby) && (Qrow < Weiss) && (Qrow < Blake) && (Qrow < Yang) && (Qrow < Ren) && (Qrow < Jaune))
		cout << "You're Qrow! Basically the fandom's top character." << endl;
	else if ((Jaune < Ruby) && (Jaune < Yang) && (Jaune < Blake) && (Jaune < Weiss) && (Jaune < Ren) && (Jaune < Qrow))
		cout << "You're Jaune! Basically the man who won't stop reaching new heights." << endl;
	else if ((Ren < Ruby) && (Ren < Blake) && (Ren < Weiss) && (Ren < Yang) && (Ren < Qrow) && (Ren < Jaune))
		cout << "You're Ren! Basically the quiet ninja." << endl;
}