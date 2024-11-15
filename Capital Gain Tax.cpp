#include <bits/stdc++.h>
using namespace std;
// code written by sunny..
int main() {
    int X, Y;
    cin >> X >> Y;
    
    if (Y > X) {
        cout << "INCREASED" << endl;
    } else if (Y < X) {
        cout << "DECREASED" << endl;
    } else {
        cout << "SAME" << endl;
    }
    
    return 0;
}
