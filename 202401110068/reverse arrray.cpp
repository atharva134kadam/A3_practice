#include<iostream>
using namespace std;

class mat {
private:
    int n;
    int arr[100];    

public:
    void input() {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter elements: ";
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
    }

    void rev() {
        cout << "Reversed elements: ";
        for(int i=n-1; i>=0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    mat obj;
    obj.input();
    obj.rev();
    return 0;
}

