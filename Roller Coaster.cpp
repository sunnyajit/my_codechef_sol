 #include <iostream>
using namespace std;
// code written by sunny
string can_go_on_ride(int X, int H) {
    if (X >= H) {
        return "YES";
    } else {
        return "NO";
    }
}
int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int X, H;
        cin >> X >> H; 
        string result = can_go_on_ride(X, H);
        cout << result << endl;
    }

    return 0;
}
