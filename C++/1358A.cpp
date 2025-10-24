#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        long long cells = n * m;
        long long amount = (cells + 1) / 2;
        cout << amount << endl;
    }

    return 0;
}

