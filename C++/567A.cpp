#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    vector<int> ar(n);
    for (int i = 0; i < n; i++) cin >> ar[i];
    
    for (int i = 0; i < n; i++) {
        int mini, maxi;
        if (i == 0) {
            mini = ar[i + 1] - ar[i];
            maxi = ar[n - 1] - ar[i];
        } else if (i == n - 1) {
            mini = ar[i] - ar[i - 1];
            maxi = ar[i] - ar[0];
        } else {
            mini = min(ar[i] - ar[i - 1], ar[i + 1] - ar[i]);
            maxi = max(ar[i] - ar[0], ar[n - 1] - ar[i]);
        }
        cout << mini << " " << maxi << endl;
    }

    return 0;
}
