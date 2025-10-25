#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, k;
        string s;

        cin >> n >> k >> s; 
        
        
        int cnt1 = 0, cnt0 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') cnt1++;
            else cnt0++;
        }

        int mn = max(cnt0, cnt1) - n / 2;
        int mx = cnt1 / 2 + cnt0 / 2;
        if (k >= mn and (k - mn) % 2 == 0 and k <= mx) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
