#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n); // sort the array in ascending order

    // find second largest by skipping duplicates from the end
    int secondLargest = -1;
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] != arr[n - 1]) {
            secondLargest = arr[i];
            break;
        }
    }

    if(secondLargest == -1)
        cout << "No second largest element found." << endl;
    else
        cout << "The second largest element is: " << secondLargest << endl;

    return 0;
}

