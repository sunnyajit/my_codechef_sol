#include <bits/stdc++.h>
using namespace std;
// code written by sunny
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int test_cases; cin >> test_cases;
    while (test_cases--) {
        int rows, cols; cin >> rows >> cols;
        vector<vector<int>> matrix(rows, vector<int>(cols, 2));
        for (int i = 0; i < min(rows, cols); i++) matrix[i][i] = 3;
        if (rows > cols) for (int i = cols; i < rows; i++) matrix[i][0] = 3;
        else for (int i = rows; i < cols; i++) matrix[0][i] = 3;
        for (auto& row : matrix) { for (int val : row) cout << val << " "; cout << endl; }
    }
}
