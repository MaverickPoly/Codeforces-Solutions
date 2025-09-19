#include <bits/stdc++.h>
using namespace std;


bool is_ordinary(int d) {
    string st = to_string(d);
    for (int i = 1; i < st.size(); i++) {
        if (st[i] != st[i - 1]) return false;
    }
    return true;
}


int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int cnt = 0;
        for (int digit = 1; digit <= 9; digit++) {
            long long x = digit;
            while(x <= n) {
                cnt++;
                x = x * 10 + digit;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
