#include <bits/stdc++.h>

using namespace std;

vector<int> sieve(int lim) {
    vector<bool> is_primes(lim + 1, false);
    vector<int> primes;
    for (int i = 2; i < lim; i++) {
        if (!is_primes[i]) {
            primes.push_back(i);
            if ((long long)i * i <= lim) {
                for (int j = i * i; j <= lim; j+=i) {
                    is_primes[j] = true;
                }
            }
        }
    }

    return primes;
}

int main() {
    vector<int> p = sieve(2000000);

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long g = a[0];
        for (int i = 1; i < n; i++) {
            g = __gcd(g, a[i]);
        }

        bool found = false;
        for (int i = 0; i < p.size(); i++) {
            int cur = p[i];
            if (cur > g) {
                cout << cur << endl;
                found = true;
                break;
            }
            if (g % cur != 0) {
                cout << cur << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << endl;
        }

    }

    return 0;
}
