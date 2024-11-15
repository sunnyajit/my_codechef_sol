#include <bits/stdc++.h>
using namespace std;
// code written by sunny
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int T;
    cin >> T;
    while (T--) {
        int N, D;
        cin >> N >> D;
        vector<int> distances(N);
        for (int i = 0; i < N; ++i) {
            cin >> distances[i];
        }
        int switchCount = 0;
        bool usingCloseRangeGun = true; 
        for (int i = 0; i < N; ++i) {
            if (distances[i] <= D) { 
                if (!usingCloseRangeGun) { 
                    ++switchCount;
                    usingCloseRangeGun = true;
                }
            } else { 
                if (usingCloseRangeGun) {  
                    ++switchCount;
                    usingCloseRangeGun = false;  
                }
            }
        }
        
        cout << switchCount << endl;
    }

    return 0;
}
