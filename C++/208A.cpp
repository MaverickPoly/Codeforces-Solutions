#include <bits/stdc++.h>

using namespace std;

int main() {
    string st;
    cin >> st;

    int n = st.size();
    vector<string> words;
    string cur = "";
    for (int i = 0; i < n; i++) {
        if (i + 2 < n and st[i] == 'W' and st[i + 1] == 'U' and st[i + 2] == 'B') {
            if (!cur.empty()) {
                words.push_back(cur);
                cur.clear();
            }
            i += 2;
        } else {
            cur.push_back(st[i]);
        }
    }

    if (!cur.empty()) {
        words.push_back(cur);
    }

    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << " ";
    }
    cout << endl;

    return 0;
}
