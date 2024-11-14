#include <iostream>
#include <algorithm>
using namespace std;
// code written by sunny
int main() {
    int T;
    cin >> T;   
    
    while (T--) {
        int R, G, B;
        cin >> R >> G >> B;
        int maxButterflies = max({R, G, B});
        int sumOtherTwo = R + G + B - maxButterflies;
        if (maxButterflies <= sumOtherTwo) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
