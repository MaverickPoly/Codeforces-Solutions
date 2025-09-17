#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> b(n);

        for (int &t : a) cin >> t;
        for (int &t : b) cin >> t;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        int i = 0;
        while(i < k and b[i] > a[i]) {
            a[i] = b[i];
            i++;
        }

        int sum = 0;
        for (int i = 0; i < n; i++) sum += a[i];

        cout << sum << endl;
    }

    return 0;
}
