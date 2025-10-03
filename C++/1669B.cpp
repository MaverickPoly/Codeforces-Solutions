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

        sort(a.begin(), a.end());

        int flag = false;
        for (int i = 1; i < n - 1; i++) {
            if (a[i - 1] == a[i] and a[i] == a[i + 1] and !flag) {
                cout << a[i] << endl;
                flag = true;
            }
        }
        if (!flag) cout << -1 << endl;
    }

    return 0;
}