#include <iostream>
using namespace std;
// code  written by sunny
bool isOnefulPair(int a, int b) {
    return (a + b + (a * b) == 111);
}
int main() {
    int a, b;
    cin >> a >> b;
    if (isOnefulPair(a, b)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
