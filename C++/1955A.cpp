#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;

        int res;
        if (2 * a < b) {
            res = a * n;
        } else {
            res = (n % 2) * a + (n / 2) * b;
        }

        cout << res << endl;
    }

    return 0;
}