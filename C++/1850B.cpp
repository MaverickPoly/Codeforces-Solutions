#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int max_i = -1;
        int m = 0;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;

            if (a <= 10 and b > m) {
                m = max(m, b);
                max_i = i;
            }
        }

        cout << "\t" << max_i + 1 << endl;
    }

    return 0;
}
