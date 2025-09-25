#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter order of square matrix (2 or 3): ";
    cin >> n;

    int a[3][3];
    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int det = 0;

    if (n == 2) {
        det = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
    }
    else if (n == 3) {
        det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])
            - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])
            + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
    }
    else {
        cout << "Only 2x2 and 3x3 matrices supported in this simple program." << endl;
        return 0;
    }

    cout << "Determinant of matrix = " << det << endl;
    return 0;
}

