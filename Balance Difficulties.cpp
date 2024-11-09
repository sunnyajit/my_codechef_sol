#include <bits/stdc++.h>
using namespace std;
// code written by sunny
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);  
    int t; 
    cin >> t;  
    while (t--) {
        int n, x; 
        cin >> n >> x;  
        vector<int> arr(n);  
        for (int &el : arr) cin >> el; 
        if (n == 1) {  
            cout << "0\n" << arr[0] << endl; 
            continue;
        }
        int l = 0, r = 2e9, kOpt = r; 
        while (l <= r) {  
            int midK = (l + r) / 2;  
            bool feasible = true; 
            int lowPrev = arr[0] - midK, highPrev = arr[0] + midK;
            for (int i = 1; i < n; ++i) {  
                int lowCurr = max(arr[i] - midK, lowPrev);
                int highCurr = min(arr[i] + midK, highPrev + x);
                if (lowCurr > highCurr) {
                    feasible = false; 
                    break; 
                }
                lowPrev = lowCurr; 
                highPrev = highCurr;  
            }

            if (feasible) {
                kOpt = midK; 
                r = midK - 1;  
            } else {
                l = midK + 1;
            }
        }
        vector<pair<int, int>> bounds(n);  
        bounds[0] = {arr[0] - kOpt, arr[0] + kOpt};

        for (int i = 1; i < n; ++i) {
            bounds[i] = {
                max(arr[i] - kOpt, bounds[i - 1].first),
                min(arr[i] + kOpt, bounds[i - 1].second + x)
            };
        }
        vector<int> result(n); 
        result[n - 1] = bounds[n - 1].second;  
        for (int i = n - 2; i >= 0; --i) { 
            result[i] = min(bounds[i].second, result[i + 1]);
            result[i] = max(result[i], bounds[i].first);
        }
        int maxDiff = 0; 
        for (int i = 0; i < n; ++i) {
            maxDiff = max(maxDiff, abs(result[i] - arr[i]));
        }
        cout << maxDiff << endl;  
        for (int val : result) {
            cout << val << " ";  
        }
        cout << endl;
    }
    return 0;  
}
