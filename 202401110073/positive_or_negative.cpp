// (#1) Check whether a number is positive or negative
#include <iostream>
using namespace std;

class NumberCheck {
    int num;
public:
    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }
    void check() {
        if (num > 0)
            cout << num << " is Positive" << endl;
        else if (num < 0)
            cout << num << " is Negative" << endl;
        else
            cout << "Number is Zero" << endl;
    }
};

int main() {
    NumberCheck obj;
    obj.input();
    obj.check();
    return 0;
}

