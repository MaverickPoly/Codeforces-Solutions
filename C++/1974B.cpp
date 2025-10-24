#include <bits/stdc++.h>

using namespace std;

int find_pos(string &r, char c) {
    for (int i = 0; i < r.size(); i++) {
        if (r[i] == c) return i;
    }
    return -1;
}


int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        string s;
        cin >> n >> s;

        // Construct string `r`
        string r = "";
        for (int i = 0; i < n; i++) {
            if (find_pos(r, s[i]) == -1) {
                r.push_back(s[i]);
            }
        }

        // Sort string `r`
        sort(r.begin(), r.end());

        // Construct result string
        int m = r.size();
        string res = "";
        for (int i = 0; i < n; i++) {
            res.push_back(r[m - find_pos(r, s[i]) - 1]);
        }

        // cout << "Res: " << res << endl;
        cout << res << endl;
    }

    return 0;
}
