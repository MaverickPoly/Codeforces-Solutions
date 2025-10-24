#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int cnt = 0;
        if (a > b) {
            while(a > b) {
                a -= c;
                b += c;
                cnt++;
            }
        } else {
            while(a < b) {
                a += c;
                b -= c;
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
