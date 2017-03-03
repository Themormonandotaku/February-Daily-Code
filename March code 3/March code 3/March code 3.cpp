#include <iostream>
#include <windows.h>
int input;
void Calculator(int a, int b, int c); //function declaration
using namespace std;
int main() {
	int a;
	int b;
	int c;
	cout << "Type in 3 numbers." << endl;
	
	cin >> a;
	cin >> b;
	cin >> c;
	Calculator(a, b, c);
}


	void Calculator(int a, int b, int c){ //function definition

	if ((a > b) && (a > c) && ( c > b))
		cout << b <<c <<a << endl;
	if ((a > b) && (a > c) && (b > c))
		cout << c << b << a << endl;
	if ((b > a) && (b > c) && (c > a))
		cout << a << c << b << endl;
	if ((b > a) && (b > c) && (a > c))
		cout << c << a << b << endl;
	if ((c > a) && (c > b) && (b > a))
		cout << a << b << c << endl;
	if ((c > a) && (c > b) && (a > b))
		cout << b << a << c << endl;
}