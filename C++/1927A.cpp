#include <bits/stdc++.h>
using namespace std;

int find_start(string st, char c) {
    for (int i = 0; i < st.size(); i++) {
        if (st[i] == c) return i;
    }
    return -1;
}

int find_end(string st, char c) {
    for (int i = st.size() - 1; i >= 0; i--) {
        if (st[i] == c) return i;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string st;
        cin >> st;

        int start = find_start(st, 'B');
        int end = find_end(st, 'B');

        cout << end - start + 1 << endl;
    }

    return 0;
}
