#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n, m, k, L, R;

/*
n = 6
k = 4
. . . . . .

r = n - k
l = k - 1

L = 0 R = m + 1
m = L + (R - L) / 2;

m = 4 l = 4
s1 = m * (m - 1) / 2 = 6
if (m <= l)
s1 -= (m - 1 - l) * (m - l) / 2

s2 = m * (m - 1) / 2
if (m <= r)
s2 -= (m - 1 - r ) * (m - r) / 2


if m + s1 + s2 <= M: return true
return false
*/


// . . .
// 2 3 4

bool f(ll mid) {
    ll s1 = mid * (mid - 1) / 2;
    ll x = max(0LL, L - mid + 1) + max(0LL, R - mid + 1);
    if (mid >= L) {s1 -= (mid - 1 - L) * (mid - L) / 2; }

    ll s2 = mid * (mid - 1) / 2;
    if (mid >= R) s2 -= (mid - 1 - R) * (mid - R) / 2;

    // cout << mid << ' ' << s1 << ' ' << s2 <<  ' ' << L << ' ' << R << endl;

    return mid + s1 + s2 + x <= m;
}

//       x
// . . . . . .

int main() {
    cin >> n >> m >> k;

    R = n - k;
    L = k - 1;

    // f f f f f t t t

    ll l = 0, r = m + 1;
    while(l < r) {
        ll mid = l + (r - l + 1) / 2;
        if (f(mid)) l = mid;
        else r = mid - 1;
    }

    cout << "\t" << l << endl;
    return 0;
}
