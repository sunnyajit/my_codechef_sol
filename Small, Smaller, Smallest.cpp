 #include <bits/stdc++.h>
using namespace std;
// code written by sunny
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        int count_1 = 0, count_0 = 0;
        for (char c : S) {
            if (c == '1') {
                count_1++;
            } else {
                count_0++;
            }
        }
        if (count_1 == 0) {
            cout << count_0 << "\n"; 
        } else if (count_1 % 2 == 1) {
            cout << 1 << "\n";  
        } else {
            cout << 0 << "\n";  
        }
    }
    return 0;
}