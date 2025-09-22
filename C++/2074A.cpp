#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int l, r, d, u;
        cin >> l >> r >> d >> u;

        // (−l,0), (r,0), (0,−d), (0,u)
        if (l == r and r == d and d == u) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
