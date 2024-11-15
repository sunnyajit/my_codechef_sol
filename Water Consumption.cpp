 #include <iostream>
using namespace std;
// code written by sunny
int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int X;
         cin >> X;
        if (X >= 2000) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl; 
        }
    }
    return 0;
}
