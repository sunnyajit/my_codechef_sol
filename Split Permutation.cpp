#include <iostream>
using namespace std;
 // code written by sunny...
int main() {
    int T;
    cin >> T;
    // pass the test case...
    for (int j = 0; j < T; j++) {
        int N;
        cin >> N;
        
        if (N == 3) {
            cout << "1 2 3" << endl;
        } else if (N % 2 == 0) {
            for (int j = 1; j <= N / 2; ++j) {
                cout << j << " " << N + 1 - j << " ";
            }
            cout << endl;
        } else {
            for (int j = 1; j <= N / 2; j++) {
                cout << j << " " << N - j << " ";
            }
            cout << N << endl;
        }
    }
    
    return 0;
}
