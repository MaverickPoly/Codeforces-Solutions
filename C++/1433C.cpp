#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    for (;t--;) {
        int n; cin >> n;

        vector<int> v(n);
        set<int> s;
        int mx = INT_MIN;
        int mx_i = -1;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            s.insert(v[i]);
            if (v[i] > mx) {
                mx = v[i];
                mx_i = i;
                // cout << "MAX: " << v[i] << " " << i << endl;
            }
        }

        if (s.size() == 1) {
            cout << "\t" << -1 << endl;
            continue;
        } else {
            int i = mx_i;
            while(true) {
                if (i < n and v[i] != mx) {
                    i++; 
                    // cout << "CLAUSE\n";
                    continue;
                }
                
                // cout << "DOWN" << " " << i << endl;
                if ((i == 0 and v[1] == mx) or (i == n - 1 and v[i - 1] == mx) or (i < n - 1 and i != 0 and v[i - 1] == v[i] and v[i] == v[i + 1])) {
                    i++;
                } else {
                    break;
                }
            }

            cout << "\t" << i + 1 << endl;
        }
    }

    return 0;
}
