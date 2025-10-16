#include <bits/stdc++.h>

using namespace std;

int main() {
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char ch; string s;
    cin >> ch >> s;

    int n = keyboard.size();

    auto find_ch = [&](char c) {
        for (int i = 0; i < n; i++) {
            if (keyboard[i] == c) return i;
        }
        return -1;
    };

    string res = "";
    for (int i = 0; i < s.size(); i++) {
        int index = find_ch(s[i]);
        // cout << "  - " << keyboard[index - 1] << " " << s[index] << " " << keyboard[index + 1] << endl;
        if (ch == 'R') {
            res.push_back(keyboard[index - 1]);
        } else {
            res.push_back(keyboard[index + 1]);
        }
    }

    cout << res << endl;

    return 0;
}
