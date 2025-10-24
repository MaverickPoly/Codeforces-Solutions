#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int negative = 0, positive = 0;

        for (int i = 0; i < n; i++) {
            int num; cin >> num;
            if (num < 0) negative++;
            else positive++;

            a[i] = num;   
        }

        /*
            Positive >= Negative
            Negative % 2 == 0
        */

        int cnt = 0;
        if (positive < negative) {
            int ab = abs(positive - negative);
            negative -= ab / 2;
            positive += ab / 2;
            cnt += ab / 2;
            if (ab % 2 != 0) {
                negative--;
                positive++;
                cnt++;
            }
        }

        if (negative % 2 != 0) {
            negative--;
            cnt++;
        }

        cout << "\t" << cnt << endl;
    }

    return 0;
}
