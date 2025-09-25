#include <iostream>
using namespace std;

int main() {
    int row = 3, col = 3;
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int trans[3][3];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            trans[j][i] = mat[i][j];
        }
    }

    cout << "Transpose Matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
