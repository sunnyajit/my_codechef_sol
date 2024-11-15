#include <iostream>
using namespace std;
// code written by sunny..
void pm(int N) {
    for (int J = 1; J <= N / 2; ++J) {
        cout << (N - J + 1) << " ";
        cout << J << " ";
    }
    if (N % 2 != 0) {
        cout << (N / 2 + 1) << " ";
    }
    cout << endl;
}

int main() {
    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        pm(N);
    }
    return 0;
}
