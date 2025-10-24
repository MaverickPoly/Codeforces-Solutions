#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int x;
        cin >> x;

        for (int g = 1; g <= x; g++) {
            if (x % g != 0) continue;
            int mn = x / g - 1;
            if (mn <= 0) continue;

            int a = g;
            int b = g * mn;

            if (__gcd(a, b) + lcm(a, b) == x) {
                cout << a << " " << b << endl;
                break;
            }
        }
    }


    return 0;
}
