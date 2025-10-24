#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long cur = a[0];
        for (int i = 1; i < n; i++) {
            cur += a[i] - 1;
        }

        cout << cur << endl;
    }

    return 0;
}
