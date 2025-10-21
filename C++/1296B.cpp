#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int t; cin >> t;

    while(t--) {
        ll n; cin >> n;

        ll total = 0.0;
        while(true) {
            ll div = n / 10;
            if (div == 0) break;
            total += div * 10;
            n = n - div * 10 + div;
        }
        total += n;
        // O(log10(n))

        cout << "\t" << total << endl;
    }

    return 0;
}
