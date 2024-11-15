
#include <bits/stdc++.h>
using namespace std;
// CODE WRITTEN BY SUNNY....
int main() {
  int T;
  cin >> T; //
  for(int i=0;i<T;i++){
      int N,X;
      cin>>N>>X;
      if(N==X){
          int per =0;
          for(int j=1;j<=N;j++){
              per+=pow(2,j);
          }
          cout << per << endl;
      }else{
          int all =N-X;
          int temp=0;
          for(int i=all+1;i<=N;i++){
              temp+=pow(2,i);
          }
          for(int m=1;m<=all; m++){
              temp-=pow(2,m);
          }
           cout <<temp<<endl;
      }
  }

}
