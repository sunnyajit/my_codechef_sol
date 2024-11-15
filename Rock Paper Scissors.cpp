#include<iostream>
#include<string>
// code  written by sunny
using namespace std;

int fun(string s, int n){
    int ctn = 0;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]){
            ctn++;
            i++;
        }
    }
    return ctn;
}
int main(){   
    int t;
    cin >> t;
    while(t--){ 
        int n;
        cin >> n;
        string s;
        cin >> s;
        int res = fun(s, n);
        cout<< n - res << endl;
    }
    return 0;
}
