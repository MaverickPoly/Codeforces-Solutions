#include <bits/stdc++.h>

using namespace std;

int find_p(vector<char> &v, char c) {
    for (int i = 0; i < 3; i++) {
        if (c == v[i]) return i;
    }
    return -1;
}


int main() {
    int t;
    cin >> t;

    while(t--) {
        string a, b;
        cin >> a >> b;

        char al = a[a.size() - 1], bl = b[b.size() - 1];

        if (a == b) {
            cout << "=\n";
            continue;
        }

        vector<char> v = {'S', 'M', 'L'};
        int ap = find_p(v, al);
        int bp = find_p(v, bl);

        if (ap > bp) {
            cout << ">\n";
        } else if (ap < bp) {
            cout << "<\n";
        } else {
            int xa = a.size() - 1, xb = b.size() - 1;

            if (al == 'L') {
                if (xa > xb) cout << ">\n";
                else cout << "<\n";
            } else {
                if (xa > xb) cout << "<\n";
                else cout << ">\n";
            }
        }
    }

    return 0;
}
