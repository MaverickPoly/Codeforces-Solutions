#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, m, k;
        cin >> n >> m >> k;

        /*
        4 4 3
        1 2 3 4
        1 3 4

        ar = [true, true, true, true, false]

        a = [1, 2, 3, 4]
        */

        vector<int> a(m);
        vector<int> q(k);
        for (int i = 0; i < m; i++) cin >> a[i];
        for (int i = 0; i < k; i++) cin >> q[i];

        vector<bool> used(n + 1, false);
        for (int el : q) used[el] = true;

        cout << "\t";
        for (int i = 0; i < m; i++) {
            if (k == n or (k == n - 1 and !used[a[i]])) {
                cout << 1;
            } else {
                cout << 0;
            }
        }
        cout << endl;
    }

    return 0;
}
