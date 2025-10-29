#include <bits/stdc++.h>
#include <cctype>

using namespace std;


int main() {
    int t; cin >> t;

    while(t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        vector<int> low(26, 0);
        vector<int> high(26, 0);

        for (int i = 0; i < n; i++) {
            if (islower(s[i])) {
                low[s[i] - 'a']++;
            } else {
                high[s[i] - 'A']++;
            }
        }

        // for (int i = 0; i < 26; i++) {
        //     cout << char('a' + i) << ": ";
        //     cout << low[i] << " " << high[i] << endl;
        // }

        int cnt = 0;
        for (int i = 0; i < 26; i++) {
            int m = min(low[i], high[i]);

            // cout << m << endl;
            cnt += m;

            low[i] -= m;
            high[i] -= m;

            if ((low[i] > 0 or high[i] > 0) and k > 0) {
                // k = 5
                // 0 5 -> 2 3
                // x = 2
                // cnt += 2
                // k -= x

                int can_make = (low[i] + high[i]) / 2;
                int x = min(can_make, k);
                cnt += x;
                k -= x;
            }
        }

        cout << "\t" << cnt << endl;
    }

    return 0;
}
