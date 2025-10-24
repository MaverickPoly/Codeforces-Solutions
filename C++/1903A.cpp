#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> ar(n);
        for(int i = 0; i < n; i++) cin >> ar[i];

        if (k >= 2) {
            cout << "YES" << endl;
        } else {
            if (is_sorted(ar.begin(), ar.end())) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}