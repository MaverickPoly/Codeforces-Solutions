#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        long long n, f, a, b;
        cin >> n >> f >> a >> b;

        vector<long long> ar(n);
        for (int i = 0; i < n; i++) cin >> ar[i];

        long long cur = ar[0] * a > b ? b : ar[0] * a;
        for (int i = 1; i < n; i++) {
            if ((ar[i] - ar[i - 1]) * a > b) {
                cur += b;
            } else {
                cur += (ar[i] - ar[i - 1]) * a;
            }
        }

        // cout << cur << endl;

        if (cur >= f) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}
