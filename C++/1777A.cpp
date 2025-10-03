#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        int cnt = 0;
        for (int i = 1; i < n; i++) {
            int x = a[i - 1], b = a[i];
            if (x % 2 == b % 2) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
