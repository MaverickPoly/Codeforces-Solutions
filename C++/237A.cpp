#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    map<pair<int, int>, int> m;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        pair<int, int> p;
        cin >> p.first >> p.second;

        m[p]++;
        ans = max(m[p], ans);
    }

    cout << ans << endl;

    return 0;
}
