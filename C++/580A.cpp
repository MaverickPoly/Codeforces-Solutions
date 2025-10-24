#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int ans = 0;
    int cnt =  1;
    for (int i = 1; i < n; i++) {
        if (v[i - 1] <= v[i]) cnt++;
        else {
            ans = max(cnt, ans);
            cnt = 1;
        }
    }

    ans = max(cnt, ans);

    cout << ans << endl;

    return 0;
}
