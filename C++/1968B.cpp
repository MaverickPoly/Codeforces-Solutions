#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        
        int l = 0, r = 0;
        while(l < n and r < m) {
            if (a[l] == b[r]) l++;
            r++;
        }

        cout << "\t" << l << endl;
    }

    return 0;
}
