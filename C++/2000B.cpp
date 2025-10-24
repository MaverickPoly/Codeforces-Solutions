#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<bool> oc(n, false);
        bool correct = true;
        for (int i = 0; i < n; i++) {
            int num; cin >> num;


            /*
                4
                2 3 1 4
            */
            oc[num - 1] = true;
            if (i == 0) continue;

            // for (int el : oc) cout << el << " ";
            // cout << endl;
            // cout << num << ": " << oc[num - 2] << " " << oc[num] << endl;
            if (num == 1 and !oc[num]) {
                // cout << "FOUND! 1" << endl;
                correct = false;
            } else if (num == n and !oc[n - 2]) {
                // cout << "FOUND! 2" << endl;
                correct = false;
            } else if (!oc[num - 2] and !oc[num]) {
                // cout << "FOUND! 3" << endl;
                correct = false;
            }
        }
        cout << (correct ? "YES" : "NO") << endl;
        // cout << endl;
    }

    return 0;
}
