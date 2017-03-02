#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
int input;
void Burping(int x); //function declaration
int main() {
	cout << "How many beeps do you want?" << endl;
	cin >> input;
	Burping(input); //function call

}
	void Burping(int x){ //function definition
		for (int i = 0; i < x; i++)
			PlaySound(TEXT("Blech.wav"), NULL, SND_FILENAME);
	}