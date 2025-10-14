#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n; 
        string s;
        cin >> n >> s;

        int ans = 0;
        for (int i = 1; i < n; i++) {
            ans += (s[i] == '@');
            if (s[i] == '*' and s[i - 1] == '*') {
                break;
            }
        }

        // cout << "\t" << ans << endl;
        cout << ans << endl;

    }

    return 0;
}
