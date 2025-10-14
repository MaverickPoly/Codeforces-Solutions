#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n; string s;
        cin >> n >> s;

        vector<int> oc(26, -1);

        int found = false;
        for (int i = 0; i < n; i++) {
            int cur = s[i] - 'a';
            if (oc[cur] == -1) {
                oc[cur] = i % 2;
            } else {
                if (oc[cur] != (i % 2)) {
                    found = true;
                    break;
                }
            }
        }

        cout << (found ? "NO\n" : "YES\n");
    }

    return 0;
}
