#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        ll s = 0;
        for (int i = 0; i < n; i++) {
            int current;
            cin >> current;
            s += current;
        }

        ll sq = sqrt(s);
        if (sq * sq == s) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}