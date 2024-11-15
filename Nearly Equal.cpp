#include <bits/stdc++.h>
using namespace std;
// code written by sunny..
int hammingDistance(const string &s1, const string &s2) {
    int distance = 0;
    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i] != s2[i]) {
            ++distance;
        }
    }
    return distance;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, M;
        cin >> N >> M;
        string A, B;
        cin >> A >> B;
        
        int minDistance = M; // Maximum possible Hamming distance is M (when all characters differ)
        
        // Iterate through all possible substrings of A with length M
        for (int i = 0; i <= N - M; ++i) {
            string substringA = A.substr(i, M);
            int distance = hammingDistance(substringA, B);
            minDistance = min(minDistance, distance);
        }
        
        cout << minDistance << endl;
    }
    
    return 0;
}
