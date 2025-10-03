#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int zero = 3, one = 1, two = 2, three = 1, five = 1;

        int res = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == 0) zero--;
            else if (x == 1) one--;
            else if (x == 2) two--;
            else if (x == 3) three--;
            else if (x == 5) five--;

            if (zero < 1 and one < 1 and two < 1 and three < 1 and five < 1 and res == 0) {
                res = i + 1;
            }
        }

        cout << res << endl;
    }

    return 0;
}
