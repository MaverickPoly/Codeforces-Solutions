#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int total = n / 4 + (n % 4) / 2;
        cout << total << endl;
    }

    return 0;
}
