#include <bits/stdc++.h>

using namespace std;

int calc_diff(int h1, int m1, int h2, int m2) {
    int diff = 0;
    if (h1 > h2 or (h1 == h2 and m1 > m2)) {
        diff += (23 - h1) * 60 + 60 - m1;
        h1 = 0; m1 = 0;
    }

    if (m1 > m2) {
        m2 += 60;
        h2--;
    }

    diff += m2 - m1 + (h2 - h1) * 60;
    return diff;
}

int main() {
    int t; cin >> t;

    while(t--) {
        int n, hi, mi;
        cin >> n >> hi >> mi;

        int mn = INT_MAX;
        for (int i = 0; i < n; i++) {
            int h, m; cin >> h >> m;

            int diff = calc_diff(hi, mi, h, m);
            if (diff < mn) {
                mn = diff;
            }
        }

        int hours = mn / 60; int minutes = mn % 60;
        cout << hours << " " << minutes << endl;
    }

    return 0;
}
