#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int &t : arr) cin >> t;

        int even = arr[0] % 2;  // 0
        int odd = arr[1] % 2;  // 1

        bool yes = true;
        for (int i = 0; i < n; i+=2) {
            if (arr[i] % 2 != even) {
                yes = false;
                break;
            }
        }
        for (int i = 1; i < n; i+=2) {
            if (arr[i] % 2 != odd) {
                yes = false;
                break;
            }
        }

        if (yes) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
