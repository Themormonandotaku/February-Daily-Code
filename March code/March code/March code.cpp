#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
int input;
void Jukebox(int x);
int main() {
	cout << "What do you want? Do you want to hear a dog, a cat, or a gun? It's 1, 2, and 3." << endl;
	cin >> input;
	if (input == 1)
		Jukebox(1);
	else if (input == 2)
		Jukebox(2);
	else if (input == 3)
		Jukebox(3);

	void Jukebox(int x);
		int number = input;
		switch (number) {
		case 1:
			PlaySound(TEXT("bark.wav"), NULL, SND_FILENAME);
			break;
		case 2:
			PlaySound(TEXT("meow.wav"), NULL, SND_FILENAME);
			break;
		case 3:
			PlaySound(TEXT("gun.wav"), NULL, SND_FILENAME);
			break;
		}
	}