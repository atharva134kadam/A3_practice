#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int mat[n][n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> mat[i][j];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0)) {
                cout << "Not an identity matrix." << endl;
                return 0;
            }
        }
    }

    cout << "Identity matrix." << endl;
    return 0;
}

