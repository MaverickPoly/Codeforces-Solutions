#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        if (n % 2 == 0) {
            cout << -1 << endl;
        } else {
            // 1 5 4 3 2
            // 2 1 5 4 3
            // 3 2 1 5 4

            vector<int> perm(n);
            int idx = 0;
            for (int i = 1; i <= n; i++) {
                perm[idx] = i;
                idx = (idx + n - 1) % n;
            }

            for (int i = 0; i < n; i++) cout << perm[i] << " ";
            cout << endl;
        }
    }

    return 0;
}
