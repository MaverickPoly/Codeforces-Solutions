#include <bits/stdc++.h>

using namespace std;

bool contains(vector<string> &v, string s) {
    for (string st : v) {
        if (st == s) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<string> combs;
        int cnt = 0;
        for (int i = 1; i < n; i++) {
            string cur = s.substr(i - 1, 2);

            if (!contains(combs, cur)) {
                combs.push_back(cur);
            }
        }

        // cout << "Combs:" << endl;
        // for (string c : combs) cout << c << endl;

        // cout << "\t" << combs.size() << endl;
        cout << combs.size() << endl;
    }

    return 0;
}
