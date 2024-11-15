#include <bits/stdc++.h>
using namespace std;
// code written by sunny
int main() {
	// your code goes here
	// take the test case..
    int T;
    cin >> T;
    while(T-->0){
        int N,K;
        cin >> N >> K;
        // cal the required sum for the 1st k natural no + k-1 separations
        long long req_sum = (K * (K+1) / 2) + (K-1);
        // check the condition..
        if(req_sum - N <= 0){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
         }
        
    }
    
    return 0;
}

