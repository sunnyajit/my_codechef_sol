#include <iostream>
#include <vector>
using namespace std;
// code written by sunny
int main() {
    ios::sync_with_stdio(false);  
    cin.tie(nullptr);  
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int array_size;
        cin >> array_size;
        vector<int> input_array(array_size);
        int odd_numbers = 0, even_numbers = 0;
        for (int i = 0; i < array_size; i++) {
            cin >> input_array[i];
            if (input_array[i] % 2 == 0) even_numbers++;
            else odd_numbers++;
        }
        int max_odd_prefixes = 0;
        int current_prefix_parity = 0; 
        for (int i = 0; i < array_size; i++) {
            if (current_prefix_parity == 0 && odd_numbers > 0) {
                odd_numbers--;
                current_prefix_parity = 1;
                max_odd_prefixes++;
            } else if (current_prefix_parity == 0 && even_numbers > 0) {
                even_numbers--;
                current_prefix_parity = 0;
            } else if (current_prefix_parity == 1 && even_numbers > 0) {
                even_numbers--;
                current_prefix_parity = 1;
                max_odd_prefixes++;
            } else if (current_prefix_parity == 1 && odd_numbers > 0) {
                odd_numbers--;
                current_prefix_parity = 0;
            }
        }
        cout << max_odd_prefixes << "\n";
    }
    return 0;
}
