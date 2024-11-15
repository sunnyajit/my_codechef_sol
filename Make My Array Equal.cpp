#include<bits/stdc++.h>
using namespace std;
// code written by sunny..
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        long long d[N];
        map<int, int>cap;
        for(int j=0; j<N; j++){
            cin >> d[j];
            if(d[j]!=0){
                cap[d[j]]++;
            }
        }
        if(cap.size()==1 || cap.size()==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
