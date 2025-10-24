#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int &x : v) cin >> x;

        sort(v.begin(), v.end());

        int cnt = 0;
        int l = 0, r = n - 1;
        while(l < r) {
            int sum = v[l] + v[r];
            if (sum == k) {
                cnt++;
                l++; r--;
            }
            else if (sum < k) {
                l++;
            } else {
                r--;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
