#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int num; cin >> num;
        int idx = upper_bound(a.begin(), a.end(), num) - a.begin();
        cout << "\t" << idx << endl;
    }

    return 0;
}
