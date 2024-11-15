#include <bits/stdc++.h>
using namespace std;
// code written by sunny
int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T-->0){
	    int A,B,C,D;
	    cin >> A >> B >>C >> D;
	    int j = A+B+C-max({A,B,C})-min({A,B,C});
	    int k = max({A,B,C}) - j;
	    int f = j - min({A,B,C});
	    int g = min(k,f);
	    if(D>=g){
	        cout<<"YES"<<endl;
	    } else{
	        cout<<"NO"<<endl;
	    }
	}

}
