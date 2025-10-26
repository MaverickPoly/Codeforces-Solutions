#include <bits/stdc++.h>

using namespace std;


int main() {
    int t; cin >> t;

    while(t--) {
        int a, b; cin >> a >> b;

        int ans = INT_MAX;
        int offset = 0;

        if (b == 1) b++, offset++;

        for (int i = 0; i < 30; i++) {
            int a_c = a, b_c = b + i;

            int ops = i + offset;
            while(a_c > 0) {
                a_c /= b_c;
                ops++;
            }

            ans = min(ans, ops);
        }

        cout << ans << endl;
    }

    return 0;
}
