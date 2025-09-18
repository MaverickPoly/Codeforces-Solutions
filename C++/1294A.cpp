#include <bits/stdc++.h>
using namespace std;

const int SIZE = 3;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        vector<int> v = {a, b, c};
        sort(v.begin(), v.end());

        int cnt = 0;
        for (int i = 0; i < SIZE - 1; i++) {
            cnt += v[SIZE - 1] - v[i];
        }
        n -= cnt;
        if (n % 3 == 0 and n >= 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
