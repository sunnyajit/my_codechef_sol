#include <bits/stdc++.h>
using namespace std;
// code written by sunny...
void solve(){
    int N;
    cin >> N; // PASS The test case
    vector<int> B(N);
    for(int i = 0; i < N; i++){
        cin >> B[i];
    }
    sort(B.begin(), B.end());
    vector<int> perm(N);
    for(int i = 1; i <= N; i++){
        perm[i-1] = i;
    }
    for(int i = 0; i < N; i++){
        if(B[i] > perm[i]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
