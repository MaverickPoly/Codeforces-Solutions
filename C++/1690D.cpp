#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        string st;
        cin >> st;

        vector<int> ps(n + 1, 0);
        for (int i = 1; i < n + 1; i++) {
            ps[i] = ps[i - 1] + int(st[i - 1] == 'W');
        }

        // for (int i = 0; i < n + 1; i++) {
        //     cout << ps[i] << " ";
        // }
        // cout << endl;

        int result = INT_MAX;
        for (int i = k; i < n + 1; i++) {
            // cout << ps[i] << " " << ps[i - k] << endl;
            result = min(result, ps[i] - ps[i - k]);
        }
        cout << result << endl;
        // cout << endl;
    }

    return 0;
}
