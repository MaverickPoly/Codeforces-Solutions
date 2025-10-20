#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int t; cin >> t;

    while(t--) {
        ll n; cin >> n;

        if (n % 2 != 0 or n < 4) {
            cout << -1 << endl;
            continue;
        }

        // ll min = n / 6 + (n - (n / 6) * 6) / 4;
        // ll max = n / 4 + (n - (n / 4) * 4) / 6;


        ll mn = (n + 5) / 6;
        ll mx = n / 4;
        cout << mn << " " << mx << endl;
    }

    return 0;
}
