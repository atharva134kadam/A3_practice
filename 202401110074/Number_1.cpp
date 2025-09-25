#include <iostream>
using namespace std;

class ReverseDigits {
public:
    void reverse() {
        int num;
        cout << "Enter an integer: ";
        cin >> num;
        cout << "Digits in reverse: ";
        while (num > 0) {
            cout << num % 10;
            num /= 10;
        }
        cout << "\n";
    }
};

int main() {
    ReverseDigits obj;
    obj.reverse();
    return 0;
}
