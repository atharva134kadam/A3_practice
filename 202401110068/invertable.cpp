//check the matrix is invertable or not
#include <iostream>
using namespace std;

class Matrix {
private:
    int n;              // Size of the square matrix
    double mat[10][10]; // Static array (maximum size 10x10)

public:
    Matrix(int size) {
        n = size;
        cout << "Enter elements of " << n << "x" << n << " matrix:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> mat[i][j];
            }
        }
    }

    // Function to calculate determinant recursively
    double determinant(double m[10][10], int size) {
        if (size == 1)
            return m[0][0];
        if (size == 2)
            return (m[0][0] * m[1][1]) - (m[0][1] * m[1][0]);

        double det = 0;
        double sub[10][10];
        for (int p = 0; p < size; p++) {
            int subi = 0;
            for (int i = 1; i < size; i++) {
                int subj = 0;
                for (int j = 0; j < size; j++) {
                    if (j == p) continue;
                    sub[subi][subj] = m[i][j];
                    subj++;
                }
                subi++;
            }
            det += m[0][p] * determinant(sub, size - 1) * ((p % 2 == 0) ? 1 : -1);
        }
        return det;
    }

    void checkInvertible() {
        double det = determinant(mat, n);
        cout << "\nDeterminant = " << det << endl;
        if (det != 0)
            cout << "The matrix is invertible.\n";
        else
            cout << "The matrix is NOT invertible.\n";
    }
};

int main() {
    int n;
    cout << "Enter size of square matrix (max 10): ";
    cin >> n;

    if (n <= 0 || n > 10) {
        cout << "Invalid matrix size.\n";
        return 0;
    }

    Matrix m(n);
    m.checkInvertible();

    return 0;
}

