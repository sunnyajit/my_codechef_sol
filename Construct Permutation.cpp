 #include <bits/stdc++.h>
using namespace std;
#define int long long
 // code written by sunny
void solve() {
    int n, operations;
    cin >> n >> operations;
 
    if (operations > ((n - 1) * (n - 1)) || operations < (((n - 1) * n) / 2)) {
        cout << -1 << endl;
    } else if (n == 1) {
        cout << 1 << endl;
    } else {
        vector<int> result(n, 0);
        result[0] = 1;
 
        vector<int> changes(n, 0);
        for (int i = 1; i < n; i++) {
            changes[i] = i;
            operations -= i;
        }
 
        int l = n - 2;
        while (operations) {
            int f = n - 1 - changes[l];
            f = min(f, operations);
            operations -= f;
            changes[l] += f;
            l--;
        }
 
        int f = 0;
        result[0] = 1;
 
        set<int> remaining, modifiedSet;
        for (int i = 1; i <= n; i++) {
            remaining.insert(i);
            modifiedSet.insert(1 + changes[i - 1]);
        }
 
        modifiedSet.erase(0);
        while (!modifiedSet.empty()) {
            remaining.erase(*modifiedSet.begin());
            modifiedSet.erase(modifiedSet.begin());
        }
 
        if (remaining.find(1) != remaining.end()) {
            remaining.erase(1);
        }
 
        for (int i = 1; i < n; i++) {
            if (f == changes[i]) {
                result[i] = (*remaining.begin());
                remaining.erase(remaining.begin());
            } else {
                f = changes[i];
                result[i] = 1 + f;
            }
        }
 
        for (int i = 0; i < n; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) 
        solve();
    
}
