#include <bits/stdc++.h>
using namespace std;
/// code written by sunny
int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<int> a(n);
        for(auto &e: a)
            cin>>e;
        
        if(n==2 && a[1]<a[0])
            cout<<"NO\n";
        else if(n==3 && (a[1]<min(a[0], a[2]) || a[1]>max(a[0], a[2])))
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}
