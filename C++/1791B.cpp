#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        string st;
        cin >> n;
        cin >> st;

        int status = false;
        int x = 0;
        int y = 0;
        for (int i = 0; i < n; i++) {
            char c = st[i];

            if (c == 'U') y++;
            else if (c == 'R') x++;
            else if (c == 'L') x--;
            else y--;

            if (x == 1 and y == 1) status = true;
        }

        if (status) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }

    return 0;
}
