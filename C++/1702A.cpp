#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int p = 1;
        while(p * 10 <= n) p *= 10;

        cout << n - p << endl;
    }

    return 0;
}
