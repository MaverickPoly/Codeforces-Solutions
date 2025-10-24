#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    long long s = 0;
    
    for (int i = 0; i < m; i++) {
        if (v[i] >= 0) {
            break;
        }
        s += abs(v[i]);
    }

    cout << s << endl;

    return 0;
}
