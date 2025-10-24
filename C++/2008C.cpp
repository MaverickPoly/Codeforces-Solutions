#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 1;

    while(t--) {
        int l, r;
        cin >> l >> r;

        int cnt = 0;
        int increment = 1;
        int current = l;
        while(current <= r) {
            current += increment;
            increment++;
            cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}
