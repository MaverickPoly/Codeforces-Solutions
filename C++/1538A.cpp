#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        auto min_pos = find(a.begin(), a.end(), 1) - a.begin();
        auto max_pos = find(a.begin(), a.end(), n) - a.begin();

        // cout << min_pos << " " << max_pos << endl;

        // cout << "\t";
        cout << min({
            max(min_pos, max_pos) + 1,                //  3
            max(n - min_pos, n - max_pos),            //  3
            min_pos + n - max_pos + 1,                //  4
            max_pos + n - min_pos + 1,                //  6
        }) << endl;
    }

    return 0;
}
