#include <iostream>
#include <vector>
using namespace std;

class Dewesh {
public:
    void Largest() {
        int n;
        cout << "Enter size of array: ";
        cin >> n;
        vector<int> arr(n);
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) cin >> arr[i];

        int largest = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > largest) largest = arr[i];
        }
        cout << "Largest element = " << largest << "\n";
    }
};

int main() {
    Dewesh obj;
    obj.Largest();
    return 0;
}
