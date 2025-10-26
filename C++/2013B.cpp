#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<long long> array(n);
        for (int i = 0; i < n; i++) cin >> array[i];

        for (int i = 0; i < n - 2; i++) {
            array[n - 2] -= array[i];
        }

        array[n - 1] -= array[n - 2];
        cout << "\t" << array[n - 1] << endl;
    }

    return 0;
}
