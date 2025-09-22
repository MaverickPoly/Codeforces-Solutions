#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        long long ans = (1LL << (n / 2 + 1)) - 2;
        cout << ans << endl;
    }

    return 0;
}
