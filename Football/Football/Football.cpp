#include <iostream>
using namespace std;
int main() {
	char input;
	cout << "Do you prefer the Broncos or the Raiders?" << endl;
	cin >> input;
	if (input == 'b')
		cout << "Go Broncos!" << endl;
	else if (input == 'r')
		cout << "You've got 5 seconds to run." << endl;
}