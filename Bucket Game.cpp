#include <bits/stdc++.h>
using namespace std;
//  code written by sunny
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    int one_count = 0, two_count=0, sum=0;
    for(auto & i:v){
        cin>>i;
        if(i==1){
            one_count++;
        }
        else{
            two_count++;
            sum+=(i-2);
        }
    }
    int flag = one_count%2;
    int alice = ceil(one_count/2.0);
    int bob = floor(one_count/2.0);
    if(one_count%2){
        if(sum%2){
            bob+=two_count;
            
        } else{
            alice+=two_count;
        }
    }
    else{
        if(sum%2){
            alice+=two_count;
        }else{
            bob+=two_count;
        }
    }
    
    if(alice>bob){
        cout<<"Alice\n";
    }else if(bob>alice){
        cout<<"Bob\n";
    }
    else{
        cout<<"Draw\n";
    }
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve(); // call fucntion 
	}

}
