#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &t : a) cin >> t;

        int minimum = INT_MAX;
        bool already_unsorted = false;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i - 1]) {
                already_unsorted = true;
                break;
            }
            minimum = min(minimum, a[i] - a[i - 1]);
        }

        if (already_unsorted) {
            cout << 0 << endl;
        } else {
            cout << minimum / 2 + 1 << endl;
        }
    }

    return 0;
}
