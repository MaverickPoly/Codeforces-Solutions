#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        if (b > d) {
            cout << -1 << endl;
            continue;
        }

        long long cy = d - b;
        long long x = a + cy;
        long long y = b + cy;

        if (c > x) {
            cout << -1 << endl;
            continue;
        }
        // cout<<(d-b)+(a+d-b-c)<<"\n";

        long long cx = x - c;

        cout << cy + cx << endl;        
    }

    return 0;
}
