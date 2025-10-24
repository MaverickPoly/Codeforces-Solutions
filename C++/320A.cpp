#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();

    for (int i = 0; i < n; i++) {
        if (s[i] != '1' and s[i] != '4') {
            cout << "NO\n";
            return 0;
        }
    }

    // Count 4's
    bool found = false;
    for (int i = 0; i < n - 2; i++) {
        if (s[i] == s[i + 1] and s[i + 1] == s[i + 2] and s[i + 2] == '4') {
            found = true;
            break;
        }
    }

    if (found or s[0] == '4') {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }

    return 0;
}
