#include <bits/stdc++.h>
using namespace std;
// CODE WRITTEN BY Sunny..
int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--){
        int K;
        cin >> K;
        string D;
        cin >> D;
        cout<<min(K, 2-D[0]-D[K-1]+'0'+'0')<<endl;
    }
}
