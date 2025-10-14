#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        if (n > 2 or v[0] + 1 == v[1]) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}
