#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> arr) {
    int x = 0;
    for (int el : arr) {
        x ^= el;
    }
    return x;
}


int main() {
    // cout << solve({2, 3, 4, 5, 4, 2, 3}) << endl;
    // cout << solve({2, 2, 10, 10, 11, 12, 13, 11, 12}) << endl;

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> ar(n);
        for (int i = 0; i < n; i++) cin >> ar[i];

        bool ok = true;
        int cnt = 0;
        for (int i = n - 2; i >= 0; i--) {
            bool flag = true;
            while(ar[i] >= ar[i + 1]) {
                ar[i] /= 2;
                cnt++;

                if (ar[i + 1] == 0 and ar[i] == 0) {
                    flag = false;
                    break;
                } 
            }
            
            if (!flag) {
                ok = false;
                break;
            }
        }

        cout << "\t";
        if (ok) {
            cout << cnt << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
