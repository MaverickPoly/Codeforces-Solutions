#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v(m);
    for (int i = 0; i < m; i++) cin >> v[i];
    
    sort(v.begin(), v.end());
    int best = 1e9;
    for (int i = 0; i <= m - n; i++) {
        best = min(best, v[i + n - 1] - v[i]);
    }
    cout << best << endl;

    return 0;
}
