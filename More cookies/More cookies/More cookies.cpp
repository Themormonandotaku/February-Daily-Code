#include <iostream>
using namespace std;
int main() {
	char input = 'y';
	while (input != 'n') {
		cout << "Do you want a cookie? y for yes, and n to stop." << endl;
		cin >> input;
		cout << "Here's your cookie." << endl;
	}
}