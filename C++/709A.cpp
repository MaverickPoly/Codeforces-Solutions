#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, b, d;
    cin >> n >> b >> d;

    vector<int> ar(n);
    for (int i = 0; i < n; i++) cin >> ar[i];

    int cur = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (ar[i] <= b) {
            cur += ar[i];

            if (cur > d) {
                cur = 0;
                cnt++;
            }
        }
    }

    // cout << "\t" << cnt << endl;
    cout << cnt << endl;

    return 0;
}
