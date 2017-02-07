#include <iostream>
using namespace std;
int main() {
	int age;
	cout << "How old are you?" << endl;
	cin >> age;
	if (age % 2 == 0)
		cout << "Is your name Stephen? Steven?" << endl;
	else
		cout << "That's odd." << endl;
}