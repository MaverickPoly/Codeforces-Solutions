#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        map<char, int> m;
        for (int i = 0; i < n; i++) {
            m[s[i]]++;
        }

        int cnt = 0;
        for (auto &p : m) {
            if (p.second % 2 != 0) cnt++;
        }

        cout << "\t";

        if (cnt > k + 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
