#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            if (ar[i] == 1) ar[i]++;
        }

        for (int i = 0; i < n - 1; i++) {
            if (ar[i + 1] % ar[i] == 0) ar[i + 1]++;
        }

        for (int i = 0; i < n; i++) {
            cout << ar[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
