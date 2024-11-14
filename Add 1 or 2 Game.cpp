#include <iostream>
#include <vector>
using namespace std;
// code written by sunny
int main() {
    int T;
    cin >> T;
     vector<string> results;
    for (int i = 0; i < T; ++i) {
        int N;
         cin >> N;
        if (N ==  1 ) {
            results.push_back("ALICE");
        } else {
            results.push_back("BOB");
        }
    }
    
    for (const auto& result : results) {
         cout << result << endl;
    }
    
    return 0;
}
