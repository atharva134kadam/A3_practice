#include <iostream>
using namespace std;

class Dewesh {
public:
    void Number() {
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
    Dewesh obj;
    obj.Number();
    return 0;
}
