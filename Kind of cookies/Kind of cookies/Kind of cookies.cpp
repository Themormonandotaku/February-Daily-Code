#include <iostream>
using namespace std;
int main() {
	char input;
	cout << "Which of these cookies do you want? (c = chocolate, p = peanut butter, s = sugar cookie, and t = triple chocolate)" << endl;
	cin >> input;
	switch (input) {

	case 'c':
				cout << "Here's your chocolate cookie." << endl;
				break;
	case 'p':
					cout << "Here's your peanut butter cookie." << endl;
					break;
	case 's':
						cout << "Here's your sugar cookie." << endl;
						break;
	case 't':
							cout << "Here's your tri chocolate cookie." << endl;
							break;
	default:
							cout << "Wha?" << endl;
							break;
		}

	}