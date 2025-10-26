#include <bits/stdc++.h>

using namespace std;

long long smallest_divisor(long long num) {
    int cur = 2;
    while(num % cur != 0) cur++;
    return cur;
}


int main() {
    int t; cin >> t;

    while(t--) {
        long long n, k; cin >> n >> k;

        while(k--) {
            int divisor = smallest_divisor(n);
            if (divisor == 2) {
                n += (k + 1) * 2;
                break;
            }
            n += divisor;
        }

        cout << "\t" << n << endl;
    }

    return 0;
}
