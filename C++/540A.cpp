#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string a, b;
    cin >> n >> a >> b;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x = a[i] - '0';
        int y = b[i] - '0';

        int cur = min(abs(x - y), 10 - max(x, y) + min(x, y));
        ans += cur;
        // cout << cur << endl;
    }
    cout << ans << endl;

    return 0;
}
