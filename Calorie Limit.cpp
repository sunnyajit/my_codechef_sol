#include <iostream>
#include <vector>
using namespace std;
// code written by sunny
int main() {
    int T;
    cin >> T;   
    while (T--) {
        int N, K;
        cin >> N >> K;   
        vector<int> A(N);   
        for (int i = 0; i < N; i++) {
            cin >> A[i];   
        }
        int totalCalories = 0;  
        int sweetsEaten = 0;  

        for (int i = 0; i < N; i++) {
            if (totalCalories + A[i] > K) {
                break; 
            }
            totalCalories += A[i];  
            sweetsEaten++;   
        }
        cout << sweetsEaten << endl;   
    }

    return 0;
}
