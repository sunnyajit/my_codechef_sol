 #include <bits/stdc++.h>
using namespace std;
// code written by sunny
int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) 
            cin>>p[i];
        
        vector<int> ans(n+1,0);
        for (int i = 0; i < n; i++) 
        {
            int s = 0;
            for (int j = i; j < n; j++) 
        {
                s += p[j];
    
                if (s<=n)
                    ans[s]++;
                else 
                    break;
            }
        }
    
        for (int i = 1; i <= n; i++) 
            cout<<ans[i]<<" ";
        cout<<endl;
    }
}
