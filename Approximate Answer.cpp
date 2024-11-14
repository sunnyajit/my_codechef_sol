#include <bits/stdc++.h>
using namespace std;
// code written by sunny
int main() {
    int X, Y, K;
    cin >> X >> Y >> K;
    int difference = abs(X - Y);
    if (difference <= K) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
