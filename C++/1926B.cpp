#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<string> ar(n);
        for (string &s : ar) cin >> s;

        cout << "\t";
        for (int i = 0; i < n; i++) {
            bool found = false;
            for (int j = 0; j < n; j++) {
                if (i < n - 1 and j < n - 1 and ar[i][j] == '0' and ar[i + 1][j] == '1' and ar[i][j + 1] == '1') {
                    cout << "TRIANGLE" << endl;
                    found = true; break;
                }
                else if (ar[i][j] == '1' and ar[i + 1][j] == '1') {
                    cout << "SQUARE" << endl;
                    found = true; break;
                } 
                else if (ar[i][j] == '1' and ar[i + 1][j] == '0') {
                    cout << "TRIANGLE" << endl;
                    found = true; break;
                }
            }

            if (found) break;
        }
    }

    return 0;
}
