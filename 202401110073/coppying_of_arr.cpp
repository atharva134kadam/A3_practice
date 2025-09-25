//(#6) Copy one array into another array
#include <iostream>
using namespace std;

class ArrayCopy {
    int arr1[100], arr2[100], n;
public:
    void input() {
        cout << "Enter size of array: ";
        cin >> n;
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
    }
    void copyArray() {
        for (int i = 0; i < n; i++)
            arr2[i] = arr1[i];
        cout << "Copied array: ";
        for (int i = 0; i < n; i++)
            cout << arr2[i] << " ";
        cout << endl;
    }
};

int main() {
    ArrayCopy obj;
    obj.input();
    obj.copyArray();
    return 0;
}

