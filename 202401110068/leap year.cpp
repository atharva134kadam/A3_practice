//check which year is leap year
#include<iostream>
using namespace std;

class det {
private:
    int year;

public:
    void input() {
        cout << "Enter year: ";
        cin >> year;
    }

    bool condition() {
        // Correct leap year condition
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    det obj;
    obj.input();

    if (obj.condition()) {
        cout << "Yes, it is a leap year\n";
    } else {
        cout << "No, it is not a leap year\n";
    }

    return 0;
}

