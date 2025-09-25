#include <iostream>
#include <vector>
using namespace std;

class CountPosNeg {
public:
    void count() {
        int n;
        cout << "Enter size of array: ";
        cin >> n;
        vector<int> arr(n);
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) cin >> arr[i];

        int pos = 0, neg = 0;
        for (int x : arr) {
            if (x > 0) pos++;
            else if (x < 0) neg++;
        }
        cout << "Positive count = " << pos << ", Negative count = " << neg << "\n";
    }
};

int main() {
    CountPosNeg obj;
    obj.count();
    return 0;
}
