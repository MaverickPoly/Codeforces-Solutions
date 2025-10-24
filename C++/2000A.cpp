#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string st;
        cin >> st;

        bool correct = true;
        if (st.size() < 3 || st.substr(0, 2) != "10") {
            correct = false;
        } else {
            string back = st.substr(2);
            if (back[0] == '0') correct = false;
            else if (back == "1") correct = false;
        }

        if (correct) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
