#include <iostream>
using namespace std;
int main() {
	int woof;
	cout << "How many woofs do you want?" << endl;
	cin >> woof;
	for (int i = 0; i < woof; i++) {
		cout << "Woof" << endl;
	}
}