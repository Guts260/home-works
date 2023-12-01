#include <iostream>

using namespace std;

int main() {
	float x, y;
	float sum, difference, multiplication,divison ;
	cout << "pless enter numb 1 ";
	cin >> x;
	cout << "pless enter numb 2 ";
	cin >> y;

	sum = x + y;
	difference = x - y;
	multiplication = x * y;
	divison= x / y;

	cout << " + : " << sum << endl;
	cout << " - : " << difference << endl;
	cout << " * : " << multiplication << endl;
	cout << " / : " << divison << endl;
}

   