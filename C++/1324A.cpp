#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> ar(n);
        for (int i = 0; i < n; i++) cin >> ar[i];

        int even_cnt = 0, odd_cnt = 0;
        for (int i = 0; i < n; i++) {
            if (ar[i] % 2 == 0) even_cnt++;
            else odd_cnt++;
        }

        if ((even_cnt == 0 and odd_cnt > 0) or (even_cnt > 0 and odd_cnt == 0)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
