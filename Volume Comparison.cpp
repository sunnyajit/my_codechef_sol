#include <bits/stdc++.h>
using namespace std;
// code written by sunny.
int main() {
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    int volumeCuboid = A * B * C;
    int volumeCube = X * X * X;
    if (volumeCuboid > volumeCube) {
        cout << "Cuboid" << endl;
    } else if (volumeCube > volumeCuboid) {
        cout << "Cube" << endl;
    } else {
        cout << "Equal" << endl;
    }

    return 0;
}
