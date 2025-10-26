#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d; cin >> n >> d;

    vector<int> ar(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
        sum += ar[i];
    }

    if (sum + 10 * (n - 1) > d) {
        cout << -1 << endl;
    } else {
        int total = 2 * (n - 1);
        int left = d - sum - 10 * (n - 1);
        total += left / 5;
        // cout << left << " " << total << endl;
        cout << total << endl;
    }

    return 0;
}
