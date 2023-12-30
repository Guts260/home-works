
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the base (m): ";
    cin >> m;

    cout << "Enter the exponent (n): ";
    cin >> n;

    double result = pow(m, n);
    cout << "Result: " << result << endl;
}
////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the dividend (m): ";
    cin >> m;

    cout << "Enter the divisor (n): ";
    cin >> n;

    int quotient = m / n;
    int remainder = m - (quotient * n);

    cout << "Remainder: " << remainder << endl;
    cout << "Quotient: " << quotient << endl;
}
////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }

    cout << "Sum of divisors: " << sum << endl;
}
//////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int gcd(int m, int n) {
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}

int main() {
    int m, n;
    cout << "Enter the first number (m): ";
    cin >> m;

    cout << "Enter the second number (n): ";
    cin >> n;

    int result = gcd(m, n);
    cout << "GCD: " << result << endl;

}
//////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int sum = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime(i))
            sum += i;
    }

    cout << "Sum of prime numbers less than " << n << ": " << sum << endl;

}
//////////////////////////////////////////////////////////////////////////////