#include <bits/stdc++.h>

using namespace std;


int main() {
    int t; cin >> t;

    while(t--) {
        long long n; cin >> n;

        int cnt2 = 0, cnt3 = 0;
        while(n % 2 == 0) {
            cnt2++;
            n /= 2;
        }
        while(n % 3 == 0) {
            cnt3++;
            n /= 3;
        }

        // cout << "\t";
        if (n != 1 or cnt2 > cnt3) {
            cout << -1 << endl;
        } else {
            cout << cnt3 + cnt3 - cnt2 << endl;        
        }
    }

    return 0;
}
