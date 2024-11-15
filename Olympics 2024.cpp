#include <bits/stdc++.h>
using namespace std;
// code written by sunny
 int main() {
    int G, S, B;
    cin >> G >> S >> B;
    const int desired = 5;
    int additionalGold = std::max(0, desired - G);
    int additionalSilver = std::max(0, desired - S);
    int additionalBronze = std::max(0, desired - B);
    int totalAdditional = additionalGold + additionalSilver + additionalBronze;
    cout << totalAdditional << endl;

    return 0;
}
