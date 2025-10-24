#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;

        int x, y;
        if (a > b) {
            x = b;
            y = a;
        } else {
            x = a;
            y = b;
        }
        int result;
        if (2 * x > y) {
            result = 4 * x * x;
        } else {
            result = y * y;
        }

        cout << result << "\n";
    }

    return 0;
}
