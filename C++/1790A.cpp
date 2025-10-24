#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        string st;
        cin >> st;

        string pi_str = "3141592653589793238462643383279";

        int cnt = 0;
        int i = 0;
        while(i < st.size() && st[i] == pi_str[i]) {
            cnt++;
            i++;
        }

        cout << cnt << endl;
        cout << endl;
    }

    return 0;
}
