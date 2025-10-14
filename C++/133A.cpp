#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;

    bool found = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'H' or s[i] == 'Q' or s[i] == '9') {
            cout << "YES\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "NO\n";
    }

    return 0;
}
