#include <bits/stdc++.h>
using namespace std;
// code written by sunny
int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int array_size;
        cin >> array_size;
        vector<int> numbers(array_size);
        for (int &num : numbers) cin >> num;
        vector<pair<int, int>> operations;
        bool is_sorted = false;
        while (true) {
            vector<int> sorted_copy = numbers;
            sort(sorted_copy.begin(), sorted_copy.end());
            if (numbers == sorted_copy) {
                is_sorted = true;
                break;
            }
            if (numbers.size() <= 2) {
                break;
            }
            operations.emplace_back(1, 3);
            vector<int> current_subset(numbers.begin(), numbers.begin() + 3);
            vector<int> original_subset = current_subset;
            sort(current_subset.begin(), current_subset.end());
            int index_to_remove;
            if (original_subset[0] == current_subset[1]) {
                index_to_remove = find(original_subset.begin(), original_subset.end(), original_subset[0]) - original_subset.begin();
            } else if (original_subset[1] == current_subset[1]) {
                index_to_remove = find(original_subset.begin(), original_subset.end(), original_subset[1]) - original_subset.begin();
            } else {
                index_to_remove = find(original_subset.begin(), original_subset.end(), original_subset[2]) - original_subset.begin();
            }
            numbers.erase(numbers.begin() + index_to_remove);
        }
        if (!is_sorted) {
            cout << -1 << endl;
        } else {
            cout << operations.size() << endl;
            for (const auto &op : operations) {
                cout << op.first << " " << op.second << endl;
            }
        }
    }

    return 0;
}