#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 1;

    while(t--) {
        int n;
        string st;
        cin >> n >> st;

        int firstA = -1, lastB = -1;
        for (int i = 0; i < n; i++) {
            if (st[i] == 'A' and firstA == -1) firstA = i;
            else if (st[i] == 'B') lastB = i;
        }

        if (firstA == -1 or lastB == -1 or lastB < firstA)
            cout << 0 << endl;
        else
            cout << lastB - firstA << endl;
    }

    return 0;
}
