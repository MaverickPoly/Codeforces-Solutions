#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> ar(n);
        for (int &x : ar) cin >> x;
        sort(ar.begin(), ar.end());
        // 1 1 1 2 2 3 4 4
        int cnt = 0;
        for (int i = 1; i < n; i++) {
            if (ar[i - 1] == ar[i]) {
                cnt++;
                i++;
            }
        }
        cout << "\t" << cnt << endl;
    }

    return 0;
}
