#include <bits/stdc++.h>

using namespace std;

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;

    if (num % 2 == 0 or num % 3 == 0) return false;
    int i = 5;
    while(i * i <= num) {
        if (num % i == 0 or num % (i + 2) == 0) {
            return false;
        }
        i += 6;
    }
    return true;
}

int main() {
    int t; cin >> t;

    while(t--) {
        int x; int k;
        cin >> x >> k;

        if (k == 2 and x == 1) {
            cout << "YES\n";
            continue;
        }

        if (k >= 2) {
            cout << "NO\n";
        } else {
            if (is_prime(x)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
