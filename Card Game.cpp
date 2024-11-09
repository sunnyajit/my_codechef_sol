#include <iostream>
using namespace std;
// code written by sunny
int main() {
    int T;
    cin >> T;   
    while (T--) {
        int N, X;
        cin >> N >> X;   
        int evenCount = N / 2;
        int oddCount = N - evenCount;
        bool isXEven = (X % 2 == 0);
        int result = isXEven ? evenCount - 1 : oddCount - 1;
        cout << result << endl;
    }
    return 0;
}