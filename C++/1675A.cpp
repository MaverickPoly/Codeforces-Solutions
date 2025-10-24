#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        x -= a;
        y -= b;

        // if (x > 0 and y > 0) {
        //     cout << "NO" << endl;
        //     continue;
        // }

        if (x > 0 and c == 0) {
            cout << "NO" << '\n';
        }
        else if (y > 0 and c == 0) {
            cout << "NO" << '\n';
        } 
        else if (x > c) {
            cout << "NO" << '\n';
        } else if (y > c) {
            cout << "NO" << '\n';
        } else {
            c -= x;
            x = 0;

            y -= c;
            if (y > 0) {
                cout << "NO" << '\n';
            } else {
                cout << "YES" << '\n';
            }
        }
    }


    return 0;
}
