#include <bits/stdc++.h>

using namespace std;

int find_pos(int n, vector<int> &c) {
    for (int i = 0; i < 3; i++) {
        if (c[i] > n / 3) return i;
    }
    return -1;
}

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> a(n);
        vector<int> c(3, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            c[a[i] % 3]++;
        }

        int total = 0;
        int pos = find_pos(n, c);
        while(pos != -1) {
            c[pos]--;
            c[(pos + 1) % 3]++;
            total++;
            pos = find_pos(n, c);
        }

        cout << "\t" << total << endl;
    }

    return 0;
}
