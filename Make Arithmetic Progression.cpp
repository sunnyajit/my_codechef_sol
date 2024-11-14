#include <iostream>
using namespace std;
// code writtten by sunny
int main() {
    int T;
    cin >> T;   
    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        if (Y - X == Z - Y) {
            cout << 0 << endl;  
        } else {
            cout << 1 << endl;   
        }
    }
    
    return 0;
}
