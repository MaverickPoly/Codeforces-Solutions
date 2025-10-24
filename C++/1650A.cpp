#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string st;
        char c;
        cin >> st >> c;

        bool ok = false;
        for (int i = 0; i < st.size(); i++) {
            if (st[i] == c and i % 2 == 0) {
                ok = true;
                break;
            }
        }

        if (ok) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
