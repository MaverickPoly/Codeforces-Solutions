#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(k);
        int m = -1;
        for (int i = 0; i < k; i++) {
            cin >> a[i];
            m = max(m, a[i]);
        }

        cout << 2 * (n - m) - k + 1 << endl;
    }

    return 0;
}
