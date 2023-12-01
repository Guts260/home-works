#include <iostream>
using namespace std;

int main() {
	float salary;
	cin >> salary;
	float finalsalary;
	if (salary < 6) {
		cout << salary;

	}
	else if (salary >= 6 && salary < 8) {
		finalsalary = salary - (salary * 0.05);
		cout << finalsalary;
	}
	else if (salary >= 8 && salary < 10) {
		finalsalary = salary - (salary * 0.10);
		cout << finalsalary;
	}
	else if (salary >= 10 && salary < 14) {
		finalsalary = salary - (salary * 0.15);
		cout << finalsalary;
	}
	else if (salary >= 14 && salary < 18) {
		finalsalary = salary - (salary * 0.20);
		cout << finalsalary;
	}
	else if (salary >= 18 && salary < 25) {
		finalsalary = salary - (salary * 0.25);
		cout << finalsalary;
	}
	else if (salary > 25) {
		finalsalary = salary - (salary * 0.35);
		cout << finalsalary;
	}
}
