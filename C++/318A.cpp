#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    // 1 3 5 7 2 4 6  -  7
    // 1 3 5 7 2 4 6 8  -  5

    if (k <= (n + 1) / 2) {
        cout << k * 2 - 1 << endl;
    } else {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }

    return 0;
}
