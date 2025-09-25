//find the determinant of matrix
#include <iostream>
using namespace std;

class Matrix {
private:
    int n;                  
    int mat[10][10];        

public:
    // Constructor
    Matrix(int size) {
        n = size;
    }

    // Input function
    void inputMatrix() {
        cout << "Enter elements of " << n << "x" << n << " matrix:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> mat[i][j];
            }
        }
    }

    // Function to calculate determinant recursively
    int determinant(int A[10][10], int size) {
        if (size == 1)
            return A[0][0];

        if (size == 2)
            return (A[0][0] * A[1][1] - A[0][1] * A[1][0]);

        int temp[10][10];   // minor matrix
        int det = 0;
        int sign = 1;

        // Expansion along first row
        for (int col = 0; col < size; col++) {
            int subi = 0;
            for (int i = 1; i < size; i++) {
                int subj = 0;
                for (int j = 0; j < size; j++) {
                    if (j == col) continue;
                    temp[subi][subj] = A[i][j];
                    subj++;
                }
                subi++;
            }
            det += sign * A[0][col] * determinant(temp, size - 1);
            sign = -sign;
        }

        return det;
    }

    
    int getDeterminant() {
        return determinant(mat, n);
    }
};

int main() {
    int n;
    cout << "Enter order of square matrix (max 10): ";
    cin >> n;

    Matrix m(n);
    m.inputMatrix();

    cout << "Determinant = " << m.getDeterminant() << endl;

    return 0;
}

