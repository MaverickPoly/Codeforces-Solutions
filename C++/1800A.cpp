#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        string s;
        cin >> n >> s;

        transform(s.begin(), s.end(), s.begin(), [](char c){return tolower(c);});
        string res = "";
        for (int i = 0; i < n; i++) {
            if (i == 0 or s[i] != s[i - 1]) {
                res += s[i];
            }
        }

        cout << (res == "meow" ? "YES" : "NO") << endl;
    }

    return 0;
}
