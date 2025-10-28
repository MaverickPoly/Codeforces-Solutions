#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> pref_max(n), suff_min(n);
        pref_max[0] = a[0];
        for (int i = 1; i < n; i++) {
            pref_max[i] = min(pref_max[i - 1], a[i]);
        }

        suff_min[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suff_min[i] = max(suff_min[i + 1], a[i]);
        }

        for (int i = 0; i < n; i++) {
            if (pref_max[i] == a[i] or suff_min[i] == a[i]) cout << 1;
            else cout << 0;
        }
        cout << endl;
    }

    return 0;
}
