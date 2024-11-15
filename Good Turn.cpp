#include <iostream>
using namespace std;
// code written by sunny
int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int X, Y;
        cin >> X >> Y;
        if (X + Y > 6) {
            cout << "YES" << endl;  
        } else {
            cout << "NO" << endl;  
        }
    }

    return 0;
}
