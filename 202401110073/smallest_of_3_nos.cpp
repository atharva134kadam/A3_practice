// (#2) Smallest of three numbers
#include <iostream>
using namespace std;

class Smallest {
    int a, b, c;
public:
    void input() {
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;
    }
    void findSmallest() {
        int smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
        cout << "Smallest number = " << smallest << endl;
    }
};

int main() {
    Smallest obj;
    obj.input();
    obj.findSmallest();
    return 0;
}

