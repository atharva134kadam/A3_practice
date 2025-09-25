#include <iostream>
using namespace std;

class Dewesh {
public:
    void Divisible() {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        if (num % 5 == 0)
            cout << num << " is divisible by 5\n";
        else
            cout << num << " is not divisible by 5\n";
    }
};

int main() {
    Dewesh obj;
    obj.Divisible();
    return 0;
}
