#include <bits/stdc++.h>
using namespace std;
// code written by sunny
 int main() {
    int T;  
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        multiset<int> A;   
        for (int i = 0; i < N; i++) {
            int num;
            cin >> num;
            A.insert(num);
        }
        for (int i = 0; i < K; i++) {
            int minElement = *A.begin();  
            int maxElement = *A.rbegin();  
            A.erase(A.find(minElement));
            A.erase(A.find(maxElement));
            A.insert(minElement + maxElement);
        }

       
        for (auto it = A.begin(); it != A.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}
