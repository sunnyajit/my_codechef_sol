#include <bits/stdc++.h>
using namespace std;
 // code written by sunny
int main() {
    int t;
    cin>>t;
    
    vector<int> isPrime(1000001, 1);
    
    for(int i=2; i<=1000000; i++){
        if(!isPrime[i])     continue;
        
        for(int j=2*i; j<=1000000; j+=i)
            isPrime[j] = 0;
    }
    
    while(t--){
        int n;
        cin>>n;
        
        if(n == 1){
            cout<<1<<"\n";
            continue;
        }
        else if(n==2){
            cout<<2<<" "<<2<<"\n";
            continue;
        }
        else if(n==3){
            cout<<1<<" "<<2<<" "<<2<<"\n";
            continue;
        }
        
        cout<<1<<" ";
        
        int done = 1;
        
        if(n%2 == 0){
            done += 3;
            cout<<4<<" "<<4<<" "<<4<<" ";
        }
        
        for(int i=2; done<n; i++){
            if(isPrime[i]){
                done+=2;
                cout<<i<<" "<<i<<" ";
            }
        }
        
        cout<<"\n";
    }
}
