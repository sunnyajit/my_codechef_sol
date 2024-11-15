 #include <bits/stdc++.h>
using namespace std;
 // code written by sunny
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int> a(n);
        for(auto &e: a)
            cin>>e;
        long long int val = 0;
        for(auto e: a)
            val ^= e;
        for(int b=60, chk=0; b>0; b--){
            int cnt = 0;
            for(int i=0; i<n; i++)
                cnt += (((1ll<<b)&a[i])>0);
                
            if(cnt%2==0 && cnt>0)
                chk = 1;
                
            if(chk)     val |= (1ll<<b);
        }
        
        cout<<val<<"\n";
    }
}
