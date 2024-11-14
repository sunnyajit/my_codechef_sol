#include <iostream>
#include <cmath>
using namespace std;
// code written by sunny
void solve() {
    long long k, d, f;
    cin >> k >> d >> f;
    string sunny;
    cin >> sunny;
    long long dm = 0, np = 0;
    for (long long i = 0; i < k; ++i) {
        if (sunny[i] == 'U') ++np;
        else if (sunny[i] == 'D') --np;
        else if (sunny[i] == 'L') --dm;
        else if (sunny[i] == 'R') ++dm;
        long long dis = abs(d - dm) + abs(f - np);
        if (dis <= i + 1 && (dis - (i + 1)) % 2 == 0) {
            cout << "Yes\n";
            return;
        }
    }

    cout << "No\n";
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);  

    long long t;
    cin >> t;
    while (t--) solve();

    return 0;
}
