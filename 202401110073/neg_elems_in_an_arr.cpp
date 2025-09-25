//(#5) Count the number of negative elements in an array
#include <iostream>
using namespace std;

class NegativeCount {
    int arr[100], n;
public:
    void input() {
        cout << "Enter size of array: ";
        cin >> n;
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }
    void countNegatives() {
        int count = 0;
        for (int i = 0; i < n; i++)
            if (arr[i] < 0) count++;
        cout << "Number of negative elements = " << count << endl;
    }
};

int main() {
    NegativeCount obj;
    obj.input();
    obj.countNegatives();
    return 0;
}

