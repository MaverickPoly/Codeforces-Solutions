#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<char> ans;
        for (char a = 'a'; a <= 'z'; a++) {
            for (char b = 'a'; b <= 'z'; b++) {
                int ch = n - ((a - 'a' + 1) + (b - 'a' + 1));
                if (1 <= ch and ch <= 26) {
                    char c = ch + 'a' - 1;
                    ans = {a, b, c};
                    break;
                }
            }
            if (!ans.empty()) break;
        }

        cout << ans[0] << ans[1] << ans[2] << endl;
    }

    return 0;
}
