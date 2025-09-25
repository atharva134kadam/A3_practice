//print no pairs having sum 3 in the array
#include <iostream>
using namespace std;

class PairSum {
private:
    int *arr;   // pointer to store array
    int size;   // size of array

public:
    // Constructor
    PairSum(int n) {
        size = n;
        arr = new int[size];
    }

    // Destructor
    ~PairSum() {
        delete[] arr;
    }

    // Function to take input
    void inputArray() {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Function to count pairs with sum = 3
    int countPairsWithSum3() {
        int count = 0;
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] + arr[j] == 3) {
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    PairSum ps(n);          // create object
    ps.inputArray();        // input array

    int result = ps.countPairsWithSum3();   // find pairs
    cout << "Number of pairs with sum 3: " << result << endl;

    return 0;
}

