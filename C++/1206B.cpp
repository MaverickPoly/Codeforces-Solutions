#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    vector<long long> ar(n);

    long long total = 0;
    int cnt1 = 0, cnt0 = 0, cntm1 = 0;
    for (int i = 0; i < n; i++) {
        cin >> ar[i];

        if (ar[i] == 0) {
            cnt0++;
            continue;
        }
        
        long long distance_one = abs(1 - ar[i]);
        long long distance_m_one = abs(-1 - ar[i]);

        if (distance_one < distance_m_one) {
            cnt1++;
            total += distance_one;
        } else {
            cntm1++;
            total += distance_m_one;
        }
    }

    /*
    If cntm1 is even, then add all cnt0 to cnt1
    else if cntm1 is odd:
        if cnt0 > 0: add one of it to cntm1 and others to cnt1
        else add one cntm1 to cnt1 to make it even
    */

    if (cntm1 % 2 == 0 or cnt0 > 0) {
        total += cnt0;
    } else {
        total += cntm1 + 1;
    }

    cout << total << endl;

    return 0;
}
