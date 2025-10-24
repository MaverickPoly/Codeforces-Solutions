#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) 
    {
        int n, k;
        cin >> n >> k;

        int coins = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;

            if (num > 0 and num >= k) {
                coins += num;
            } else if (num == 0 and coins > 0) {
                cnt++;
                coins--;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
