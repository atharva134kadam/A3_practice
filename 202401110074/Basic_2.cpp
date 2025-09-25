#include <iostream>
using namespace std;

class LargestOfThree {
public:
    void findLargest() {
        int a, b, c;
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;
        int largest = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
        cout << "Largest number is: " << largest << "\n";
    }
};

int main() {
    LargestOfThree obj;
    obj.findLargest();
    return 0;
}
