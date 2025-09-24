#include  <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        int s = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            s += arr[i];
        }

        if (s > n) {
            cout << s - n << endl;
        } else if (s < n) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}
