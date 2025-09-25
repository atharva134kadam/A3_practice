//(#7) Multiply a matrix by a scalar
#include <iostream>
using namespace std;

class MatrixScalar {
    int mat[10][10], r, c, scalar;
public:
    void input() {
        cout << "Enter rows and columns: ";
        cin >> r >> c;
        cout << "Enter matrix elements: \n";
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> mat[i][j];
        cout << "Enter scalar value: ";
        cin >> scalar;
    }
    void multiply() {
        cout << "Resultant Matrix:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << mat[i][j] * scalar << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    MatrixScalar obj;
    obj.input();
    obj.multiply();
    return 0;
}

