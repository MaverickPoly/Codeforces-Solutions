#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        string a, b, c;
        cin >> n >> a >> m >> b >> c;

        for (int i = 0; i < m; i++) {
            if (c[i] == 'D') {
                a += b[i];
            } else {
                a.insert(0, 1, b[i]);
            }
        }
        cout << a << endl;
    }

    return 0;
}
