#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        
        int s = sqrt(n);
        if (s * s == n) {
            cout << 0 << " " << s << endl;
        } else {
            cout << -1 << endl;
        }

    }

    return 0;
}
