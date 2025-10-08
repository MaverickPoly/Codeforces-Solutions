#include <bits/stdc++.h>

using namespace std;

/*
any_cost = x + y + 1

R = 1 * (m - 1)
D = m * (n - 1)

m - 1 + mn - m = mn - 1

*/


int main() {
    int t; cin >> t;

    while(t--) {
        int n, m, k; cin >> n >> m >> k;

        cout << (m * n - 1 == k ? "YES" : "NO") << endl;
    }

    return 0;
}
