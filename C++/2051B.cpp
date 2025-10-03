#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;

    while(t--) {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;

        ll s = a + b + c;
        ll cycles = (n - 1) / s;
        ll days = cycles * 3;
        ll walked = cycles * s;
        ll rem = n - walked;

        if (rem <= a) cout << days + 1 << endl;
        else if (rem <= a + b) cout << days + 2 << endl;
        else cout << days + 3 << endl;
    }

    return 0;
}
