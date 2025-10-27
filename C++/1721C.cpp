#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];


        vector<int> indices(n);
        for (int i = 0; i < n; i++) {
            indices[i] = i;
        }

        sort(indices.begin(), indices.end(), [&](int i, int j) {return a[i] < a[j];});

        vector<int> mn(n, 0);
        vector<int> mx(n, 0);

        int lst = n;
        for (int i = n - 1; i >= 0; i--) {
            int pos = indices[i];
            mn[pos] = lower_bound(b.begin(), b.end(), a[pos]) - b.begin();
            mx[pos] = lst - 1;

            if (i == mn[pos]) 
                lst = i;

            
            mn[pos] = b[mn[pos]] - a[pos];
            mx[pos] = b[mx[pos]] - a[pos];
        }

        // cout << "ANS:\n";
        for (int i = 0; i < n; i++) cout << mn[i] << " ";
        cout << endl;
        for (int i = 0; i < n; i++) cout << mx[i] << " ";
        cout << endl;
    }

    return 0;
}
