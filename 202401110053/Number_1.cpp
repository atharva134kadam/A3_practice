#include <iostream>
using namespace std;

class Dewesh {
public:
    void Square() {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        cout << "Square of " << num << " is " << (num * num) << "\n";
    }
};

int main() {
    Dewesh obj;
    obj.Square();
    return 0;
}
