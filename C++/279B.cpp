#include <bits/stdc++.h>

using namespace std;

// Naive approach
int main_prev() {
    int n, t; cin >> n >> t;

    // Take input
    vector<int> v(n);
    for (int &el : v) cin >> el;

    // Build prefix sum
    vector<int> ps(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        ps[i] = ps[i - 1] + v[i - 1];
    }

    // Display prefix sum
    // for (int i = 0; i <= n; i++) {
    //     cout << ps[i] << " ";
    // }
    // cout << endl;

    // Find the biggest subarray with sum not greated than k
    int ans = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int s = ps[j] - ps[i];
            if (s <= t) {
                // cout << s << " " << j << " " << i << endl;
                ans = max(ans, j - i);
            }
        }
    }

    cout << "\t" << ans << endl;


    return 0;
}

// Prefix sum solution
int main1() {
    int n, t; cin >> n >> t;

    // Take input
    vector<int> v(n);
    for (int i = 0; i < n; i++)cin >> v[i];

    // Build prefix sum
    vector<int> ps(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        ps[i] = ps[i - 1] + v[i - 1];
    }

    // Display prefix sum
    // for (int i = 0; i <= n; i++) {
    //     cout << ps[i] << " ";
    // }
    // cout << endl;

    int ans = 0;
    map<long long, int> m;
    m[0] = 0;

    for (int i = 1; i <= n; i++) {
        long long target = ps[i] - t;

        auto it = m.lower_bound(target);
        if (it != m.end()) {
            ans = max(ans, i - it->second);
        }

        if (m.find(ps[i]) == m.end()) {
            m[ps[i]] = i;
        }
    }

    cout << "\t" << ans << endl;


    return 0;
}

// Two pointer solution
int main() {
    int n, t; cin >> n >> t;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    // sort(v.begin(), v.end());

    int l = 0;
    int ans = 0;
    int s = 0;
    for (int r = 0; r < n; r++) {
        s += v[r];
        while(s > t) {
            s -= v[l];
            l++;
        }
        ans = max(r - l + 1, ans);
    }

    cout << "\t" << ans << endl;

    return 0;
}
