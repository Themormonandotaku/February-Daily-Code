#include <iostream>
using namespace std;
int main() {
	int height;
	int width;
	int volume;
	cout << "What's your height?" << endl;
	cin >> height;
	cout << "What's your width?" << endl;
	cin >> width;
	volume = height*width / 3;
	cout << "The volume is " << volume << endl;
}