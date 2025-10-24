#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int x, y;
        cin >> x >> y;

        // Find the total number of screens required
        int twoCells = y / 2;
        int screens = twoCells;
        int cellsLeft;
        if (y % 2 == 0) {
            cellsLeft = twoCells * 7;
        } else {
            cellsLeft = twoCells * 7 + 11;
            screens++;
        }

        if (x > cellsLeft) {
            int left = x - cellsLeft;
            int v = left / 15;
            if (left % 15 != 0) v++; 
            screens += v;
        }

        cout << screens << endl;
    }

    return 0;
}
