#include <bits/stdc++.h>
using namespace std;
#define int long long
// code written by sunny
int32_t main() {
    int test_cases; cin >> test_cases;
    while (test_cases--) {
        int length, rows, total_result = 0;
        cin >> length >> rows;
        vector<array<int, 3>> counts(length);
        while (rows--) {
            string input_str; cin >> input_str;
            for (int i = 0; i < length; ++i) 
                counts[i][input_str[i] == '0' ? 0 : input_str[i] == '1' ? 1 : 2]++;
        }
        for (auto& c : counts) {
            int zero_count = c[0], one_count = c[1];
            for (int j = 0; j < c[2]; ++j) 
                (zero_count <= one_count) ? zero_count++ : one_count++;
            total_result += zero_count * one_count;
        }
        cout << total_result << endl;
    }
    return 0;
}
