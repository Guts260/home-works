#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    float result;
    cout << "plase enter x: ";
    cin >> x;
    cout << "plase enter y: ";
    cin >> y;
    cout << "plase enter z: ";
    cin >> z;
    result = (x - y) * (x + z) / (pow((x + y + z), 2) + 1);
    cout << "result: " << result << endl;
}

