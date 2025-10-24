#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n);
        
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        int ans = n;
        for (int k = 0; k <= n; k++) {
            bool ok = true;
            for (int i = 0; i < n - k; i++) {
                if (a[i] > b[i + k]) {ok = false; break;}
            }
            if (ok) { ans = k; break; }
        }
        

        cout << ans << endl;
    }

    return 0;
}
