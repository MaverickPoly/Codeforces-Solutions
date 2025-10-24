#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n; cin >> n;

        int res = -1;
        for (int i = 0; i < n; i++) {
            int num; cin >> num;
            int index = num - 1;
            int cur = abs(index - i);

            if (cur == 0) continue;

            if (res == -1) {
                res = cur;
            } else {
                res = gcd(res, cur);
            }
        }

        cout << "\t" << res << endl;
    }

    return 0;
}
