#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> res;
        int sum = 0, last = 9;
        while(sum < n and last > 0) {
            res.push_back(min(n - sum, last));
            sum += last;
            last--;
        }

        if (sum < n) {
            cout << -1 << endl;
        } else {
            reverse(res.begin(), res.end());
            for (int el : res) {
                cout << el;
            }
            cout << endl;
        }
    }

    return 0;
}
