#include <bits/stdc++.h>
using namespace std;
// code written by sunny
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int P; cin >> P;  
    while (P--) {  
        int M, k; cin >> M >> k;  
        vector<int> L(M);  
        for (int &z : L) cin >> z;  
        sort(L.begin(), L.end());
        cout << (k == 1 ? 2 * L[M - 1] + L[0] + L[M - 2] : L[0] + L[M - 1 - k] + L[M - 1] + L[M - 2]) << '\n';
    }
}
