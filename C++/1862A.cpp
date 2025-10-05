#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<string> inp(n);
        for (auto &x : inp) cin >> x;

        string target = "vika";
        string res = "";
        int id = 0;
        for (int i = 0; i < m; i++) {
            // i -> col, j -> row
            for (int j = 0; j < n; j++) {
                if (inp[j][i] == target[id]) {
                    res += target[id];
                    id++;
                    break;
                }
            }
        }


        // cout << "Res: " << res << endl;
        if (target == res) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        // cout << endl;
    }

    return 0;
}
