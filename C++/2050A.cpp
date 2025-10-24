#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<string> ar(n);
        for (string &s : ar) cin >> s;

        int cur = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (cur + ar[i].size() > m) {
                break;
            }
            cur += ar[i].size();
            cnt++;
        }
        cout << "\t" << cnt << endl;
    }

    return 0;
}
