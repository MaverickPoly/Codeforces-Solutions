#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;

    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        int f, t; cin >> f >> t;

        int joy = f;
        if (t > k) {
            joy = f - (t - k);
        }

        mx = max(mx, joy);
    }

    cout << mx << endl;

    return 0;
}

