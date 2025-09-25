// (#3) Check whether a number is a Perfect Square
#include <iostream>
#include <cmath>
using namespace std;

class PerfectSquare {
    int num;
public:
    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }
    void checkSquare() {
        int root = sqrt(num);
        if (root * root == num)
            cout << num << " is a Perfect Square" << endl;
        else
            cout << num << " is NOT a Perfect Square" << endl;
    }
};

int main() {
    PerfectSquare obj;
    obj.input();
    obj.checkSquare();
    return 0;
}

