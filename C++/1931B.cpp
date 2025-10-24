#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<long long> v(n);
        long long s = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            s += v[i];
        }

        long long avg = s / n;
        long long prefix = 0;
        bool ok = true;
        for (int i = 0; i < n; i++) {
            prefix += v[i];
            long long need = (long long)(i + 1) * avg;
            if (prefix < need) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}
