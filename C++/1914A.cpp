#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'A']++;
        }

        int cnt = 0;
        for (int i = 0; i < 26; i++) {
            int required = i + 1;
            if (freq[i] >= required) cnt++;
        }

        cout << "\t" << cnt << endl;
    }


    return 0;
}
