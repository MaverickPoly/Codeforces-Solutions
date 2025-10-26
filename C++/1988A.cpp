#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, k; cin >> n >> k;

        int cnt = 0;
        while(true) {
            if (n <= 1) break;
            n -= k - 1;
            cnt++;
        }

        cout << "\t" << cnt << endl;
    }

    return 0;
}
