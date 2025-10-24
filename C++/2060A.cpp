#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        vector<int> ar = {a1 + a2, a4 - a2, a5 - a4};
        int best = 0;
        for (int x : ar) {
            int cnt = 0;
            if (x == a1 + a2) cnt++;
            if (a4 == a2 + x) cnt++;
            if (a5 == a4 + x) cnt++;
            best = max(best, cnt);            
        }

        cout << best << endl;
    }

    return 0;
}
