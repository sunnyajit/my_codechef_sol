#include <iostream>
#include <vector>
using namespace std;
// code written by sunny
long long computeGCD(long long a, long long b) {
    return b == 0 ? a : computeGCD(b, a % b);
}
int main() {
    int testCases;
    cin >> testCases; 
    while (testCases--) {
        int size;
        long long target;
        cin >> size >> target;   

        vector<long long> values(size);  
        for (int j = 0; j < size; j++) {
            cin >> values[j];
        }
        bool isSame = true;
        for (const auto& value : values) {
            if (value != target) {
                isSame = false;
                break;
            }
        }

        if (isSame) {
            cout << 0 << endl;   
        } else {
             int left = -1, right = size;
            for (int j = 0; j < size; j++) {
                if (values[j] != target) {
                    if (left == -1) left = j;
                    right = j;
                }
            }
            if (left == right) {
                cout << 1 << endl;
            } else {
                bool allSameXOR = true, allDivisible = true;
                long long initialXOR = (values[left] ^ target);
                for (int j = left; j <= right; j++) {
                    if (values[j] % target != 0) allDivisible = false;
                    if ((values[j] ^ target) != initialXOR) allSameXOR = false;
                }
                cout << (allSameXOR || allDivisible ? 1 : 2) << endl;
            }
        }
    }
    return 0;
}
