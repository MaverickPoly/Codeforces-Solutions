#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int p;
        cin >> p;

        cout << 2 << " " << p - p % 2 << endl;
    }

    return 0;
}
