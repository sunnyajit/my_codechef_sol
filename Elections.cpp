#include <bits/stdc++.h>
using namespace std;
// code written by sunny
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        vector<int> A(N), B(N);
        for (int i = 0; i < N; ++i) cin >> A[i];
        for (int i = 0; i < N; ++i) cin >> B[i];
        int statesNeeded = N / 2 + 1;
        int currentWins = 0;
        vector<int> requiredVotes;
        for (int i = 0; i < N; ++i) {
            if (A[i] > B[i]) {
                currentWins++;
            } else {
                requiredVotes.push_back(B[i] - A[i] + 1);
            }
        }
        if (currentWins >= statesNeeded) {
            cout << "YES\n";
            continue;
        }
        sort(requiredVotes.begin(), requiredVotes.end());
        for (int votesNeeded : requiredVotes) {
            if (X >= votesNeeded) {
                X -= votesNeeded;
                currentWins++;
                if (currentWins >= statesNeeded) {
                    break;
                }
            } else {
                break;
            }
        }
        if (currentWins >= statesNeeded) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}