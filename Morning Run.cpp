#include<iostream>
using namespace std;
// code written by sunny
int main(){
    int X,Y;
    cin >> X >> Y;
    int prt = 2*(X + Y);
    if(prt>=1000){
        cout << "YES" << endl;
    }else{
        cout<< "NO" << endl;
    }
    
    return 0;
}
