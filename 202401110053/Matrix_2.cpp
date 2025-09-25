#include <iostream>
#include <vector>
using namespace std;

class Dewesh {
public:
    void add() {
        int r, c;
        cout << "Enter rows and columns: ";
        cin >> r >> c;

        vector<vector<int>> A(r, vector<int>(c));
        vector<vector<int>> B(r, vector<int>(c));
        vector<vector<int>> sum(r, vector<int>(c));

        cout << "Enter elements of first matrix:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> A[i][j];
            }
        }

        cout << "Enter elements of second matrix:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> B[i][j];
            }
        }

        cout << "Sum of matrices:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                sum[i][j] = A[i][j] + B[i][j];
                cout << sum[i][j] << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    Dewesh obj;
    obj.add();
    return 0;
}
