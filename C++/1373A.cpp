#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        cout << "\t";
        // Check if it is better to buy one from 1st shop or 2nd shop
        if (a < c) {
            cout << 1 << " ";
        } else {
            cout << -1 << " ";
        }

        // check if it is better to buy `b` from 2nd shop or 1st shop
        if (a * b > c) {
            cout << b << endl;
        } else {
            cout << -1 << endl;
        }

    }

    return 0;
}
