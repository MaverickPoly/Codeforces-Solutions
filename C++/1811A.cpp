#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        string s;
        cin >> n >> m >> s;

        bool inserted = false;
        for (int i = 0; i < n; i++) {
            if (m > s[i] - '0') {
                s.insert(i, to_string(m));
                inserted = true;
                break;
            }
        }
        if (!inserted) s += to_string(m);

        cout << "\t" << s << endl;
    }

    return 0;
}
