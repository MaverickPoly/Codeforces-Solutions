#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int x, n, m;
        cin >> x >> n >> m;

        if (m * 10 >= x) {
            cout << "YES\n";
            continue;
        }

        // cout << "   - ";
        for (int i = 0; i < n; i++) {
            x = x / 2 + 10;
            // cout << x << " ";
        }
        // cout << endl;

        if (m * 10 >= x) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
