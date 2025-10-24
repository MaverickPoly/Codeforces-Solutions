#include <bits/stdc++.h>


using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        bool ok = false;

        int wantA = 2 * b - c;
        if (wantA > 0 and wantA % a == 0) {
            ok = true;
        }

        if (!ok and (a + c) % 2 == 0) {
            int wantB = (a + c) / 2;
            if (wantB > 0 and wantB % b == 0) {
                ok = true;
            }
        }

        int wantC = 2 * b - a;
        if (!ok and wantC > 0 and wantC % c == 0) {
            ok = true;
        }

        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
