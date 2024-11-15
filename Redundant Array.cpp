#include <bits/stdc++.h>
using namespace std;
using ll=long long; 
// code written by sunny..
int main()
{
    int T; // Pass hte test case....
    cin >> T;
    while (T--)
    {
        ll N;
        cin >> N;
        ll arr[N];
        map<ll, ll> cp;
        for (int j = 0; j < N; j++)
        {
            cin >> arr[j];
            cp[arr[j]]++;
        }
        

        ll maxi = N;
        for (auto value : cp)
        {
            ll x = N - value.second;
            ll req = x* value.first;
            if (req < maxi)
                maxi = req;
        }
        cout << maxi << endl;
    }
    return 0;
}
