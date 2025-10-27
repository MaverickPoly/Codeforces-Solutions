#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;

    vector<long long> a(n);
    for (int i = 0;  i < n; i++) cin >> a[i];

    // B:
    long long cur_sum = 0;
    int cur_j = 0;
    for (int i = 0; i < m; i++) {
        long long num; cin >> num;

        int j = cur_j;
        num -= cur_sum;
        while(true) {
            if (num - a[j] > 0) {
                num -= a[j];
                cur_sum += a[j];
                j++;
                cur_j = j;
            } else {
                cout << j + 1 << " " << num << endl;
                break;
            }
        }
    }

    return 0;
}
