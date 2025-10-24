#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int &t : v) cin >> t;

    int m = 0;
    int cnt = 1;
    int prev = v[0];

    for (int i = 1; i < n; i++) {
        if (prev < v[i]) {
            cnt++;
        } else {
            m = max(m, cnt);
            cnt = 1;
        }
        prev = v[i];
    }
    m = max(m, cnt);
    cout << m << endl;

    return 0;
}
