#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    int t; cin >> t;
    
    while(t--) {
        int n, k; cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        // Start from the beginning
        int i = 0;
        int s = 0;
        for (; i < n; i++) {
            s += a[i];
            int x = 2 * (s - 1) + 1;
            if (x > k) {
                a[i] = s - (k + 1) / 2;
                break;
            }
        }

        // Start from the end
        int j = 0;
        s = 0;
        for (; j < n; j++) {
            s += a[n - j - 1];
            int x = 2 * s;
            if (x > k) break;
        }

        cout << "\t" << min(i + j, n) << endl;
    }

    return 0;
}
