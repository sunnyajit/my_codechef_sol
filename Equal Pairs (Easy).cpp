#include <bits/stdc++.h>
using namespace std;
// code written by sunny
#define int long long
int32_t main()
{
    int test_cases;
    cin >> test_cases;
    
    while(test_cases--)
    {
        int array_size;
        cin >> array_size;
        
        unordered_map<int, int> frequency;
        int zeros_count = 0;
         
        for(int i = 0; i < array_size; i++)
        {
            int num;
            cin >> num;
            if (num == 0) {
                zeros_count++;
            } else {
                frequency[num]++;
            }
        }
        int max_freq = 0;
        int most_frequent_num = -1;
        
        for (const auto& [num, freq] : frequency) {
            if (freq > max_freq) {
                max_freq = freq;
                most_frequent_num = num;
            }
        }
        max_freq += zeros_count;
        max_freq--;
        int result = max_freq * (max_freq + 1) / 2;
        
        for (const auto& [num, freq] : frequency) {
            if (num != most_frequent_num) {
                result += (freq - 1) * freq / 2;
            }
        }
        
        cout << result << endl;
    }
    
    return 0;
}
