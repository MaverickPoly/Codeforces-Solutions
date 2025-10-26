#include <bits/stdc++.h>

using namespace std;

/*
n - length of array
k - divisor
b - the beauty of array
s - sum of array

s / k = b

s >= k * b 
s <= k * b + (k - 1) * n

s >= 6 * 3 -> 18
s <= 18 + 5 * 3 -> 33

18 + min(19 - )


medium = s / n

Example:
3 6 3 19

medium = 6
6 7 8
1 + 1 + 1


5 4 7 38
medium = 7
7 8 9 10 11
1 + 2 + 2 + 2 + 3

*/


int main() {
    int t; cin >> t;

    while (t--) {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;

        vector<long long> a(n, 0);

        long long s0 = s;

        for (int i = 0; i < n; i++) {
            a[i] = min(k - 1, s);
            s -= a[i];
        }

        a[n - 1] += s;
        s = s0;

        int current = 0;
        for (int i = 0; i < n; i++) current += a[i] / k;
        if (current <= b and b <= s / k) {
            int j = 0;
            bool terminated = false;
            while (current != b) {
                current -= a[n - 1] / k;
                a[n - 1] += a[j];
                current += a[n - 1] / k;
                a[j] = 0;
                j++;
                if (j >= n) {
                    terminated = true;
                    break;
                }
            }

            if (terminated) {
                cout << -1 << endl;
            } else {   
                cout << "\t";
                for (int i = 0; i < n; i++) {
                    cout << a[i] << " ";
                }
            }
            cout << endl;
        } else {
            cout << "\t";
            cout << -1 << endl;
        }
    }

    return 0;
}
