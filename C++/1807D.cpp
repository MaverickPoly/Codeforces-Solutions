#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, q; cin >> n >> q;

        vector<int> ar(n);
        for (int i = 0; i < n; i++) cin >> ar[i];

        // Build prefix sum
        vector<int> ps(n + 1, 0);
        for (int i = 1; i < n + 1; i++) {
            ps[i] = ar[i - 1] + ps[i - 1];
        }

        // Go over all queries
        for (int w = 0; w < q; w++) {
            int l, r, k;
            cin >> l >> r >> k;

            int sum = ps[n];
            int s_lr = ps[r] - ps[l - 1];
            int len = r - l + 1;
            int res = sum - s_lr + len * k;
            if (res % 2 != 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
