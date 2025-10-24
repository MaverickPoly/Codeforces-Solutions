#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        vector<string> v(3);

        for (int i = 0; i < 3; i++) cin >> v[i];

        int row = -1, col = -1;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (v[i][j] == '?') {
                    row = i; col = j;
                }
            }
        }

        vector<bool> vals = {false, false, false};
        for (int i = 0; i < 3; i++) {
            if (v[row][i] == 'A') vals[0] = true;
            else if (v[row][i] == 'B') vals[1] = true;
            else if (v[row][i] == 'C') vals[2] = true;
        }

        if (!vals[0]) cout << 'A';
        else if (!vals[1]) cout << 'B';
        else if (!vals[2]) cout << 'C';

        cout << "\n";
    }

    return 0;
}
