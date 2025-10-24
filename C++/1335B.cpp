#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;

        string s = "";
        for (int i = 0; i < b; i++) {
            s.push_back('a' + i);
        }

        string res = "";
        int len = 0;
        while(len < n) {
            for (int i = 0; i < a and len < n; i++) {
                res.push_back(s[i % b]);
                len++;
            }
        }

        cout << res << endl;
    }

    return 0;
}
