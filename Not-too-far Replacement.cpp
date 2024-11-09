#include <bits/stdc++.h>
using namespace std;
// code written by sunny
int minimize_sum(int size, vector<int>& arr) {
    int last_element = arr[size]; 
    bool has_swapped;
    do {
        has_swapped = false;
        for (int i = 0; i < size; ++i) {
            if (arr[i] <= 2 * last_element && last_element < arr[i]) {
                swap(arr[i], arr[size]);
                last_element = arr[size];  
                has_swapped = true;
            }
        }
    } while (has_swapped);

    return accumulate(arr.begin(), arr.begin() + size, 0);  
}
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int size;
        cin >> size;
        vector<int> arr(size + 1);
        for (int i = 0; i <= size; ++i) {
            cin >> arr[i];
        }
        cout << minimize_sum(size, arr) << "\n";  
    }
    return 0;
}
