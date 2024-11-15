#include <bits/stdc++.h>
using namespace std;
// code written by sunny..
int cds(const vector<int>& A) {
    int s = 0;
    for (int i = 0; i < A.size() - 1; ++i) {
        s += abs(A[i] - A[i + 1]);
    }
    return s;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        int is = cds(A);
        int ms = is;
        for (int i = 0; i < N; ++i) {
            int original = A[i];
            int cs;
            A[i] = 1;
            cs = cds(A);
            ms = max(ms, cs);
            A[i] = K;
            cs = cds(A);
            ms = max(ms, cs);
            A[i] = original;
        }

        cout << ms << endl;
    }
    return 0;
}
