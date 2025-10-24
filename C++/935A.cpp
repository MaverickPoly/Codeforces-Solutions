#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    int ans = 0;
    for (int l = 1; l <= n / 2; l++) {
        if (n % l == 0) ans++;
    }
    cout << ans << endl;

    return 0;
}
