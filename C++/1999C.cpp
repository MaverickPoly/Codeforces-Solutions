#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, s, m;
        cin >> n >> s >> m;

        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i].first >> v[i].second;
        }

        bool ok = false;
        if (v[0].first >= s) ok = true;

        for (int i = 1; i < n; i++) {
            if (v[i].first - v[i - 1].second >= s) {
                ok = true;
                break;
            }
        }

        if (m - v[n - 1].second >= s) ok = true;

        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}
