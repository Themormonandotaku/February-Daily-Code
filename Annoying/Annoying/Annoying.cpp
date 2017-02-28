#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;
void Annoying();
int main() {
Annoying();
}

void Annoying()
{
	system("Color 6d");
	Beep(400, 800);
	Beep(900, 800);
	MessageBox(NULL, "Your annoying me", "S", NULL);
}