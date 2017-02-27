#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>
using namespace std;
int main() {
	for (int i = 0; i < 10; i++) {
		Beep(200, 800 + i);
		Beep(500, 800 + 1);
	}
}