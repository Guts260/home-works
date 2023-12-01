#include <iostream>
using namespace std;
int main() {
	char character;
	cout << "enter the character";
	cin >> character;
	switch (character) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			cout << "VOWEL" << endl;
		break;
	}
}