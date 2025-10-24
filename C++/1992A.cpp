#include <bits/stdc++.h>
using namespace std;

int& min_3(int& a, int& b, int& c) {
    if (a < b) {
        if (a < c) return a;
        else return c;
    } else {
        if (b < c) return b;
        else return c;
    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        for (int i = 0; i < 5; i++) {
            min_3(a, b, c)++;
        }

        cout << a * b * c << endl;
    }

    return 0;
}
