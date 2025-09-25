#include <iostream>
using namespace std;

class marks {
private:
    int n;
    int mar[100];

public:
    void input() {
        cout << "Enter no of subjects: ";
        cin >> n;
        cout << "Enter marks scored in each subject: ";
        for (int i = 0; i < n; i++) {
            cin >> mar[i];
        }
    }

    int highests() {
        int highest = mar[0];
        for (int i = 1; i < n; i++) {
            if (mar[i] > highest) {
                highest = mar[i];
            }
        }
        return highest;
    }

    int lowest() {
        int low = mar[0];
        for (int i = 1; i < n; i++) {
            if (mar[i] < low) {
                low = mar[i];
            }
        }
        return low;
    }
};

int main() {
    marks obj;
    obj.input();
    cout << "Highest marks = " << obj.highests() << endl;
    cout << "Lowest marks = " << obj.lowest() << endl;
    return 0;
}

