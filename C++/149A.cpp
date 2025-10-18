#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()

using namespace std;

int main() {
    int k; cin >> k;

    vector<int> v(12);
    for (int i = 0; i < 12; i++) cin >> v[i];

    sort(all(v));

    int cnt = 0;
    bool cant = false;
    while(k > 0) {
        k -= v[12 - cnt - 1];
        cnt++;
        if (cnt == 12 and k > 0) {
            cant = true;
            break;
        }
    }

    if (cant) {
        cout << -1 << endl;
    } else {
        cout << cnt << endl;
    }

    return 0;
}
