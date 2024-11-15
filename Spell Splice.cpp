#include <bits/stdc++.h>
using namespace std;
// code written by sunny

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        vector<pair<int, int>> spells(N);
        
        for (int i = 0; i < N; ++i) {
            cin >> spells[i].first >> spells[i].second;  
        }
        
        int mst= 0;
    
        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                int strength = spells[i].second * spells[j].first + spells[i].first * spells[j].second;
                mst = max(mst, strength);
            }
        }
        
        cout << mst << endl;
    }
    
    return 0;
}
