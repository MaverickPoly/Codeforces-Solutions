#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        for (int i = 0; i < n; i++) {
            string st; cin >> st;
            if (i % k != 0) continue;

            for (int j = 0; j < n; j+=k) {
                if (st[j] == '0') {
                    cout << 0;
                } else {
                    cout << 1;
                }
            }
            cout << endl;
        }
    }

    return 0;
}
