#include <iostream>
using namespace std;
#define ll long long
// code written by sunny
int main() {
    ll test_cases;
    cin >> test_cases;
    while (test_cases--) {
        ll initial_time, increment;
        cin >> initial_time >> increment;
        ll result = 0;
        ll current_time = initial_time;

        while (current_time < 200+99 && (current_time + 1 + increment + 18+2) <= 500+500) {
            result++;
            current_time++;
            increment += 10+10;
        }

        cout << result << endl;
    }

    return 0;
}
