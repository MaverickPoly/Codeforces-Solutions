#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        string s;
        cin >> n >> s;

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            string cur = s;
            cur[i] = cur[i] == '1' ? '0' : '1';

            for (char ch : cur) {
                if (ch == '1') cnt++;
            }
        }

        cout << "\t" << cnt << endl;
    }

    return 0;
}
