#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    if (!(cin >> n))
        return 0;
    long long ans = (n % 2 == 0) ? (n / 2) : (-(n + 1) / 2);
    cout << ans << '\n';
    return 0;
}
