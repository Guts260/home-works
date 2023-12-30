#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int numbers[SIZE];

    cout << "Enter 10 integers: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    int sum = 0;
    int max = numbers[0];
    int min = numbers[0];

    for (int i = 0; i < SIZE; i++) {
        sum += numbers[i];
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    double average = static_cast<double>(sum) / SIZE;

    cout << "Average: " << average << endl;
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;
}
////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main() {
    int A[5], B[5];

    cout << "Enter values for array A: ";
    for (int i = 0; i < 5; i++) {
        cin >> A[i];
    }

    cout << "Enter values for array B: ";
    for (int i = 0; i < 5; i++) {
        cin >> B[i];
    }

    int temp = A[0];
    A[0] = B[0];
    B[0] = temp;

    cout << "\nAfter swapping A[1] and B[1]:\n";

    cout << "Array A: ";
    for (int i = 0; i < 5; i++) {
        cout << A[i] << " ";
    }

    cout << "\nArray B: ";
    for (int i = 0; i < 5; i++) {
        cout << B[i] << " ";
    }
}
//////////////////////////////////////////////////////////////////////////////