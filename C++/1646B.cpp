#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 1;

    while(t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (long long &x : a) cin >> x;

        // Sort array
        sort(a.begin(), a.end());

        // Prefix sum
        vector<long long> ps(n + 1, 0);
        for (long long i = 1; i <= n; i++) ps[i] = ps[i - 1] + a[i - 1];

        // Suffix sum        
        vector<long long> ss(n + 1, 0);
        for (long long i = 1; i <= n; i++) ss[i] = ss[i - 1] + a[n - i];


        bool ok = false;
        for (int k = 2; k <= n; k++) {
            if (ss[k - 1] > ps[k]) {
                ok = true;
                break;
            }
        }

        if (ok) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
