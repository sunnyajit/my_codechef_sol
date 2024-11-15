 #include <iostream>
using namespace std;
// code written by sunny
int main() {
    // Read the number of test cases
    int T;
    cin >> T;

    // Iterate through each test case
    for (int i = 0; i < T; ++i) {
        // Read the heights of Alice and Bob
        int X, Y;
        cin >> X >> Y;

        // Determine who is taller
        if (X < Y) {
            // Bob is taller
            cout << "B" << endl;
        } else {
            // Alice is taller
            cout << "A" << endl;
        }
    }

    return 0;
}
