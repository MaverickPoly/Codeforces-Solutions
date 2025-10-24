#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string st;
        cin >> st;

        while(true) {
            bool changes_made = false;

            for (int i = 1; i < st.size(); i++) {
                if (st[i] == st[i - 1]) {
                    changes_made = true;
                    if(i == 1) {
                        st[i] = st[i + 1];
                        st.erase(st.begin());
                    } else {
                        st[i - 1] = st[i - 2];
                        st.erase(st.begin() + i);
                    }
                }
            }

            if (!changes_made) break;
        }

        cout << st.size() << endl;
    }

    return 0;
}
