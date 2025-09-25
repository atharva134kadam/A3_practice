#include <iostream>
using namespace std;

class Dewesh {
public:
    void Largest() {
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        if (a > b)
            cout << "Largest is: " << a << "\n";
        else
            cout << "Largest is: " << b << "\n";
    }
};

int main() {
    Dewesh obj;
    obj.Largest();
    return 0;
}
