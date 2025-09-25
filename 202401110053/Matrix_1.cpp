#include <iostream>
#include <vector>
using namespace std;

class Dewesh {
public:
    void transpose() {
        int r, c;
        cout << "Enter rows and columns: ";
        cin >> r >> c;
        vector<vector<int>> mat(r, vector<int>(c));

        cout << "Enter matrix elements:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> mat[i][j];
            }
        }

        cout << "Transpose of matrix:\n";
        for (int j = 0; j < c; j++) {
            for (int i = 0; i < r; i++) {
                cout << mat[i][j] << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    Dewesh obj;
    obj.transpose();
    return 0;
}
