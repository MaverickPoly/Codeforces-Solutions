#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        vector<long long> b(n);
        for (long long &x : a) cin >> x;
        for (long long &x : b) cin >> x;

        long long ans = 1LL;
        for (int i = 0; i < n; ++i) {
            if (a[i] > b[i]) ans += a[i] - b[i];
        }

        cout << "\t" << ans << endl;
    }

    return 0;
}
