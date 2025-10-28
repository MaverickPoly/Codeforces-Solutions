#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        bool even = false, odd = false;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) even = true;
            else odd = true;
        }

        if (odd and even) {
            sort(a.begin(), a.end());
        }
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }

    return 0;
}
