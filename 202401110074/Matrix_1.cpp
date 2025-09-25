#include <iostream>
#include <vector>
using namespace std;

class MainDiagonal {
public:
    void printDiagonal() {
        int n;
        cout << "Enter size of square matrix: ";
        cin >> n;
        vector<vector<int>> mat(n, vector<int>(n));
        cout << "Enter matrix elements:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> mat[i][j];
            }
        }
        cout << "Main diagonal elements: ";
        for (int i = 0; i < n; i++) {
            cout << mat[i][i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    MainDiagonal obj;
    obj.printDiagonal();
    return 0;
}
