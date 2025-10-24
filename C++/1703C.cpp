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

        for (int i = 0; i < n; i++) {
            int len;
            string st;
            cin >> len >> st;

            for (int j = 0; j < len; j++) {
                if (st[j] == 'D') {
                    a[i] = (a[i] + 1) % 10;
                } else {
                    a[i] -= 1;
                    if (a[i] < 0) a[i] = 9;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        cout << endl;
    }

    return 0;
}
