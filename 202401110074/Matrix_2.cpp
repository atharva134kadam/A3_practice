#include <iostream>
#include <vector>
using namespace std;

class SumMatrix {
public:
    void calculateSum() {
        int r, c;
        cout << "Enter rows and columns: ";
        cin >> r >> c;
        vector<vector<int>> mat(r, vector<int>(c));
        int sum = 0;
        cout << "Enter matrix elements:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> mat[i][j];
                sum += mat[i][j];
            }
        }
        cout << "Sum of matrix elements: " << sum << "\n";
    }
};

int main() {
    SumMatrix obj;
    obj.calculateSum();
    return 0;
}
