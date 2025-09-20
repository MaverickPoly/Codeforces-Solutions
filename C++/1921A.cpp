#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int maxX = INT_MIN, minX = INT_MAX;
        for (int i = 0; i < 4; i++) {
            int x, y;
            cin >> x >> y;

            maxX = max(maxX, x);
            minX = min(minX, x);
        }
        
        cout << (maxX - minX) * (maxX - minX) << endl;
    }

    return 0;
}
