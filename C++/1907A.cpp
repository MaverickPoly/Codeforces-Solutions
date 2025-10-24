#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        string st;
        cin >> st;

        for (char ch = 'a'; ch <= 'h'; ch++) {
            if (ch != st[0]) {
                cout << ch << st[1] << endl;
            }
        }

        for (int i = 1; i <= 8; i++) {
            if (i != st[1] - '0') {
                cout << st[0] << i << endl;
            }
        }
    }

    return 0;
}
