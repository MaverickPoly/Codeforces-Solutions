#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, x;
        cin >> n >> x;

        int start = INT_MAX, end = INT_MIN;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 1) {
                start = min(start, i);
                end = max(end, i);
            }
        }

        if (start == INT_MAX and end == INT_MIN) {
            cout << "NO" << endl;
        } else if (end - start >= x) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}

