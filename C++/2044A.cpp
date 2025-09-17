#include <iostream>

using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;

    while(t--) {
        int n;
        cin >> n;
        // a + b == n

        int cnt =  0;
        for (int a = 1; a < n; a++) {
            for (int b = 1; b < n; b++)
                if (a + b == n) cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}
