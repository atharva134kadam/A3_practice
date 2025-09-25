#include <iostream>
using namespace std;

class Multiples {
public:
    void printMultiples() {
        int num, count;
        cout << "Enter number and count: ";
        cin >> num >> count;
        cout << "First " << count << " multiples of " << num << ": ";
        for (int i = 1; i <= count; i++) {
            cout << num * i << " ";
        }
        cout << "\n";
    }
};

int main() {
    Multiples obj;
    obj.printMultiples();
    return 0;
}
