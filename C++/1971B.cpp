#include <bits/stdc++.h>

using namespace std;

int allSame(const string& st) {
    for (int i = 1; i < st.size(); i++) {
        if (st[i] != st[0]) return i;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        string st;
        cin >> st;

        int index = allSame(st);
        if (index == -1) {
            cout << "NO" << endl;
        } else {
            char temp = st[0];
            st[0] = st[index];
            st[index] = temp;
            cout << "YES" << endl;
            cout << st << endl;
        }
    }

    return 0;
}
