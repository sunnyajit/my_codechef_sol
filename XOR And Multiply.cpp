#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define endl "\n"
#define mod 998244353
//  code written by sunnny
int32_t main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a=n,b=n,c=(log2(n)+1);
        a<<=c;
        b<<=c;
        b+=n;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
