#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int mat[r][c];
    cout << "Enter elements:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> mat[i][j];

    cout << "Transpose:\n";
    for(int j = 0; j < c; j++) {
        for(int i = 0; i < r; i++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    return 0;
}

