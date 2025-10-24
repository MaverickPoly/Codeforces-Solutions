#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++) cin >> ar[i];

        vector<int> count(26, 0);

        auto find_first = [&](int cnt) {
            for (int i = 0; i < 26; i++) {
                if (count[i] == cnt) return i;
            }
            return -1;
        };

        string s = "";
        for (int i = 0; i < n; i++) {
            int index = find_first(ar[i]);
            s += 'a' + index;
            count[index]++;
        }

        cout << s << endl;
    }


    return 0;
}
