#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int &x : arr) cin >> x;

        sort(arr.begin(), arr.end());

        int l = 0, r = n - 1;
        int cost = 0;
        while(l < r) {
            cost += arr[r] - arr[l];
            l++; r--;
        }
        cout << "\t" << cost << endl;
    }

    return 0;
}
