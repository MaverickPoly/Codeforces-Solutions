#include <bits/stdc++.h>

using namespace std;

int min_3(int a, int b, int c) {
    return min(a, min(b, c));
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;

        int ans = min_3((a + b) / 4, a, b);
        cout << ans << endl;
    }

    return 0;
}
