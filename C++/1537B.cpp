#include <bits/stdc++.h>

using namespace std;

#define TOP_LEFT 1, 1, i, j
#define TOP_RIGHT 1, m, i, j
#define BOTTOM_LEFT n, 1, i, j
#define BOTTOM_RIGHT n, m, i, j

int main() {
    int t; cin >> t;

    auto calc_distance = [](int x1, int y1, int x2, int y2) {
        int x = abs(x1 - x2);
        int y = abs(y1 - y2);
        return x + y;
    };

    while(t--) {
        int n, m, i, j;
        cin >> n >> m >> i >> j;

        int top_left = calc_distance(TOP_LEFT);
        int top_right = calc_distance(TOP_RIGHT);
        int bottom_left = calc_distance(BOTTOM_LEFT);
        int bottom_right = calc_distance(BOTTOM_RIGHT);

        int a = top_left + bottom_right;
        int b = top_right + bottom_left;

        if (a > b) {
            cout << 1 << " " << 1 << " " << n << " " << m << endl;
        } else {
            cout << 1 << " " << m << " " << n << " " << 1 << endl;
        }
    }

    return 0;
}
