#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        // Get Input
        int n;
        cin >> n;

        vector<long long> arr(n);
        for (long long &x : arr) cin >> x;

        // Calculate sum
        long long s = 0;
        for (long long x : arr) {
            s += abs(x);
        }

        // Calculate number of operations
        int ops = 0;
        int l = 0, r = 0;
        while(r < n) {
            bool found_negative = false;
            while(arr[r] <= 0 and r < n) {
                if (arr[r] < 0) found_negative = true;
                r++;
            }
            l = r++;
            if (found_negative) ops++;
        }

        // Output result
        cout << s << " " << ops << endl;
    }

    return 0;
}
