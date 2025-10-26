#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<long long> a(n);
        int cnt1 = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 1) cnt1++;
            sum += a[i];
        }

        // cout << endl;
        if (sum >= n + cnt1 and n != 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
