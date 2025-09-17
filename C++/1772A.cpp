#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string st;
        cin >> st;

        // Find + Sign index
        int pos;
        for (int i = 0; i < st.size(); i++) {
            if (st[i] == '+') pos = i;
        }

        // Split text into 2 strings
        int left = stoi(st.substr(0, pos));
        int right = stoi(st.substr(pos, st.size()));

        // Calculate
        cout << left + right << endl;
    }

    return 0;
}