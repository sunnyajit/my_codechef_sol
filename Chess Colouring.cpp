#include <iostream>
using namespace std;
using ll = long long;
// code written by sunny
ll color_ways(ll n) {
    return (n % 2 == 0) ? 2 : ((n * n) + 3) / 2;
}
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);  
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << color_ways(n) << endl;
    }
    return 0;
}