#include <iostream>
using namespace std;
// code written by sunny
int maxRectangleArea(int N) {
    if (N < 2) return 0;  
    int S = N / 2;  
    if (S % 2 == 0) {
        return (S / 2) * (S / 2);  
    } else {
        return (S / 2) * (S / 2 + 1); 
    }
}
int main() {
    int T;
    cin >> T;  
    while (T--) {
        int N;
        cin >> N;
        cout << maxRectangleArea(N) << endl;  
    }
    return 0;
}
