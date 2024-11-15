 #include <bits/stdc++.h>
using namespace std;
// code written by sunny
int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n;
        string a, b;
        cin>>n>>a>>b;
        
        for(int i=0; i<n; i++)
        {
            int cnt = 0;
            
            while(a[i] != b[i]){
                cnt++;
                a[i] += 3;
                
                if(a[i] > 'Z')
                    a[i] = 'A' + (a[i]-'Z'-1);
            }
            
            cout<<cnt<<" ";
        }
        
        cout<<"\n";
    }
}
