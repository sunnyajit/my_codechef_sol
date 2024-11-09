#include <bits/stdc++.h>
using namespace std;
// code written by sunny
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int rows, cols;
        cin >> rows >> cols;
        vector<vector<int>> matrix(rows, vector<int>(cols, 2));
        for (int k = 0; k < min(rows, cols); k++) matrix[k][k] = 3;
        if (rows > cols) 
            for (int k = cols; k < rows; k++) matrix[k][0] = 3;
        else 
            for (int k = rows; k < cols; k++) matrix[0][k] = 3;
        for (const auto &row : matrix) {
            for (int value : row) cout << value << " ";
            cout << '\n';
        }
    }
    
    return 0;
}
