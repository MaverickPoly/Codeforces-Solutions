#include <bits/stdc++.h>
using namespace std;

bool all_same(vector<int> v) {
    for (int i = 1; i < v.size(); i++) {
        if (v[i] != v[0]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int &num : arr) cin >> num;

        if (all_same(arr)) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        sort(arr.begin(), arr.end());
        cout << arr.back() << " ";
        for (int i = 0; i < n - 1; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
