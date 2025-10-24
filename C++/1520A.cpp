#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        string st;
        cin >> n >> st;

        bool ok = true;
        set<char> s;
        for (int i = 0; i < n; i++) {
            if (i > 0 and st[i] == st[i - 1]) continue;
            if (s.count(st[i])) {
                ok = false;
                break;
            }
            s.insert(st[i]);
        }

        if (ok) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
