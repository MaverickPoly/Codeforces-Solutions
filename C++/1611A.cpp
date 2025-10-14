#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        if (stoi(s) % 2 == 0) {
            cout << "0\n";
        } else if ((s[0] - '0') % 2 == 0) {
            cout << "1\n";
        }
        else {
            bool found = false;
            for (int i = 0; i < s.size(); i++) {
                if ((s[i] - '0') % 2 == 0) {
                    found = true;
                    break;
                }
            }

            if (found) {
                cout << "2\n";
            } else {
                cout << "-1\n";
            }
        }
    }

    return 0;
}
