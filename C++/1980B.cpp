#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<string> res;

    while(t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        f--; k--;
        int target = a[f];


        sort(a.begin(), a.end(), greater<int>());


        if (a[k] > target) {
            cout << "NO" << endl;
        } else if (a[k] < target) {
            cout << "YES" << endl;
        } else {
            if (k == n - 1 or a[k + 1] < target) {
                cout << "YES" << endl;
            } else {
                cout << "MAYBE" << endl;
            }
        }
    }

    // for (string st : res) {
    //     cout << st << endl;
    // }

    return 0;
}
