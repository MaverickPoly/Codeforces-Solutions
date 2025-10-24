#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; string s;
        cin >> n >> s;

        auto is_vowel = [](char ch) {
            if (ch == 'a' or ch == 'e') return true;
            return false;
        };
        auto is_consonant = [](char ch) {
            if (ch == 'b' or ch == 'c' or ch == 'd') return true;
            return false;
        };

        vector<string> res;
        for (int i = 2; i <= n; i+=2) {
            string cur = "";
            cur += s[i - 2]; cur += s[i - 1];
            if ((i + 1 < n and is_consonant(s[i]) and is_consonant(s[i + 1])) or (i + 1 == n and is_consonant(s[i]))) {
                cur += s[i];
                i++;
            }
            res.push_back(cur);
        }

        int len = res.size();
        for (int i = 0; i < len; i++) {
            cout << res[i];
            if (i != len - 1) cout << ".";
        }
        cout << endl;
    }

    return 0;
}
