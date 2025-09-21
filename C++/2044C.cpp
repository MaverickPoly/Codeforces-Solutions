#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int total = 0;

        int row1 = m;
        int row2 = m;

        row1 -= min(m, a);
        total += min(m, a);

        row2 -= min(m, b);
        total += min(m, b);

        int val = min(c, row1);
        row1 -= val;
        total += val;
        c -= val;

        val = min(c, row2);
        row2 -= val;
        total += val;
        c -= val;

        cout << total << endl;
    }

    return 0;
}
