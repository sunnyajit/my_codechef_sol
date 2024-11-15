 #include <iostream>
// code written by sunny
int main() {
    int aliceScore, bobScore;
    cin >> aliceScore >> bobScore;
    if (aliceScore >= 2 * bobScore) {
         cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
