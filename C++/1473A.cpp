#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, d;
        cin >> n >> d;

        bool check = false;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] > d) check = true;
        }
        
        if (!check) {
            cout << "YES" << endl;
            continue;
        }

        sort(v.begin(), v.end());
        if (v[0] + v[1] <= d) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
