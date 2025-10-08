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

        bool ok = true;
        for (int i = 1; i < n; i++) {
            int cur = abs(a[i - 1] - a[i]);
            if (cur != 7 and cur != 5) {
                ok = false;
                break;
            }
        }

        if (ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    

    return 0;
}
