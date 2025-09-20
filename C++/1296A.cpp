#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int odd = 0, even = 0;
        for (int i = 0; i < n; i++) {
            int current;
            cin >> current;
            if (current % 2 == 0) even++;
            else odd++;
        }

        if (odd and even) cout << "YES" << endl;
        else if (odd % 2 != 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
