#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; i++) cin >> heights[i];

    int m = abs(heights[0] - heights[n - 1]);
    int a = 0, b = n - 1;
    for (int i = 1; i < n; i++) {
        int cur = abs(heights[i] - heights[i - 1]);
        if (cur < m) {
            m = cur;
            a = i - 1;
            b = i;
        }
    }

    cout << "\t" << a + 1 << " " << b + 1 << endl;;

    return 0;
}
