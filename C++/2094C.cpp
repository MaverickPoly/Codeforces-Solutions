#include <bits/stdc++.h>

using namespace std;

int main() {
    /*
    3
    1 6 2
    6 2 4
    2 4 3

    16243
    */
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> perm(2 * n, 0);
        vector<bool> seen(2 * n, false);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int num; cin >> num;
                // cout << i + j << " " << num << endl;
                perm[i + j + 1] = num;
                seen[num - 1] = true;
            }
        }

        // cout << "LOOP\n";

        for (int i = 0; i < 2 * n; i++) {
            if (!seen[i]) {
                perm[0] = i + 1;
            }
        }

        for (int i = 0; i < 2 * n; i++) {
            cout << perm[i] << " ";
        }
        cout << endl;
    }


    return 0;
}
