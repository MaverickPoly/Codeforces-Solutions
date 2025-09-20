#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int evens = 0, odds = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;

            if (a % 2 == 0) evens += a;
            else odds += a;
        }

        if (evens > odds) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
