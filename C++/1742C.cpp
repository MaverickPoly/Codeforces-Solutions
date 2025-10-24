#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        vector<string> inp(8);

        for (int i = 0; i < 8; i++) cin >> inp[i];

        bool ok = false;
        for (int i = 0; i < 8; i++) {
            if (inp[i] == "RRRRRRRR") {
                ok = true;
                break;
            }
        }

        if (ok) cout << "R\n";
        else cout << "B\n";
    }

    return 0;
}
