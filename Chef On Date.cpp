 #include <iostream>
using namespace std;
// code written by sunny
int main() {
    int T;
    cin >> T; 
    while (T--) {
        int X, Y;
        cin >> X >> Y; 
        if (X >= Y) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl;  
        }
    }

    return 0;
}
