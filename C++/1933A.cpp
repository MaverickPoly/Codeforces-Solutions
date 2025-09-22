#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int sum = 0;
        for (int i = 0; i < n; i++) {
            int cur;
            cin >> cur;

            sum += abs(cur);
        }

        cout << sum << endl;
    }

    return 0;
}
