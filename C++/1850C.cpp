#include <bits/stdc++.h>
using namespace std;
const int SIZE = 8;
int main() {
    int t;
    cin >> t;

    while(t--) {
        string st;
        string res;

        int z = 0;
        int i = 0;
        bool found = false;
        while(i < SIZE) {
            cin >> st;

            if (!found) {
                for (int j = 0; j < SIZE; j++) {
                    if (st[j] != '.') {
                        res.push_back(st[j]);
                        z = j;
                        found = true;
                        break;
                    }
                }
            } else if (st[z] != '.') {
                res.push_back(st[z]);
            }
            i++;
        }

        cout << res << endl;
    }

    return 0;
}
