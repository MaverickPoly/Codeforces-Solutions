#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        string n; cin >> n;

        int cnt = 0;
        for (int i = 0; i < n.size(); i++) {
            if (n[i] != '0') cnt++;
        }

        int k = n.size() - 1;
        while(n[k] == '0') {
            k--;
            cnt++;
        }

        cout << cnt - 1 << endl;
    }

    return 0;
}
