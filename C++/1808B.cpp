#include <bits/stdc++.h>
using namespace std;

#define int long long


// 1 7 3
// a = 1 3 7

// p = [0, 1, 4, 11]
// for i in range(n):
//     total += i * a[i] - p[i]
//     total += p[n] - p[i + 1] - (n - i - 1) * a[i]


signed main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> ar(n);
        for (int i = 0; i < n; i++) {
            vector<int> v(m);
            for (int j = 0; j < m; j++) {
                cin >> v[j];
            }
            ar[i] = v;
        }

        int total = 0;
        for (int i = 0; i < m; i++) {
            // Build column
            vector<int> col(n);
            for (int j = 0; j < n; j++) {
                col[j] = ar[j][i];
            }
            
            // Sort
            sort(col.begin(), col.end());

            // Build prefix sum
            vector<int> p(n + 1, 0);
            for (int j = 1; j <= n; j++) {
                p[j] = p[j - 1] + col[j - 1];
            }

            // Calculate
            for (int j = 0; j < n; j++) {
                total += j * col[j] - p[j];
                // total += p[n] - p[j + 1] - (n - j - 1) * col[j];
            }
        }

        cout << "\t" << total << endl;
    }

    return 0;
}
