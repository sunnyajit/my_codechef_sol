#include <iostream>
using namespace std;
// code written by sunny
int main() {
    int T; 
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int cows = N / 4;
        int rem_legs = N - cows * 4;
        int chks = rem_legs / 2;
        cout << cows + chks << endl;
    }

    return 0;
}
