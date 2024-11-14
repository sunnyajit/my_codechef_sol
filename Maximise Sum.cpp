#include <bits/stdc++.h>
using namespace std;
// code written by sunny
int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        long long arraySize;
        cin >> arraySize;
        
        vector<long long> numbers(arraySize);
        long long totalSum = 0;
        long long minAbsValue = LLONG_MAX;
        int negativeCount = 0;
        for (int i = 0; i < arraySize; ++i) {
            cin >> numbers[i];
            
            long long absValue = abs(numbers[i]);
            totalSum += absValue;
            
            if (numbers[i] < 0) {
                negativeCount++;
            }
            if (absValue < minAbsValue) {
                minAbsValue = absValue;
            }
        }
        
        
        if (negativeCount % 2 == 0) {
            cout << totalSum << endl;
        } else {
             
            cout << totalSum - 2 * minAbsValue << endl;
        }
    }
    
    return 0;
}
