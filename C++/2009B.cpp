#include <bits/stdc++.h>
using namespace std;

int find_index(string st) {
    for (int i = 0; i < st.size(); i++) {
        if (st[i] == '#') return i;
    }
    return -1;
}

int main() {
    int t; 
    if (!(cin >> t)) return 0;

    while(t--) {
        int n;
        cin >> n;
        vector<int> result(n);

        for (int i = 0; i < n; i++) {
            string st;
            cin >> st;
            int index = find_index(st) + 1;
            result[i] = index;
        }

        for (int i = 0; i < n; i++) {
            cout << result[n - i - 1] << " ";
        }
        cout << endl;
    }

    return 0;
}
