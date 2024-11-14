#include <bits/stdc++.h>
using namespace std;
#define ll long long
// code written by sunny
int32_t main()
{
    ll test_cases;
    cin >> test_cases;
    
    while(test_cases--)
    {
        ll num1, num2;
        cin >> num1 >> num2;
        ll larger = max(num1, num2);
        ll smaller = min(num1, num2);
        ll option1 = max(0ll, smaller - (larger / 2));
        ll option2 = max(0ll, 2 * smaller - larger);
        cout << min(option1, option2) << endl;
    }
    return 0;
}
