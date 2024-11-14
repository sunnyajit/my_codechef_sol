#include<bits/stdc++.h>
using namespace std;
#define int long long
// code written by sunny
int32_t main() {
    int a, b, c;
    cin >> a >> b >> c;
    float total = (4 - (a + b + c)) + a + (0.5 * b);
    float opponent = (0.5 * b) + c;
    cout << (total > opponent ? "Yes" : "No") << endl;

    return 0;
}
