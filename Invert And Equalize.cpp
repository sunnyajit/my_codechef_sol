#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        long long X1 = 0;
        long long X0 = 0;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        if (s[0] == '0')
            X0++;
        else
            X1++;
        for (int i = 1; i < n; i++) // n
        {
            if (s[i] != s[i - 1])
            {
                if (s[i] == '1')
                    X1++;
                else
                    X0++;
            }
        }
        cout << min(X1, X0) << endl;
    }
    return 0;
}
