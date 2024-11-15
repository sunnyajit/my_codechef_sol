
#include <bits/stdc++.h>
using namespace std;
// code written by sunny...
int main() { 
  int T;
  cin>>T;
  for(int i=0;i<T;i++){
      int N,M,rem,qut,ut,nt;
      cin>>N>>M;
      if(M<N){
          cout<<N-M<<endl;
      }else{

      if(M%N==0){
          cout<<0<<endl;
      } else{
          rem=M%N;
          qut=M/N;
          ut=qut+1;
          nt=(N*ut)-M;
          if(nt<rem){
              cout<<nt<<endl;
          }else{
              cout<<rem<<endl;
          }
      }
                
      }
  }

}

 
