#include <bits/stdc++.h>
using namespace std;
// code written by sunny
int main() {
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        vector<int> ans, pos(n+1,0);
        for(int i=1;i<=2*n;i++)
        {
            int x; cin>>x; 
            if(!pos[x])
                ans.push_back(x);
    
            pos[x]=1;
        }
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
}
