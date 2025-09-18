#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string r1;
        string r2;
        cin >> r1 >> r2;

        bool same = true;
        for (int i = 0; i < n; i++) {
            char c1 = r1[i], c2 = r2[i];

            bool state;
            if (c1 == c2 or (c1 == 'G' and c2 == 'B') or (c1 == 'B' and c2 == 'G')) state = true;
            else state = false;
            same = state;
            if (!same) break;
        }

        if (same) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
