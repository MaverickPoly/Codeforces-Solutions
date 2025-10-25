#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        vector<int> p(3);
        for (int i = 0; i < 3; i++) cin >> p[i];

        int d = -1;
        for (int p01 = 0; p01 < min(p[0], p[1]) + 1; p01++) {
            for (int p02 = 0; p02 < min(p[0], p[2]) + 1; p02++) {
                for (int p12 = 0; p12 < min(p[1], p[2]) + 1; p12++) {
                    if ((p[0] - p01 - p02) % 2 != 0 or p[0] < p01 + p02) continue;
                    if ((p[1] - p01 - p12) % 2 != 0 or p[1] < p01 + p12) continue;
                    if ((p[2] - p02 - p12) % 2 != 0 or p[2] < p02 + p12) continue;

                    d = max(d, p01 + p02 + p12);
                }
            }
        }

        cout << "\t" << d << endl;
    }

    return 0;
}
