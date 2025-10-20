#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << "0 0\n";
            continue;
        }
        
        long long res = abs(a - b);
        long long cnt = min(a % res, res - b % res);
        cout << res << " " << cnt << endl;
    }

    return 0;
}
