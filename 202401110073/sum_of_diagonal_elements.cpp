// (#8) Find the sum of diagonal elements of a square matrix
#include <iostream>
using namespace std;

class MatrixDiagonal {
    int mat[10][10], n;
public:
    void input() {
        cout << "Enter size of square matrix: ";
        cin >> n;
        cout << "Enter matrix elements:\n";
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> mat[i][j];
    }
    void diagonalSum() {
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += mat[i][i];
        cout << "Sum of diagonal elements = " << sum << endl;
    }
};

int main() {
    MatrixDiagonal obj;
    obj.input();
    obj.diagonalSum();
    return 0;
}

