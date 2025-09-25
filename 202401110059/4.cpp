#include <iostream>
using namespace std;

int main() {
    long long num, square, temp;
    cout << "Enter a number: ";
    cin >> num;

    square = num * num;
    temp = num;

    while (temp > 0) {
        if (temp % 10 != square % 10) {
            cout << num << " is not an Automorphic number." << endl;
            return 0;
        }
        temp /= 10;
        square /= 10;
    }

    cout << num << " is an Automorphic number." << endl;
    return 0;
}

