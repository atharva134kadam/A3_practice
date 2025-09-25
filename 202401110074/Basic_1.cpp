#include <iostream>
using namespace std;

class EvenOdd {
public:
    void check() {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        if (num % 2 == 0)
            cout << num << " is Even\n";
        else
            cout << num << " is Odd\n";
    }
};

int main() {
    EvenOdd obj;
    obj.check();
    return 0;
}
