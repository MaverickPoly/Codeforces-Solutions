#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<long long> a(n);
        long long s = 0LL;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s += a[i];
        }

        cout << "\t";
        if (s % 3 == 0) {
            cout << 0 << endl;
            continue;
        } 

        bool found = false;
        for (long long el : a) {
            if ((s - el) % 3 == 0) {
                cout << 1 << endl;
                found = true;
                break;
            }
        }

        if (found) continue;

        cout << 3 - (s % 3) << endl;
    }

    return 0;
}
