#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, s;
        cin >> n >> s;

        vector<int> x(n);
        for (int &a : x) cin >> a;
        
        if (s >= x[n - 1]) {
            cout << abs(s - x[0]) << endl;
            continue;
        }
        if (s <= x[0]) {
            cout << abs(x[n - 1] - s) << endl;
            continue;
        }

        int end_cnt = abs(x[n - 1] - s);
        int start_cnt = abs(x[0] - s);

        if (end_cnt < start_cnt) {
            int res = end_cnt + abs(x[n - 1] - x[0]);
            cout << res << endl;
        } else {
            int res = start_cnt + abs(x[0] - x[n - 1]);
            cout << res << endl;
        }
    }

    return 0;
}
