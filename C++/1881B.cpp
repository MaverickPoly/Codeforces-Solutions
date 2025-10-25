#include <bits/stdc++.h>

using namespace std;

#define all(v) v.begin(), v.end()

bool all_same(vector<int> &v) {
    for (int i = 1; i < v.size(); i++) {
        if (v[i] != v[0]) {
            return false;
        }
    }
    return true;
}

int main() {
    // freopen("1881B.out", "w", stdout);

    int t; cin >> t;

    while(t--) {
        vector<int> v(3);
        for (int i = 0; i < 3; i++) cin >> v[i];
        sort(all(v));

        if (all_same(v)) {
            cout << "YES\n";
            continue;
        }

        if ((v[2] / v[0]) * v[0] != v[2] or (v[1] / v[0]) * v[0] != v[1]) {
            cout << "NO\n";
            continue;
        }

        if (v[2] / v[0] - 1 + v[1] / v[0] - 1 <= 3) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
