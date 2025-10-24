#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int &t : v) cin >> t;

        vector<int> copy = v;
        sort(copy.begin(), copy.end());
        
        for (int i = 0; i < n; i++) {
            if (v[i] == copy[n - 1]) {
                cout << v[i] - copy[n - 2];
            } else {
                cout << v[i] - copy[n - 1];
            }
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}
