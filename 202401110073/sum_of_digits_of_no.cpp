// (#4) Find the sum of digits of a number
#include <iostream>
using namespace std;

class SumOfDigits {
    int num;
public:
    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }
    void findSum() {
        int n = num, sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        cout << "Sum of digits = " << sum << endl;
    }
};

int main() {
    SumOfDigits obj;
    obj.input();
    obj.findSum();
    return 0;
}
