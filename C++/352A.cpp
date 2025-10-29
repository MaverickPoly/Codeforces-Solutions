#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    vector<int> a(n);
    int cnt0 = 0, cnt5 = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] == 0) cnt0++;
        else cnt5++;
    }

    if (cnt0 == 0) {
        cout << -1 << endl;
        return 0;
    }

    if (cnt5 < 9) {
        cout << 0 << endl;
    } else {
        for (int i = 0; i < (cnt5 / 9) * 9; i++) cout << 5;
        for (int i = 0; i < cnt0; i++) cout << 0;
        cout << endl;
    }
}
