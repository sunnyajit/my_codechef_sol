#include <bits/stdc++.h>
using namespace std;
// code written by sunny
int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int A, B;
        cin >> A >> B;
        int totalSlicesEaten = 0;
        while (A != B) {
            if (A > B) {
                int eat = (A + 1) / 2;   
                A -= eat;
                totalSlicesEaten += eat;
            } else {
                int eat = (B + 1) / 2; 
                B -= eat;
                totalSlicesEaten += eat;
            }
        }
        cout << totalSlicesEaten << endl;
    }
    
    return 0;
}
