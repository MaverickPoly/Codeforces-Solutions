#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    if (s[0] == '-') {
        int n = s.size();
        if (s[n - 1] > s[n - 2]) {
            s.erase(s.end() - 1);
        } else {
            s.erase(s.end() - 2);
        }
        if (s[1] == '0') {
            s.erase(s.begin());
        }
    }
    cout << s << endl;

    return 0;
}
