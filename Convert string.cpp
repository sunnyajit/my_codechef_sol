#include <iostream>
#include <string>
using namespace std;
// code written by sunny
int count_valid_k(int length, const string& binary_string) {
    
    int count_zeros = 0;
    for (char character : binary_string) {
        if (character == '0') {
            count_zeros++;
        }
    }
    int count_ones = length - count_zeros;

     
    int valid_k_count = 0;
 
    for (int k = 1; k <= length; ++k) {
        
        if (k >= count_zeros && (k - count_zeros) % 2 == 0) {
            valid_k_count++;
        }
      
        else if (k >= count_ones && (k - count_ones) % 2 == 0) {
            valid_k_count++;
        }
    }

    return valid_k_count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num_test_cases;
    cin >> num_test_cases; 
    
    while (num_test_cases--) {
        int length;
        cin >> length; 
        string binary_string;
        cin >> binary_string;  

        cout << count_valid_k(length, binary_string) << endl;
    }

    return 0;
}
