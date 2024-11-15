#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
// code written by sunny
long long _pow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}
 
int main() {
    int t;
    cin>>t;
    
    while(t--){
        long long n,k; 
        cin>>n>>k;
        
        long long ans = _pow(2, n-1);
        
        cout<<_pow(ans, k)<<"\n";
    }
}
