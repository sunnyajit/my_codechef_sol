#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    // TAKE THE TEST CASE..
    int t;
    cin >> t;
    while(t--){
        // take the given condition..
        int X,Y; 
        cin >> X >> Y;
        // cal min hours to reach the target average speed
        int min_hours = ceil(10.0 * (Y - X) / (100 - Y));
        //print the min hourse..
        cout << min_hours << endl;
        
    }
}
