#include <iostream>
using namespace std;
int main() {
	char input = 'a';//dummy value
	int room = 1; //starting room is 1
	while (input != 'q') {//game loop
		switch (room) {
		case 1:
			cout << "You're in room 1. Your wife and daughter just died in a car crash." << endl;
			cout << "You no longer want to live. You have a gun in the (w) room." << endl;
			cout << "However, you also have you cell phone charging in the (e) room, and your wife's diary in the (n) room. There's also a photo album of your family in the (s) room. You could look at them before you die." << endl;
			cout << "What do you want to do?" << endl;
			cin >> input;
			if (input == 'w')
				room = 2;
			if (input == 'e')
				room = 3;
			if (input == 'n')
				room = 4;
			if (input == 's')
				room = 5;
			break;
		case 2:
			cout << "You're in the west room. As you pick up the gun, you suddenly think of going on a massacre. 'Why should I let other people be happy?' With no real reason to not do it, you go into a store and start shooting people. 5 minutes later, the cops come and shoot you." << endl;
			cout << "The end." << endl;
			input = 'q';
			break;
		case 3:
			cout << "You're in the east room. You scroll through your text messages, memories flooding back at you. After looking through them, you put your phone down." << endl;
			cin >> input;
			if (input == 'w')
				room = 2;
			if (input == 'e')
				room = 3;
			if (input == 'n')
				room = 4;
			if (input == 's')
				room = 5;
			break;
		case 4:
			cout << "You're in the north room. You read your wife's diary, tears dropping on the pages. When you finish reading the last entry, you close the book." << endl;
			cin >> input;
			if (input == 'w')
				room = 2;
			if (input == 'e')
				room = 3;
			if (input == 'n')
				room = 4;
			if (input == 's')
				room = 5;
			break;
		case 5:
			cout << "You're in the south room. You look through the album, laughing and crying while looking at all the silly pictures that were in there. After viewing all of the pictures, you put it back on the shelf." << endl;
			cin >> input;
			if (input == 'w')
				room = 2;
			if (input == 'e')
				room = 3;
			if (input == 'n')
				room = 4;
			if (input == 's')
				room = 5;
			break;
		}//end switch
	
	}//end game loop
	cout << "Thanks for listening to this sad tale. Be happy." << endl;
}//end main (game is done)