#include <bits/stdc++.h>
using namespace std;
// code written by sunny
int main() {
    int test_cases; 
    cin >> test_cases;
    
    while (test_cases--) {
        int num_elements;
        cin >> num_elements;
        
        vector<int> original_array(num_elements), sorted_array(num_elements);
        for (int i = 0; i < num_elements; i++) {
            cin >> original_array[i];
            sorted_array[i] = original_array[i];
        }
        sort(sorted_array.begin(), sorted_array.end());
        int max_out_of_order = -1;
        int min_element_in_original = *min_element(original_array.begin(), original_array.end());
        for (int i = 0; i < num_elements; i++) {
            if (original_array[i] != sorted_array[i]) {
                max_out_of_order = max(max_out_of_order, original_array[i]);
            }
        }
        
        // Calculate the final result
        int result = (max_out_of_order == -1) ? 0 : max_out_of_order + min_element_in_original;
        
        // Output the result
        cout << result << endl;
    }
    
    return 0;
}
