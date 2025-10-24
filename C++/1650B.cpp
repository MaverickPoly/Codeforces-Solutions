#include <bits/stdc++.h>

using namespace std;


int main() {
    int t; cin >> t;

    while(t--) {
        int l, r, a;
        cin >> l >> r >> a;

        int c1 = r / a + r % a;
        int d = r / a * a - 1;
        int c2 = d / a + d % a;


        if (d >= l) cout << max(c1, c2) << endl;
        else cout << c1 << endl;
    }

    return 0;
}

