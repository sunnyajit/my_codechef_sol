 #include <iostream>
#include <string>
using namespace std;
//  code written by sunny
int main() {
    int T;
    cin >> T; 

    while (T--) {
        int N;
        cin >> N; 
        string S;
        cin >> S;  
        int operations = 0;
        for (int i = 1; i < N; ++i) {
            if (S[i] == S[i - 1]) {
                operations++;
            }
        }
        cout << operations << endl;
    }

    return 0;
}
