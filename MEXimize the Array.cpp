#include <bits/stdc++.h>
using namespace std;
// code written by sunny
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main()
{
    fastio() int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());  

        long long opCount = 0;
        for (int i = 0; i < n; i++) // n
            opCount += (abs(a[i] - i));
        cout << opCount << endl;
    }
    return 0;
}

// tc - O(nlogn) - 2*10^5 * 20 ~ 10^6
// sc - O(N)
