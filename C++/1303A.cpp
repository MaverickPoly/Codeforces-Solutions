#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string st;
        cin >> st;

        // Remove leading and trailing zeros
        while(st[0] == '0') {
            st.erase(st.begin());
        }
        while(st[st.size() - 1] == '0') {
            st.erase(st.end() - 1); 
        }

        // cout << "Modified: " << st << endl;

        int ans = 0;
        int cnt = 0;
        bool one = false;
        for (int i = 0; i < st.size(); i++) {
            if (st[i] == '0') {
                cnt++;
                one = false;
            } else {
                if (!one) {
                    ans += cnt;
                    cnt = 0;
                }
                one = true;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
