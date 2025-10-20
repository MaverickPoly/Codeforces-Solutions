#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        long long n, x;
        cin >> n >> x;

        long long total = 0;
        long long mx = 0;
        for (long long i = 0; i < n; i++) {
            long long d; cin >> d;

            total += d;
            long long cur = (d + x - 1) / x;
            mx += cur;
            // cout << cur << "  ";
        }
        // cout << endl;

        long long mn = (total + x - 1) / x;

        cout << mn << " " << mx << endl;
    }

    return 0;
}
