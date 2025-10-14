#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<string> words(n);
        for (int i = 0; i < n; ++i) cin >> words[i];

        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            for (int z = i + 1; z < n; z++) {
                int cur = 0;
                string a = words[i];
                string b = words[z];
                for (int j = 0; j < m; j++) {
                    cur += abs(a[j] - b[j]);
                }
                ans = min(ans, cur);
            }
        }

        cout << "\t" << ans << endl;
    }

    return 0;
}
