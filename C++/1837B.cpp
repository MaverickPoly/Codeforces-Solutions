#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; string s;
        cin >> n >> s;

        int cnt = 1, ans = 1;
        for (int i = 1; i < n; i++) {
            if (s[i - 1] != s[i]) cnt = 1;
            else cnt++;
            ans = max(ans, cnt);
        }

        cout << ans + 1 << endl;
    }

    return 0;
}
