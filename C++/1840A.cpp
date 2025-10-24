#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        string s;
        cin >> n >> s;

        string res = "";
        int l = 0, r = 1;
        while(r < n) {
            if (s[r] == s[l]) {
                res += s[l];
                l = r + 1;
                r++;
            }
            r++;
        }

        cout << res << endl;
    }

    return 0;
}
