#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    set<int> s;
    vector<int> ar(n);
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
        s.insert(ar[i]);
    }

    sort(ar.begin(), ar.end());
    int mx = 0;
    int cur = 1;
    for (int i = 1; i < n; i++) {
        if (ar[i - 1] == ar[i]) {
            cur++;
        } else {
            mx = max(mx, cur);
            cur = 1;
        }
    }
    mx = max(mx, cur);

    cout << mx << " " << s.size() << endl;

    return 0;
}
