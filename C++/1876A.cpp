#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, p; cin >> n >> p;

        vector<long long> a(n);
        vector<long long> b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<pair<long, long>> ba(n);
        for (int i = 0; i < n; i++) ba[i] = {b[i], a[i]};

        sort(ba.begin(), ba.end());

        long long total = 0;
        long long remaining = n;

        for (int i = 0; i < n and remaining > 0; i++) {
            long long bi = ba[i].first;
            long long ai = ba[i].second;

            long long cur = min(remaining - 1, ai);

            if (bi < p) {
                total += bi * cur;
                remaining -= cur;
            } else {
                total += p * remaining;
                remaining = 0;
            }
        }

        if (remaining > 0) {
            total += p * remaining;
            remaining = 0;
        }

        cout << "\t" << total << endl;
    }

    return 0;
}
