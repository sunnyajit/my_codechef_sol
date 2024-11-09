#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
// code written by sunny
int main() {
    ios::sync_with_stdio(false);  
    cin.tie(nullptr);  
    int T; cin >> T;
    while (T--) {
        int pm, div, sm = 0, q_inv = 1, exp = MOD - 2;
        cin >> pm >> div;
        vector<int> stones(pm);
        for (int &stone : stones) { cin >> stone; sm ^= stone; }
        int result_p = sm ? div + 1 : div - 1, result_q = 2 * div;
        while (exp) { 
            if (exp % 2) q_inv = (1LL * q_inv * result_q) % MOD; 
            result_q = (1LL * result_q * result_q) % MOD; 
            exp /= 2; 
        }
        cout << (1LL * result_p * q_inv) % MOD << "\n";
    }
    return 0;
}