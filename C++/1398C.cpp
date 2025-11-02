#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        string str; cin >> str;
        int s = 0;
        int res = 0;
        map<int, int> m;
        m[0] = 1;
        for (int i = 0; i <= n; i++) {
            s += str[i] - '0';
            int x = s - i - 1;
            m[x]++;
            res += m[x] - 1;
        }

        cout << res << endl;
    }

    return 0;
}
