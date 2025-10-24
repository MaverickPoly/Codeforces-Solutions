#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int ans = 0, p = 1;
        while(p <= n) {
            ans += min(9, n / p);
            p *= 10;
        }
        cout << ans << endl;
    }

    return 0;
}
