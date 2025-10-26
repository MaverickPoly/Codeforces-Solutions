#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        long long sum = 0;
        int need = 0;
        int ok = true;
        for (int i = 0; i < n; i++) {
            long long num; cin >> num;

            sum += num;
            need += i;
            if (sum < need) {
                ok = false;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}
