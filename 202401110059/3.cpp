#include <iostream>
using namespace std;

class NeonNumber {
    int num;
public:
    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }

    void checkNeon() {
        int square = num * num;
        int sum = 0, temp = square;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum == num)
            cout << num << " is a Neon number." << endl;
        else
            cout << num << " is not a Neon number." << endl;
    }
};

int main() {
    NeonNumber n;
    n.input();
    n.checkNeon();
    return 0;
}

