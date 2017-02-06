#include <iostream>
using namespace std;
int main() {
	int cookies;
	cout << "Ruby, how many cookies do you want this time?" << endl;
	cin >> cookies;
	if (cookies < 5)
		cout << "You sure you want that litte? Alright, whatever." << endl;
	else if (cookies < 10)
		cout << "Okay, here." << endl;
	else if (cookies > 10)
		cout << "Ruby, do we need to have the talk about diabetes again?" << endl;
}