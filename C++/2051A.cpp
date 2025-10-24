#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (i == n - 1) {
                ans += a[i];
                continue;
            }

            if (a[i] > b[i + 1]) {
                ans += a[i] - b[i + 1];
            }
        }

        cout << "\t" << ans << endl;
    }

    return 0;
}
