#include <iostream>
#include <vector>
using namespace std;

class Dewesh {
public:
    void Sum() {
        int n;
        cout << "Enter size of array: ";
        cin >> n;
        vector<int> arr(n);
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) cin >> arr[i];

        int sum = 0;
        for (int x : arr) sum += x;

        cout << "Sum of elements = " << sum << "\n";
    }
};

int main() {
    Dewesh obj;
    obj.Sum();
    return 0;
}
